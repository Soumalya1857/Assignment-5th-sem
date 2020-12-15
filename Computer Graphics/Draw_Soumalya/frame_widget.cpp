#include "frame_widget.h"
#include <bits/stdc++.h>
#include "time.h"
#include <chrono>
QPoint frame_widget::convertPixel(QPoint p)
{
    QPoint pos = p;
   int x = pos.x();
   int y = pos.y();
   if(x >= (width()/(2*size))*size  && x <= ((width()/(2*size))*size  + size)){
        x = 0;
   }
   else if(x >= width()/2)
    x = (x - (width()/(2*size))*size - size)/size + 1 ;
   else{
        x = -(((width()/(2*size))*size  - x)/size + 1) ;
   }
   if(y >= (height()/(2*size))*size && y <= ((height()/(2*size))*size + size)  )
       y = 0;
   else if(y >= height()/2)
    y = -((y - (height()/(2*size))*size - size)/size + 1);
   else{
       y = ((height()/(2*size))*size - y)/size + 1;
   }
   QPoint pf(x, y);
   return pf;
}

QPoint frame_widget::convertCoord(int x, int y)
{
   QPoint p((width()/(2 * size))*size, (height()/(2 * size))*size);
   p.setX(p.x() + size*x);
   p.setY(p.y() - size*y);
   return p;


}

frame_widget::frame_widget(QWidget *parent):
    QFrame(parent)
{
    size = 100;
    grid = false;
    modified = false;
    size = 25;
    maxwidth = 500;
    maxheight = 500;
    visibleAxes = false;
    this->setMouseTracking(true) ;
    currentcol = QColor(Qt::blue);
    lineDDA = false;
    lineBresh = false;
    circleBA = false;
    circleMP = false;
    circlePolar = false;
    ellipseBA = false;
    Rcolor = 255;
    Gcolor = 0;
    Bcolor = 0;
}




void frame_widget::createGrid()
{
    //grid = true;
    points.clear();
    update();
}

void frame_widget::changeSize(int x)
{
    size = x;
    maxwidth = (500/size) * size ;
    maxheight = (500/size)*size ;
    createGrid();
    //update();
}

void frame_widget::showAxes()
{
   visibleAxes = true;
   update();
}

void frame_widget::changeGridSize(int x)
{
   maxheight = maxwidth = x;
   update();
}

void frame_widget::hideAxes()
{
   visibleAxes = false;
   update();
}

void frame_widget::toggleAxes()
{
    if(visibleAxes == true)
        visibleAxes = false;
    else
        visibleAxes = true;


   update();
}

void frame_widget::toggleGrid()
{
   grid = !grid;
   update();
}

void frame_widget::mouseMoveEvent(QMouseEvent *ev)
{
   QPoint pos = ev->pos();
   int x = pos.x();
   int y = pos.y();
   if(x >= (width()/(2*size))*size  && x <= ((width()/(2*size))*size  + size)){
        x = 0;
   }
   else if(x >= width()/2)
    x = (x - (width()/(2*size))*size - size)/size + 1 ;
   else{
        x = -(((width()/(2*size))*size  - x)/size + 1) ;
   }
   if(y >= (height()/(2*size))*size && y <= ((height()/(2*size))*size + size)  )
       y = 0;
   else if(y >= height()/2)
    y = -((y - (height()/(2*size))*size - size)/size + 1);
   else{
       y = ((height()/(2*size))*size - y)/size + 1;
   }

       emit sendCoord(x, y);
}

int min(int a, int b){
    if(a > b){
        return b;
    }
    else{
        return a;
    }
}
void frame_widget::paintEvent(QPaintEvent *p)
{

    //QPixmap pix(500, 500);
    QPainter paint(this);
    //paint.setPen(Qt::white);
    //pix.fill(Qt::white);
    paint.drawRect(0, 0, min(maxheight, 500), min(maxwidth, 500));

    if(grid)
    {
        paint.setPen(QPen(Qt::black));
        for(int i = 0 ; i < min(maxwidth, width()) ; i+=size)
        {
            paint.drawLine(i, 0, i, min(maxheight, height()));
        }
        for(int j = 0 ; j < min(maxheight, height()) ; j+=size)
        {
            paint.drawLine(0, j, min(maxwidth, width()), j);

        }
        paint.drawLine(min(maxwidth, width()) - 1, 0, min(maxwidth, min(maxwidth, width())), min(maxheight,  height()));
        paint.drawLine( 0, min(maxheight, height()) - 1,min(maxwidth, width()), min(maxheight, height())- 1);

    }
        if(visibleAxes)
        {
            QBrush qBrush(Qt::cyan);
            paint.setBrush(qBrush);

            paint.drawRect((width()/(2*size))*size, 0, size, min(maxheight, height()));
            paint.drawRect(0, (height()/(2*size))*size,  min(maxwidth, width()), size);
        }
        if(lineDDA)
        {
            auto time1 = std::chrono::high_resolution_clock::now();
            paint.setBrush(QBrush(currentcol));
            double x = point1.x();
            double y = point1.y();
            double dx = (point2.x() - point1.x());
            double dy = (point2.y() - point1.y());
            double steps;
            if(abs(dx) > abs(dy))
            {
                steps = abs(dx);
            }
            else{
                steps = abs(dy);
            }
            double inc_x = dx/(float)steps;
            double inc_y = dy/(float)steps;
            for(int i = 0 ; i < steps ; i++)
            {

                x = x + (inc_x);
                y = y + (inc_y);
                QPoint p0 = convertCoord(round(x), round(y));
                if(QPoint(round(x), round(y)) == point2)
                {
                    continue;
                }
                points.append({p0, currentcol});
                modified = true;
                //paint.drawRect(p0.x(), p0.y(), size, size);
            }
            lineDDA = false;
            auto time2 = std::chrono::high_resolution_clock::now();
            double timeDiff = (time2-time1).count();
            emit sendTimeDDA(timeDiff);
        }
        if(lineBresh)
        {
            auto time1 = std::chrono::high_resolution_clock::now();
            QPoint p1 = point1;
            QPoint p2 = point2;
            int k = size;
            int x1=p1.x();
                int y1=p1.y();

                int x2=p2.x();
                int y2=p2.y();

                int dx=x2-x1;
                int dy=y2-y1;



                int xinc=(dx>0)?1:-1;
                int yinc=(dy>0)?1:-1;

                dx=abs(dx);
                dy=abs(dy);

                //Case for gentle slope
                if(dx>dy)
                {
                    int p=2*(dy)-dx;
                    int y=y1;

                    for(int x=x1; x!=x2; x+=xinc)
                    {
                        points.append({convertCoord(x,y), currentcol});
                        if(p>=0)
                        {
                            y+=yinc;
                            p-=2*dx;
                        }
                        p+=2*dy;
                    }
                }
                //Case for steep slope
                else
                {
                    int p=2*(dx)-dy;
                    int x=x1;

                    for(int y=y1; y!=y2; y+=yinc)
                    {
                        points.append({convertCoord(x,y), currentcol});
                        if(p>=0)
                        {
                            x+=xinc;
                            p-=2*(dy);
                        }
                        p+=2*(dx);
                    }
                }


            modified = true;
            lineBresh = false;
            auto time2 = std::chrono::high_resolution_clock::now();
            double timeDiff = (time2-time1).count();
            emit sendTimeBresh(timeDiff);

        }
        if(circlePolar)
        {
            auto time1 = std::chrono::high_resolution_clock::now();
            QPoint p = convertPixel(lastpoint);
            int x_center = p.x();
            int y_center = p.y();

            int x, y;
            for(float i=0; i<=3.14; i= i+ (1/(float)radius)) {
                x = round(radius*cos(i));
                y = round(radius*sin(i));

                points.append({convertCoord(x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(x+ x_center, -y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, -y+ y_center), currentcol});
            }

            modified = true;
            circlePolar = false;
            auto time2 = std::chrono::high_resolution_clock::now();
            double time = (time2 - time1).count();
        }
        if(circleMP)
        {
            auto time1 = std::chrono::high_resolution_clock::now();
            QPoint p = convertPixel(lastpoint);
            int x_center = p.x();
            int y_center = p.y();

            int x = radius, y = 0;
            points.append({convertCoord(x+ x_center, y+ y_center), currentcol});
            if (radius > 0)
            {
                points.append({convertCoord(-x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(y+ x_center, x+ y_center), currentcol});
                points.append({convertCoord(y+ x_center, -x+ y_center), currentcol});
            }

            int P = 1 - radius;
            while (x > y)
            {
                y++;

                //Initialising the value of P
                if (P <= 0)
                    P = P + 2*y + 1;

                // Mid-point is outside the perimeter
                else
                {
                    x--;
                    P = P + 2*y - 2*x + 1;
                }

                // All the perimeter points have already been printed
                if (x < y)
                    break;

                points.append({convertCoord(x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(x+ x_center, -y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, -y+ y_center), currentcol});

                if (x != y)
                {
                    points.append({convertCoord(y+ x_center, x+ y_center), currentcol});
                    points.append({convertCoord(-y+ x_center, x+ y_center), currentcol});
                    points.append({convertCoord(y+ x_center, -x+ y_center), currentcol});
                    points.append({convertCoord(-y+ x_center, -x+ y_center), currentcol});
                }
            }
            modified = true;
            circleMP = false;
            auto time2 = std::chrono::high_resolution_clock::now();
            double time = (time2 - time1).count();
        }
        if(circleBA)
        {
            auto time1 = std::chrono::high_resolution_clock::now();
            QPoint p = convertPixel(lastpoint);
            int x_center = p.x();
            int y_center = p.y();

            int x = 0, y = radius;
            int d = 3 - 2 * radius;

            points.append({convertCoord(x+ x_center, y+ y_center), currentcol});
            points.append({convertCoord(-x+ x_center, y+ y_center), currentcol});
            points.append({convertCoord(x+ x_center, -y+ y_center), currentcol});
            points.append({convertCoord(-x+ x_center, -y+ y_center), currentcol});
            points.append({convertCoord(y+ x_center, x+ y_center), currentcol});
            points.append({convertCoord(-y+ x_center, x+ y_center), currentcol});
            points.append({convertCoord(y+ x_center, -x+ y_center), currentcol});
            points.append({convertCoord(-y+ x_center, -x+ y_center), currentcol});

            while (y >= x)
            {
                // for each pixel we will
                // draw all eight pixels

                x++;

                // check for decision parameter
                // and correspondingly
                // update d, x, y
                if (d > 0)
                {
                    y--;
                    d = d + 4 * (x - y) + 10;
                }
                else
                    d = d + 4 * x + 6;

                points.append({convertCoord(x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(x+ x_center, -y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, -y+ y_center), currentcol});
                points.append({convertCoord(y+ x_center, x+ y_center), currentcol});
                points.append({convertCoord(-y+ x_center, x+ y_center), currentcol});
                points.append({convertCoord(y+ x_center, -x+ y_center), currentcol});
                points.append({convertCoord(-y+ x_center, -x+ y_center), currentcol});
            }

            modified = true;
            circleBA = false;
            auto time2 = std::chrono::high_resolution_clock::now();
            double time = (time2-time1).count();
        }
        if(ellipseBA)
        {
            auto time1 = std::chrono::high_resolution_clock::now();
            QPoint p = convertPixel(lastpoint);
            int x_center = p.x();
            int y_center = p.y();

            float dx, dy, d1, d2, x, y;
            x = 0;
            y = minor;

            // Initial decision parameter of region 1
            d1 = (minor * minor) - (major * major * minor) + (0.25 * major * major);
            dx = 2 * minor * minor * x;
            dy = 2 * major * major * y;

            // For region 1
            while (dx < dy)
            {
                // Print points based on 4-way symmetry
                points.append({convertCoord(x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(x+ x_center, -y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, -y+ y_center), currentcol});

                // Checking and updating value of
                // decision parameter based on algorithm
                if (d1 < 0)
                {
                    x++;
                    dx = dx + (2 * minor * minor);
                    d1 = d1 + dx + (minor * minor);
                }
                else
                {
                    x++;
                    y--;
                    dx = dx + (2 * minor * minor);
                    dy = dy - (2 * major * major);
                    d1 = d1 + dx - dy + (minor * minor);
                }
            }

            // Decision parameter of region 2
            d2 = ((minor * minor) * ((x + 0.5) * (x + 0.5))) + ((major * major) * ((y - 1) * (y - 1))) - (major * major * minor * minor);

            // Plotting points of region 2
            while (y >= 0)
            {

                // Print points based on 4-way symmetry
                points.append({convertCoord(x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, y+ y_center), currentcol});
                points.append({convertCoord(x+ x_center, -y+ y_center), currentcol});
                points.append({convertCoord(-x+ x_center, -y+ y_center), currentcol});

                // Checking and updating parameter
                // value based on algorithm
                if (d2 > 0)
                {
                    y--;
                    dy = dy - (2 * major * major);
                    d2 = d2 + (major * major) - dy;
                }
                else
                {
                    y--;
                    x++;
                    dx = dx + (2 * minor * minor);
                    dy = dy - (2 * major * major);
                    d2 = d2 + dx - dy + (major * major);
                }
            }

            modified = true;
            ellipseBA = false;
            auto time2 = std::chrono::high_resolution_clock::now();
            double time = (time2 - time1).count();
        }
        if(modified)
        {
            QPair<QPoint, QColor> p;
            foreach (p   , points )
            {
                paint.setBrush(p.second);
                int x = p.first.x();
                int y = p.first.y();
                QPoint newp((x/size)*size, (y/size)*size);
                paint.drawRect(newp.x(), newp.y(), size,  size);
            }

        }


}
void frame_widget::mousePressEvent(QMouseEvent *event)
{
     modified = true;
   lastpoint = event->pos();
   if(lastpoint.x() >= maxwidth || lastpoint.y() >= maxheight)
       return;
   //QColor colour(Qt::red);
   points.append({lastpoint, currentcol});
   QPoint p = convertPixel(lastpoint);
   //ui->label_3->setText("X : " + QString::number(p.x()) + " Y : "+ QString::number(p.y()));
   repaint();
   emit sendCoordForMousePress(p.x(),p.y());
   //return convertPixel(lastpoint);

}

QPoint frame_widget::setPoint1()
{
    point1 = convertPixel(lastpoint);
    return (point1);

}

QPoint frame_widget::setPoint2()
{
    point2 = convertPixel(lastpoint);
    return point2;

}

void frame_widget::changeCurrentColour(QColor q)
{
    currentcol = q;

}

void frame_widget::drawLineDDA()
{
    lineDDA = true;
    update();

}

void frame_widget::drawLineBresh()
{
    lineBresh = true;
    update();
}




