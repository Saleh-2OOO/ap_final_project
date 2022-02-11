#include "backend.h"


void Backend::mechaniclogin(QString name)
{
    string strname = name.toStdString();
    user.set_name(strname);
}

bool Backend::incmoney(QString add)
{
    string asd = add.toStdString();
    for(auto i : asd)
    {
        if(isalpha(i))
        {
            return false;
        }
    }
    int addedmoney = stoi(asd);
    try{
        user.increase_money(addedmoney);
    }
    catch(out_of_range &s)
    {
        user.increase_money(999);
    }
    return true;

}

QString Backend::get_money_left() //namayeshe mojudi
{
    string a = to_string(user.get_money());
//    a.resize(a.size() - 4);
//    a.append(" $");
    QString b = QString::fromStdString(a);
    return b;

}

void Backend::wingmirrorquality(int x)
{
    this->wing_mirror_quality = x;

}
void Backend::enginequality(int x)
{
    this->engine_qualityy = x;
}

void Backend::wingmirrortype(int x)
{
    this->wing_mirror_type = x;
}
void Backend::enginestreangth(int x)
{
    this->engine_streangth = x;
}


void Backend::makemirror()
{
    if (user.get_money() >= 5)
    {
        user.decrease_money(5);
        Wingmirror *a;
        a = new Wingmirror(static_cast<mirror_quality>(wing_mirror_quality), static_cast<mirror_type>(wing_mirror_type));
        user.mytools.push_back(a);
        emit enoughmoney();
    }

    else
    {
        emit notenoughmoney();
    }
}
void Backend::makeengine()
{
    if (user.get_money() >= 10)
    {
        user.decrease_money(10);
        Engine *a;
        a = new Engine(static_cast<engine_strengh>(engine_streangth), static_cast<engine_quality>(engine_qualityy));
        user.mytools.push_back(a);
        emit enoughmoney();
    }

    else
    {
        emit notenoughmoney();
    }
}

QString Backend::showmystuff()
{
    string str;
    for(vector<Tools*>::iterator it = user.mytools.begin(); it != user.mytools.end(); it++ )
    {
        str = str + (*it)->get_info();
        str = str + "\n";
    }
      temp_qstr = QString::fromStdString(str);

    return temp_qstr;
}


void Backend::ext()
{
    exit(0);
}
