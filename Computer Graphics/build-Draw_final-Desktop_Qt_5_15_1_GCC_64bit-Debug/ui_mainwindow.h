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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
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
    QAction *actionCreate_New;
    QWidget *centralwidget;
    frame_widget *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *button;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_1;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *coord;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *spinBox_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QSlider *rSlider;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QSlider *bSlider;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QSlider *gSlider;
    QLabel *label_14;
    QPushButton *pushButton_6;
    QWidget *horizontalLayoutWidget_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *showColor;
    QFrame *line_2;
    QLabel *label_18;
    QWidget *horizontalLayoutWidget_10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_21;
    QSpinBox *spinBox_3;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_22;
    QSpinBox *spinBox_4;
    QWidget *horizontalLayoutWidget_12;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_23;
    QLabel *label_24;
    QComboBox *comboBox_2;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *pushButton_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1212, 678);
        actionCreate_New = new QAction(MainWindow);
        actionCreate_New->setObjectName(QString::fromUtf8("actionCreate_New"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new frame_widget(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(39, 29, 501, 501));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(570, 260, 191, 115));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        button = new QLabel(layoutWidget);
        button->setObjectName(QString::fromUtf8("button"));

        horizontalLayout_2->addWidget(button);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setAutoExclusive(false);

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setAutoExclusive(false);

        verticalLayout->addWidget(radioButton_2);


        verticalLayout_2->addLayout(verticalLayout);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(580, 30, 176, 87));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_1 = new QLabel(layoutWidget1);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        horizontalLayout_4->addWidget(label_1);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_5->addLayout(verticalLayout_3);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 570, 91, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(580, 150, 174, 25));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 120, 174, 25));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(570, 410, 189, 53));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        spinBox = new QSpinBox(layoutWidget2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(150);
        spinBox->setValue(25);

        horizontalLayout_3->addWidget(spinBox);

        coord = new QLabel(centralwidget);
        coord->setObjectName(QString::fromUtf8("coord"));
        coord->setGeometry(QRect(690, 280, 91, 22));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(690, 190, 101, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(573, 190, 101, 51));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(770, 120, 121, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(770, 150, 121, 21));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(860, 10, 20, 611));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(930, 60, 195, 111));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        spinBox_2 = new QSpinBox(verticalLayoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setValue(10);

        horizontalLayout_7->addWidget(spinBox_2);


        verticalLayout_4->addLayout(horizontalLayout_7);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_4->addWidget(comboBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);


        verticalLayout_4->addLayout(horizontalLayout_8);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(936, 29, 191, 21));
        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(570, 510, 191, 31));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        rSlider = new QSlider(horizontalLayoutWidget_5);
        rSlider->setObjectName(QString::fromUtf8("rSlider"));
        rSlider->setMaximum(255);
        rSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(rSlider);

        horizontalLayoutWidget_6 = new QWidget(centralwidget);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(570, 540, 191, 31));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(horizontalLayoutWidget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        bSlider = new QSlider(horizontalLayoutWidget_6);
        bSlider->setObjectName(QString::fromUtf8("bSlider"));
        bSlider->setMaximum(255);
        bSlider->setValue(150);
        bSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(bSlider);

        horizontalLayoutWidget_7 = new QWidget(centralwidget);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(570, 570, 191, 31));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(horizontalLayoutWidget_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_11->addWidget(label_13);

        gSlider = new QSlider(horizontalLayoutWidget_7);
        gSlider->setObjectName(QString::fromUtf8("gSlider"));
        gSlider->setMaximum(255);
        gSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(gSlider);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(630, 480, 67, 17));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(930, 170, 201, 25));
        horizontalLayoutWidget_8 = new QWidget(centralwidget);
        horizontalLayoutWidget_8->setObjectName(QString::fromUtf8("horizontalLayoutWidget_8"));
        horizontalLayoutWidget_8->setGeometry(QRect(930, 200, 191, 31));
        horizontalLayout_12 = new QHBoxLayout(horizontalLayoutWidget_8);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(horizontalLayoutWidget_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_12->addWidget(label_15);

        label_16 = new QLabel(horizontalLayoutWidget_8);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_12->addWidget(label_16);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(570, 610, 67, 17));
        showColor = new QLabel(centralwidget);
        showColor->setObjectName(QString::fromUtf8("showColor"));
        showColor->setGeometry(QRect(630, 610, 111, 20));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(880, 310, 321, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(940, 340, 191, 21));
        horizontalLayoutWidget_10 = new QWidget(centralwidget);
        horizontalLayoutWidget_10->setObjectName(QString::fromUtf8("horizontalLayoutWidget_10"));
        horizontalLayoutWidget_10->setGeometry(QRect(920, 380, 193, 36));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_10);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(horizontalLayoutWidget_10);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_14->addWidget(label_21);

        spinBox_3 = new QSpinBox(horizontalLayoutWidget_10);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setValue(10);

        horizontalLayout_14->addWidget(spinBox_3);

        horizontalLayoutWidget_11 = new QWidget(centralwidget);
        horizontalLayoutWidget_11->setObjectName(QString::fromUtf8("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(920, 410, 193, 36));
        horizontalLayout_15 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(horizontalLayoutWidget_11);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_15->addWidget(label_22);

        spinBox_4 = new QSpinBox(horizontalLayoutWidget_11);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setValue(10);

        horizontalLayout_15->addWidget(spinBox_4);

        horizontalLayoutWidget_12 = new QWidget(centralwidget);
        horizontalLayoutWidget_12->setObjectName(QString::fromUtf8("horizontalLayoutWidget_12"));
        horizontalLayoutWidget_12->setGeometry(QRect(920, 470, 193, 36));
        horizontalLayout_16 = new QHBoxLayout(horizontalLayoutWidget_12);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(horizontalLayoutWidget_12);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_16->addWidget(label_23);

        label_24 = new QLabel(horizontalLayoutWidget_12);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_16->addWidget(label_24);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(920, 440, 193, 25));
        horizontalLayoutWidget_9 = new QWidget(centralwidget);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(920, 540, 191, 31));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(horizontalLayoutWidget_9);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_13->addWidget(label_19);

        label_20 = new QLabel(horizontalLayoutWidget_9);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_13->addWidget(label_20);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(920, 510, 191, 25));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreate_New->setText(QCoreApplication::translate("MainWindow", "Create New", nullptr));
        button->setText(QCoreApplication::translate("MainWindow", "Mouse Position", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Show Axis", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Show Grid", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Point 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Point 2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Set Point 1", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Set Point 2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Bresh Draw line", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "DDA draw line", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "   Set Pixel", nullptr));
        coord->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Recent Point", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "DDA time", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Bresh time", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Radius", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Midpoint", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Breshenham's Midpoint", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Polar Coordinate", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "Center:", nullptr));
        label_9->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "                   CIRCLE", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Set Color", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Draw Circle", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "      Time", nullptr));
        label_16->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "Colour", nullptr));
        showColor->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "                   Ellipse", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Major Axis", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Minoe Axis", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Center:", nullptr));
        label_24->setText(QString());
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Midpoint", nullptr));

        label_19->setText(QCoreApplication::translate("MainWindow", "      Time", nullptr));
        label_20->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Draw Ellipse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
