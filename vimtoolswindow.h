#ifndef VIMTOOLSWINDOW_H
#define VIMTOOLSWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class VimToolsWindow; }
namespace Ui { class eventHandlerBtn; }
QT_END_NAMESPACE

class VimToolsWindow : public QMainWindow
{
    Q_OBJECT

public:
    QLabel* text;
    QLabel* text2;
    QLabel* text3;
    VimToolsWindow(QWidget *parent = nullptr);
    ~VimToolsWindow();
private slots:
    void changeText();
private:
    Ui::VimToolsWindow *ui;
};

#endif // VIMTOOLSWINDOW_H
