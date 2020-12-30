#ifndef FRAME_WIDGET_H
#define FRAME_WIDGET_H

#include <QObject>
#include <QWidget>
#include <QMouseEvent>
#include <QEvent>
#include <QFrame>
#include <QList>
#include <QPoint>
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QPair>
#include <QElapsedTimer>
#include <QTextStream>
#include <QRgb>
#include <QImage>
#include <QTimer>

class frame_widget : public QFrame
{
    Q_OBJECT
private:
    int size;
    bool grid;
    bool modified;
    int maxwidth;
    int maxheight;
    int radius;
    int major;
    int minor;
    bool visibleAxes;
    bool lineDDA;
    bool lineBresh;
    bool circleBA;
    bool circleMP;
    bool circlePolar;
    bool ellipseBA;
    int Rcolor;
    int Gcolor;
    int Bcolor;
    QList <QPair<QPoint, QColor> > points;
    QPoint point1;
    QPoint point2;
    QPoint lastpoint;
    QPoint convertPixel(QPoint p);
    QColor currentcol;
    QPoint convertCoord(int x, int y);

    // polygon drawing
    QList <QPoint> clickedPoints;
    int polygonVertices;
    QImage img;
    bool polygonStart;
    bool seed;
    QPoint seedpoint;


public:
    frame_widget(QWidget *parent = nullptr);

    void createGrid();
    void changeSize(int x);
    void showAxes();
    void changeGridSize(int x);
    void hideAxes();
    void toggleAxes();
    void toggleGrid();
    void mouseMoveEvent(QMouseEvent *ev) override;
    void paintEvent(QPaintEvent *p) override;
    void mousePressEvent(QMouseEvent *ev) override;
    QPoint setPoint1();
    QPoint setPoint2();
    //void changeCurrentColour(QColor q);
    void drawLineDDA();
    void drawLineDDA(QPoint, QPoint);
    void drawLineBresh();
    void drawCircle(int,int);
    void drawEllipse(int ,int);
    void changeCurrentColour(int a, char c);
    void createPolygon(int);
    void destroyPolygon(int);
    void drawPolygon();
    void setSeed();
    void boundary_fill();
    void flood_fill();
    void scanLine_fill();



signals:
    void sendCoord(int x, int y);
    void sendCoordForMousePress(int x, int y);
    void sendTimeDDA(double);
    void sendTimeBresh(double);
    void sendCircleTime(double);
    void sendEllipseTime(double);
    void sendColorLabel(int,int,int);
    // fill n drawing algo
    void startPolygon();
    void endPolygon();
    void sendTime(double);
    void displayPolygonEnd(int,int);
    void displayPolygonStart(int,int);
    void sendSeed(int,int);
    void showPoint(int x, int y, int noOfClicks);
};

#endif // FRAME_WIDGET_H
