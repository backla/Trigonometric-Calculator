#ifndef CALYH_H
#define CALYH_H

#include <QDialog>
#include "arcsin.h"
#include "arctan.h"
#include "sin.h"
#include "cos.h"

namespace Ui {
class CalYh;
}

class CalYh : public QDialog
{
    Q_OBJECT

public:
    explicit CalYh(QWidget *parent = 0);
    ~CalYh();

private:
    Ui::CalYh *ui;
    void layout();//布局
    QString testAll();//测试
    QString s;//左侧文本框显示的字符串
    QString sRit;//右侧文本框显示的字符串
    bool isClear;//判断已经按过sin/cos/arcsin/arctan按钮，按过表示true，默认ture

    Sin *sinFunc;
    Cos *cosFunc;
    ArcSin *arcsinTest;
    ArcTan *arctanTest;
};

#endif // CALYH_H
