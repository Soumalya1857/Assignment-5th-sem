/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "frame_widget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    frame_widget *frame;
    QPushButton *pushButton_5;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *pushButton_10;
    QLabel *point1;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *pushButton_11;
    QLabel *point2;
    QComboBox *comboBox_4;
    QPushButton *pushButton_line;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QSpinBox *vertices;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_3;
    QLabel *seed;
    QHBoxLayout *horizontalLayout_9;
    QLabel *polygonStart;
    QLabel *polygonEnd;
    QComboBox *comboBox_3;
    QPushButton *pushButton_4;
    QLabel *label_24;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_3;
    QSlider *rSlider;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_8;
    QSlider *bSlider;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_7;
    QSlider *gSlider;
    QHBoxLayout *horizontalLayout_17;
    QLabel *R;
    QLabel *color;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLabel *coord;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLabel *press;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_26;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_25;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSpinBox *radius;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QLabel *center;
    QPushButton *pushButton_6;
    QFrame *line;
    QFrame *line_2;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton;
    QLabel *center_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_9;
    QSpinBox *major;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSpinBox *minor;
    QComboBox *comboBox_2;
    QPushButton *pushButton_7;
    QLabel *label_27;
    QFrame *line_3;
    QWidget *horizontalLayoutWidget_21;
    QHBoxLayout *horizontalLayout_23;
    QLabel *R_2;
    QLabel *polygonTime;
    QWidget *horizontalLayoutWidget_22;
    QHBoxLayout *horizontalLayout_24;
    QLabel *R_3;
    QLabel *ellipseTime;
    QLabel *label_20;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QSpinBox *tranx;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_19;
    QSpinBox *trany;
    QPushButton *pushButton_translate;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_21;
    QDoubleSpinBox *scalex;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_22;
    QDoubleSpinBox *scaley;
    QPushButton *pushButton_scale;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_23;
    QSpinBox *rotate;
    QPushButton *pushButton_rotate;
    QPushButton *pushButton_reflect;
    QWidget *horizontalLayoutWidget_23;
    QHBoxLayout *horizontalLayout_25;
    QLabel *R_4;
    QLabel *transformationTime;
    QFrame *line_4;
    QLabel *label_29;
    QPushButton *pushButton_clipL;
    QPushButton *pushButton_clipP;
    QPushButton *pushButton_rect;
    QMenuBar *menubar;
    QMenu *menuCreate_New;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1289, 703);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 189, 241);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new frame_widget(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(290, 20, 530, 530));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(480, 600, 171, 31));
        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(860, 160, 160, 165));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(verticalLayoutWidget_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font-size: 14px;\n"
"color: rgb(0, 0, 0);"));
        label_28->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_28);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        pushButton_10 = new QPushButton(verticalLayoutWidget_5);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_18->addWidget(pushButton_10);

        point1 = new QLabel(verticalLayoutWidget_5);
        point1->setObjectName(QString::fromUtf8("point1"));
        point1->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(point1);


        verticalLayout_7->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        pushButton_11 = new QPushButton(verticalLayoutWidget_5);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        horizontalLayout_19->addWidget(pushButton_11);

        point2 = new QLabel(verticalLayoutWidget_5);
        point2->setObjectName(QString::fromUtf8("point2"));
        point2->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(point2);


        verticalLayout_7->addLayout(horizontalLayout_19);

        comboBox_4 = new QComboBox(verticalLayoutWidget_5);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setStyleSheet(QString::fromUtf8("border: 0.5px solid rgb(100, 100, 100)\n"
""));

        verticalLayout_7->addWidget(comboBox_4);

        pushButton_line = new QPushButton(verticalLayoutWidget_5);
        pushButton_line->setObjectName(QString::fromUtf8("pushButton_line"));

        verticalLayout_7->addWidget(pushButton_line);

        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(1070, 310, 191, 230));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_14 = new QLabel(verticalLayoutWidget_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_14);

        vertices = new QSpinBox(verticalLayoutWidget_6);
        vertices->setObjectName(QString::fromUtf8("vertices"));
        vertices->setMinimum(3);
        vertices->setMaximum(20);
        vertices->setValue(3);

        horizontalLayout_5->addWidget(vertices);


        verticalLayout_8->addLayout(horizontalLayout_5);

        pushButton_8 = new QPushButton(verticalLayoutWidget_6);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        verticalLayout_8->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(verticalLayoutWidget_6);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        verticalLayout_8->addWidget(pushButton_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_3 = new QPushButton(verticalLayoutWidget_6);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_11->addWidget(pushButton_3);

        seed = new QLabel(verticalLayoutWidget_6);
        seed->setObjectName(QString::fromUtf8("seed"));
        seed->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(seed);


        verticalLayout_8->addLayout(horizontalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        polygonStart = new QLabel(verticalLayoutWidget_6);
        polygonStart->setObjectName(QString::fromUtf8("polygonStart"));
        polygonStart->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(polygonStart);

        polygonEnd = new QLabel(verticalLayoutWidget_6);
        polygonEnd->setObjectName(QString::fromUtf8("polygonEnd"));
        polygonEnd->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(polygonEnd);


        verticalLayout_8->addLayout(horizontalLayout_9);

        comboBox_3 = new QComboBox(verticalLayoutWidget_6);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setStyleSheet(QString::fromUtf8("border: 0.5px solid rgb(100, 100, 100)\n"
""));

        verticalLayout_8->addWidget(comboBox_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget_6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_8->addWidget(pushButton_4);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(1090, 270, 158, 21));
        label_24->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font-size: 14px;\n"
"color: rgb(0, 0, 0);"));
        label_24->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(860, 540, 160, 111));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_3 = new QLabel(verticalLayoutWidget_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_3);

        rSlider = new QSlider(verticalLayoutWidget_7);
        rSlider->setObjectName(QString::fromUtf8("rSlider"));
        rSlider->setMaximum(255);
        rSlider->setPageStep(15);
        rSlider->setValue(255);
        rSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_20->addWidget(rSlider);


        verticalLayout_9->addLayout(horizontalLayout_20);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_8 = new QLabel(verticalLayoutWidget_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(label_8);

        bSlider = new QSlider(verticalLayoutWidget_7);
        bSlider->setObjectName(QString::fromUtf8("bSlider"));
        bSlider->setMaximum(255);
        bSlider->setPageStep(15);
        bSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_22->addWidget(bSlider);


        verticalLayout_9->addLayout(horizontalLayout_22);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_7 = new QLabel(verticalLayoutWidget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(label_7);

        gSlider = new QSlider(verticalLayoutWidget_7);
        gSlider->setObjectName(QString::fromUtf8("gSlider"));
        gSlider->setMaximum(255);
        gSlider->setPageStep(15);
        gSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_21->addWidget(gSlider);


        verticalLayout_9->addLayout(horizontalLayout_21);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        R = new QLabel(verticalLayoutWidget_7);
        R->setObjectName(QString::fromUtf8("R"));
        R->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(R);

        color = new QLabel(verticalLayoutWidget_7);
        color->setObjectName(QString::fromUtf8("color"));

        horizontalLayout_17->addWidget(color);


        verticalLayout_9->addLayout(horizontalLayout_17);

        verticalLayoutWidget_9 = new QWidget(centralwidget);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(850, 10, 181, 141));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(verticalLayoutWidget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        coord = new QLabel(verticalLayoutWidget_9);
        coord->setObjectName(QString::fromUtf8("coord"));

        horizontalLayout_2->addWidget(coord);


        verticalLayout_11->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(verticalLayoutWidget_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        press = new QLabel(verticalLayoutWidget_9);
        press->setObjectName(QString::fromUtf8("press"));

        horizontalLayout_6->addWidget(press);


        verticalLayout_11->addLayout(horizontalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(verticalLayoutWidget_9);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setAutoExclusive(false);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(verticalLayoutWidget_9);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setAutoExclusive(false);

        verticalLayout->addWidget(radioButton_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(verticalLayoutWidget_9);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        spinBox = new QSpinBox(verticalLayoutWidget_9);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(150);
        spinBox->setValue(10);

        horizontalLayout_3->addWidget(spinBox);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_11->addLayout(verticalLayout_2);

        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(860, 520, 158, 17));
        label_26->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font-size: 14px;\n"
"color: rgb(0, 0, 0);"));
        label_26->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(850, 370, 186, 143));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(verticalLayoutWidget_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font-size: 14px;\n"
"color: rgb(0, 0, 0);"));
        label_25->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_25);

        comboBox = new QComboBox(verticalLayoutWidget_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("border: 0.5px solid rgb(100, 100, 100)\n"
""));
        comboBox->setInsertPolicy(QComboBox::InsertAlphabetically);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        verticalLayout_6->addWidget(comboBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(verticalLayoutWidget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_4);

        radius = new QSpinBox(verticalLayoutWidget_4);
        radius->setObjectName(QString::fromUtf8("radius"));
        radius->setValue(15);

        horizontalLayout_8->addWidget(radius);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_2 = new QPushButton(verticalLayoutWidget_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        center = new QLabel(verticalLayoutWidget_4);
        center->setObjectName(QString::fromUtf8("center"));
        center->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(center);


        verticalLayout_6->addLayout(horizontalLayout_4);

        pushButton_6 = new QPushButton(verticalLayoutWidget_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_6->addWidget(pushButton_6);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(1043, 0, 20, 661));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1270, 20, 20, 611));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_8 = new QWidget(centralwidget);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(1060, 30, 201, 176));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButton = new QPushButton(verticalLayoutWidget_8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_10->addWidget(pushButton);

        center_2 = new QLabel(verticalLayoutWidget_8);
        center_2->setObjectName(QString::fromUtf8("center_2"));
        center_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(center_2);


        verticalLayout_10->addLayout(horizontalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_9 = new QLabel(verticalLayoutWidget_8);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_9);

        major = new QSpinBox(verticalLayoutWidget_8);
        major->setObjectName(QString::fromUtf8("major"));
        major->setValue(18);

        horizontalLayout->addWidget(major);


        verticalLayout_10->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(verticalLayoutWidget_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(label_10);

        minor = new QSpinBox(verticalLayoutWidget_8);
        minor->setObjectName(QString::fromUtf8("minor"));
        minor->setValue(12);

        horizontalLayout_7->addWidget(minor);


        verticalLayout_10->addLayout(horizontalLayout_7);

        comboBox_2 = new QComboBox(verticalLayoutWidget_8);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setStyleSheet(QString::fromUtf8("border: 0.5px solid rgb(100, 100, 100)\n"
""));

        verticalLayout_10->addWidget(comboBox_2);

        pushButton_7 = new QPushButton(verticalLayoutWidget_8);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_10->addWidget(pushButton_7);

        label_27 = new QLabel(centralwidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(1100, 0, 111, 21));
        label_27->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font-size: 14px;\n"
"color: rgb(0, 0, 0);"));
        label_27->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(1070, 245, 201, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_21 = new QWidget(centralwidget);
        horizontalLayoutWidget_21->setObjectName(QString::fromUtf8("horizontalLayoutWidget_21"));
        horizontalLayoutWidget_21->setGeometry(QRect(1070, 550, 191, 23));
        horizontalLayout_23 = new QHBoxLayout(horizontalLayoutWidget_21);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        R_2 = new QLabel(horizontalLayoutWidget_21);
        R_2->setObjectName(QString::fromUtf8("R_2"));
        R_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(R_2);

        polygonTime = new QLabel(horizontalLayoutWidget_21);
        polygonTime->setObjectName(QString::fromUtf8("polygonTime"));

        horizontalLayout_23->addWidget(polygonTime);

        horizontalLayoutWidget_22 = new QWidget(centralwidget);
        horizontalLayoutWidget_22->setObjectName(QString::fromUtf8("horizontalLayoutWidget_22"));
        horizontalLayoutWidget_22->setGeometry(QRect(1060, 210, 201, 23));
        horizontalLayout_24 = new QHBoxLayout(horizontalLayoutWidget_22);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        R_3 = new QLabel(horizontalLayoutWidget_22);
        R_3->setObjectName(QString::fromUtf8("R_3"));
        R_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_24->addWidget(R_3);

        ellipseTime = new QLabel(horizontalLayoutWidget_22);
        ellipseTime->setObjectName(QString::fromUtf8("ellipseTime"));

        horizontalLayout_24->addWidget(ellipseTime);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(50, 20, 111, 21));
        label_20->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font-size: 14px;\n"
"color: rgb(0, 0, 0);"));
        label_20->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 50, 160, 101));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_12->addWidget(label_15);

        tranx = new QSpinBox(verticalLayoutWidget_2);
        tranx->setObjectName(QString::fromUtf8("tranx"));
        tranx->setMinimum(-50);
        tranx->setMaximum(50);

        horizontalLayout_12->addWidget(tranx);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_19 = new QLabel(verticalLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_13->addWidget(label_19);

        trany = new QSpinBox(verticalLayoutWidget_2);
        trany->setObjectName(QString::fromUtf8("trany"));
        trany->setMinimum(-50);
        trany->setMaximum(50);

        horizontalLayout_13->addWidget(trany);


        verticalLayout_4->addLayout(horizontalLayout_13);

        pushButton_translate = new QPushButton(verticalLayoutWidget_2);
        pushButton_translate->setObjectName(QString::fromUtf8("pushButton_translate"));

        verticalLayout_4->addWidget(pushButton_translate);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 160, 160, 93));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_14->addWidget(label_21);

        scalex = new QDoubleSpinBox(verticalLayoutWidget);
        scalex->setObjectName(QString::fromUtf8("scalex"));
        scalex->setDecimals(1);
        scalex->setMaximum(10.000000000000000);
        scalex->setSingleStep(0.300000000000000);
        scalex->setValue(1.000000000000000);

        horizontalLayout_14->addWidget(scalex);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_22 = new QLabel(verticalLayoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_15->addWidget(label_22);

        scaley = new QDoubleSpinBox(verticalLayoutWidget);
        scaley->setObjectName(QString::fromUtf8("scaley"));
        scaley->setDecimals(1);
        scaley->setMaximum(10.000000000000000);
        scaley->setSingleStep(0.300000000000000);
        scaley->setValue(1.000000000000000);

        horizontalLayout_15->addWidget(scaley);


        verticalLayout_3->addLayout(horizontalLayout_15);

        pushButton_scale = new QPushButton(verticalLayoutWidget);
        pushButton_scale->setObjectName(QString::fromUtf8("pushButton_scale"));

        verticalLayout_3->addWidget(pushButton_scale);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(30, 260, 167, 91));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_23 = new QLabel(verticalLayoutWidget_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_16->addWidget(label_23);

        rotate = new QSpinBox(verticalLayoutWidget_3);
        rotate->setObjectName(QString::fromUtf8("rotate"));
        rotate->setMinimum(-180);
        rotate->setMaximum(180);
        rotate->setSingleStep(5);

        horizontalLayout_16->addWidget(rotate);


        verticalLayout_5->addLayout(horizontalLayout_16);

        pushButton_rotate = new QPushButton(verticalLayoutWidget_3);
        pushButton_rotate->setObjectName(QString::fromUtf8("pushButton_rotate"));

        verticalLayout_5->addWidget(pushButton_rotate);

        pushButton_reflect = new QPushButton(verticalLayoutWidget_3);
        pushButton_reflect->setObjectName(QString::fromUtf8("pushButton_reflect"));

        verticalLayout_5->addWidget(pushButton_reflect);

        horizontalLayoutWidget_23 = new QWidget(centralwidget);
        horizontalLayoutWidget_23->setObjectName(QString::fromUtf8("horizontalLayoutWidget_23"));
        horizontalLayoutWidget_23->setGeometry(QRect(30, 360, 161, 23));
        horizontalLayout_25 = new QHBoxLayout(horizontalLayoutWidget_23);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        R_4 = new QLabel(horizontalLayoutWidget_23);
        R_4->setObjectName(QString::fromUtf8("R_4"));
        R_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_25->addWidget(R_4);

        transformationTime = new QLabel(horizontalLayoutWidget_23);
        transformationTime->setObjectName(QString::fromUtf8("transformationTime"));

        horizontalLayout_25->addWidget(transformationTime);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 390, 231, 21));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(30, 420, 158, 21));
        label_29->setStyleSheet(QString::fromUtf8("font: 75 italic 11pt \"Ubuntu Condensed\";\n"
"font-size: 14px;\n"
"color: rgb(0, 0, 0);"));
        label_29->setAlignment(Qt::AlignCenter);
        pushButton_clipL = new QPushButton(centralwidget);
        pushButton_clipL->setObjectName(QString::fromUtf8("pushButton_clipL"));
        pushButton_clipL->setGeometry(QRect(20, 450, 181, 31));
        pushButton_clipP = new QPushButton(centralwidget);
        pushButton_clipP->setObjectName(QString::fromUtf8("pushButton_clipP"));
        pushButton_clipP->setGeometry(QRect(20, 490, 181, 31));
        pushButton_rect = new QPushButton(centralwidget);
        pushButton_rect->setObjectName(QString::fromUtf8("pushButton_rect"));
        pushButton_rect->setGeometry(QRect(860, 330, 158, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1289, 22));
        menuCreate_New = new QMenu(menubar);
        menuCreate_New->setObjectName(QString::fromUtf8("menuCreate_New"));
        menuCreate_New->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCreate_New->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Lines", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Set Point 1", nullptr));
        point1->setText(QCoreApplication::translate("MainWindow", "Point 1", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Set Point 2", nullptr));
        point2->setText(QCoreApplication::translate("MainWindow", "Point 2", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "   Bresenham", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "   DDA", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "   Parametric", nullptr));

        pushButton_line->setText(QCoreApplication::translate("MainWindow", "Draw Line", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Set Vertices", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Draw Polygon", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Seed", nullptr));
        seed->setText(QString());
        polygonStart->setText(QCoreApplication::translate("MainWindow", "Start Point", nullptr));
        polygonEnd->setText(QCoreApplication::translate("MainWindow", "End Point", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "   Boundary Fill", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "   Flood Fill ", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "   ScanLine Fill", nullptr));

        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Fill Polygon", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Polygon", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        R->setText(QCoreApplication::translate("MainWindow", "Color :", nullptr));
        color->setText(QCoreApplication::translate("MainWindow", "rbg(255,0,0)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Mouse Pos:", nullptr));
        coord->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Last Pressed", nullptr));
        press->setText(QString());
        radioButton->setText(QCoreApplication::translate("MainWindow", "Show Axis", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Show Grid", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Pixel Size", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Colours", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "   Parametric", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "   Polar Coordinates", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "   Mid Point", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "   Bresenham's Midpoint", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Set Center", nullptr));
        center->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Draw Circle", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Set Center", nullptr));
        center_2->setText(QCoreApplication::translate("MainWindow", "Ellipse Center", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Major-R", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Minor-R", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "   Polar Coordinate", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "   Midpoint", nullptr));

        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Draw Ellipse", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Ellipse", nullptr));
        R_2->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        polygonTime->setText(QCoreApplication::translate("MainWindow", " Polygon Time", nullptr));
        R_3->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        ellipseTime->setText(QCoreApplication::translate("MainWindow", " Ellipse Time", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Transformation", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Trans X axis ", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Trans Y axis ", nullptr));
        pushButton_translate->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "ScaleX ", nullptr));
        scalex->setPrefix(QString());
        label_22->setText(QCoreApplication::translate("MainWindow", "ScaleY ", nullptr));
        pushButton_scale->setText(QCoreApplication::translate("MainWindow", "Scale ", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Angle:   ", nullptr));
        pushButton_rotate->setText(QCoreApplication::translate("MainWindow", "Rotate", nullptr));
        pushButton_reflect->setText(QCoreApplication::translate("MainWindow", "Reflect", nullptr));
        R_4->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        transformationTime->setText(QString());
        label_29->setText(QCoreApplication::translate("MainWindow", "Clipings", nullptr));
        pushButton_clipL->setText(QCoreApplication::translate("MainWindow", "Clip Line", nullptr));
        pushButton_clipP->setText(QCoreApplication::translate("MainWindow", "Clip Polygon", nullptr));
        pushButton_rect->setText(QCoreApplication::translate("MainWindow", "Draw Rectangle", nullptr));
        menuCreate_New->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
