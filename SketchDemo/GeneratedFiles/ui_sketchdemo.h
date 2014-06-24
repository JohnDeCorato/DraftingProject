/********************************************************************************
** Form generated from reading UI file 'sketchdemo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKETCHDEMO_H
#define UI_SKETCHDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SketchDemoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SketchDemoClass)
    {
        if (SketchDemoClass->objectName().isEmpty())
            SketchDemoClass->setObjectName(QStringLiteral("SketchDemoClass"));
        SketchDemoClass->resize(600, 400);
        menuBar = new QMenuBar(SketchDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SketchDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SketchDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SketchDemoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SketchDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SketchDemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SketchDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SketchDemoClass->setStatusBar(statusBar);

        retranslateUi(SketchDemoClass);

        QMetaObject::connectSlotsByName(SketchDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *SketchDemoClass)
    {
        SketchDemoClass->setWindowTitle(QApplication::translate("SketchDemoClass", "SketchDemo", 0));
    } // retranslateUi

};

namespace Ui {
    class SketchDemoClass: public Ui_SketchDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKETCHDEMO_H
