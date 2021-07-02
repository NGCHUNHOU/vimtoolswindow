#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

class customWidget : public QWidget
{
    Q_OBJECT
public:
    explicit customWidget(QWidget *parent = nullptr);

signals:

};

#endif // CUSTOMWIDGET_H
