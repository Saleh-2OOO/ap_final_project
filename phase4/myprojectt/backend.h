#ifndef BACKEND_H
#define BACKEND_H
#include <iostream>
#include <QObject>
#include <stdexcept>
#include<vector>
#include "tools.h"
#include "wingmirror.h"
#include "engine.h"
#include <string>
#include "mechanic.h"

using namespace std;
class Backend : public QObject
{
    Q_OBJECT
private:
    Mechanic user;
    int wing_mirror_type;
    int wing_mirror_quality;
    int engine_streangth;
    int engine_qualityy;
    QString temp_qstr;

public slots:
    void mechaniclogin(QString name);
    bool incmoney(QString add);
    QString get_money_left();
    void wingmirrorquality(int x);
    void wingmirrortype(int x);
    void enginequality(int x);
    void enginestreangth(int x);
    void makemirror();
    void makeengine();
    QString showmystuff();
    void ext();

signals:
    void notenoughmoney();
    void enoughmoney();

};

#endif // BACKEND_H
