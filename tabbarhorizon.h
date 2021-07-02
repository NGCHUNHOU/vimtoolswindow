#ifndef MYTABWIDGET_H
#define MYTABWIDGET_H
#include <QWidget>
#include <QTabBar>
#include <QTabWidget>
#include <QProxyStyle>
#include <QStyleOptionTab>

class tabbarhorizon: public QProxyStyle {
public:
  QSize sizeFromContents(ContentsType type, const QStyleOption* option,
                         const QSize& size, const QWidget* widget) const;
  void drawControl(ControlElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const;
};

#endif // MYTABWIDGET_H
