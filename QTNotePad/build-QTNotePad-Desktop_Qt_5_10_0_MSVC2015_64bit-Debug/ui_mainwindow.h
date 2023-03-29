/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionRedo;
    QAction *actionUndo;
    QAction *actionAbout_Notepad;
    QAction *actionCut;
    QAction *actionColour;
    QAction *actionFont;
    QAction *actionBackgroundColor;
    QAction *actionBackground_Color_Edit_Text;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QToolBar *toolBar_2;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(609, 449);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Historic"));
        font.setBold(false);
        font.setItalic(true);
        font.setUnderline(false);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::OpenHandCursor));
        MainWindow->setMouseTracking(false);
        MainWindow->setWindowTitle(QStringLiteral("ASNOTEPAD"));
        MainWindow->setAutoFillBackground(false);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/img/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/img/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/img/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rec/img/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rec/img/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/rec/img/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/rec/img/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/rec/img/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionAbout_Notepad = new QAction(MainWindow);
        actionAbout_Notepad->setObjectName(QStringLiteral("actionAbout_Notepad"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/rec/img/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Notepad->setIcon(icon8);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/rec/img/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon9);
        actionColour = new QAction(MainWindow);
        actionColour->setObjectName(QStringLiteral("actionColour"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/rec/img/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColour->setIcon(icon10);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/rec/img/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon11);
        actionBackgroundColor = new QAction(MainWindow);
        actionBackgroundColor->setObjectName(QStringLiteral("actionBackgroundColor"));
        actionBackground_Color_Edit_Text = new QAction(MainWindow);
        actionBackground_Color_Edit_Text->setObjectName(QStringLiteral("actionBackground_Color_Edit_Text"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 571, 391));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 609, 22));
        menubar->setAutoFillBackground(false);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menubar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar_2);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionColour);
        menuEdit->addAction(actionFont);
        menuEdit->addAction(actionBackgroundColor);
        menuEdit->addAction(actionBackground_Color_Edit_Text);
        menuAbout->addAction(actionAbout_Notepad);
        toolBar_2->addAction(actionNew);
        toolBar_2->addAction(actionOpen);
        toolBar_2->addAction(actionSave);
        toolBar_2->addAction(actionSave_as);
        toolBar_2->addAction(actionPaste);
        toolBar_2->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionColour);
        toolBar->addAction(actionFont);
        toolBar->addAction(actionAbout_Notepad);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionNew->setText(QApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", nullptr));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", nullptr));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", nullptr));
        actionAbout_Notepad->setText(QApplication::translate("MainWindow", "About Notepad", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", nullptr));
        actionColour->setText(QApplication::translate("MainWindow", "Colour", nullptr));
        actionFont->setText(QApplication::translate("MainWindow", "Font", nullptr));
        actionBackgroundColor->setText(QApplication::translate("MainWindow", "BackgroundColor", nullptr));
        actionBackground_Color_Edit_Text->setText(QApplication::translate("MainWindow", "Background Color Edit Text", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", nullptr));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
