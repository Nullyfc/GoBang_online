#include "mylabel.h"

mylabel::mylabel(QWidget *parent) : QLabel(parent)
{

}

void mylabel::mousePressEvent(QMouseEvent *ev)
{
     //如果单击了就触发clicked信号
     if (ev->button() == Qt::LeftButton) {
         //触发clicked信号
         emit clicked();


     }
    //将该事件传给父类处理
    QLabel::mousePressEvent(ev);
}
