/********************************************************************************
** Form generated from reading UI file 'vimtoolswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef VIEW_H
#define VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VimToolsWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *targetDiv;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VimToolsWindow)
    {
        if (VimToolsWindow->objectName().isEmpty())
            VimToolsWindow->setObjectName(QString::fromUtf8("VimToolsWindow"));
        VimToolsWindow->resize(800, 600);
        centralwidget = new QWidget(VimToolsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(600, 170, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 801, 81));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(320, 390, 160, 80));
        targetDiv = new QVBoxLayout(verticalLayoutWidget_2);
        targetDiv->setObjectName(QString::fromUtf8("targetDiv"));
        targetDiv->setContentsMargins(0, 0, 0, 0);
        VimToolsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VimToolsWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        VimToolsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(VimToolsWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        VimToolsWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(VimToolsWindow);

        QMetaObject::connectSlotsByName(VimToolsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VimToolsWindow)
    {
        VimToolsWindow->setWindowTitle(QApplication::translate("VimToolsWindow", "VimToolsWindow", nullptr));
        pushButton->setText(QApplication::translate("VimToolsWindow", "PushButton", nullptr));
        pushButton_2->setText(QApplication::translate("VimToolsWindow", "PushButton", nullptr));
        label->setText(QApplication::translate("VimToolsWindow", "my image", nullptr));
        menuFile->setTitle(QApplication::translate("VimToolsWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("VimToolsWindow", "Edit", nullptr));
        menuView->setTitle(QApplication::translate("VimToolsWindow", "View", nullptr));
        menuHelp->setTitle(QApplication::translate("VimToolsWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VimToolsWindow: public Ui_VimToolsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // VIEW_H
