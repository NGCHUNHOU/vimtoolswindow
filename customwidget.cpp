#include "customwidget.h"

customWidget::customWidget(QWidget *parent) : QWidget(parent)
{
    this->setGeometry(0, 400, 800, 80);
    QHBoxLayout* thirdondLay = new QHBoxLayout(this);
    QLabel* thrText = new QLabel("third block text", this);
    thirdondLay->addWidget(thrText);
}
