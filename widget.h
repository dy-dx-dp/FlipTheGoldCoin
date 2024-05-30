#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPalette>
#include <QPainter>
#include <QTimer>
#include "mypushbutton.h"
#include "choosesense.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
