#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "tags/tags_line_edit.hpp"
#include "tags/tags_edit.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    auto tagsLineEdit = new yenxo_widgets::TagsLineEdit(true, ui->centralwidget);
    tagsLineEdit->setObjectName(QString::fromUtf8("myTagsLineEdit"));
    tagsLineEdit->setGeometry(QRect(190, 70, 251, 80));
    tagsLineEdit->completion({"test1", "test2", "test3"});
    tagsLineEdit->tags({"test0", "test1"});

    auto tagsEdit = new yenxo_widgets::TagsEdit(true, ui->centralwidget);
    tagsEdit->setObjectName(QString::fromUtf8("myTagsEdit"));
    tagsEdit->setGeometry(QRect(190, 170, 251, 80));
    tagsEdit->completion({"test1", "test2", "test3"});
    tagsEdit->tags({"test0", "test1"});
}

MainWindow::~MainWindow()
{
    delete ui;
}

