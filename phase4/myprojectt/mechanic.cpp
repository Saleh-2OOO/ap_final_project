#include "mechanic.h"


using namespace std;


Mechanic::Mechanic(string name)
{
    set_name(name);
    this->money = 0;
}

void Mechanic::set_name(string& name)
{
    this->name = name;
}

string Mechanic::get_name() const
{
    return name;
}
void Mechanic::increase_money(int m)
{
    if(m>=1000)
    {
        throw out_of_range("you cant add this much money to your at this point");
    }
    else{
    this->money = this->money+ m;
    }

}
void Mechanic::decrease_money(int m)
{
    this->money = this->money - m;
}

int Mechanic::get_money() const
{
    return money;
}
void Mechanic::print_stuff()
{
    for(vector<Tools*>::iterator it = mytools.begin(); it != mytools.end(); it++ )
    {
        cout << (*it)->get_info() << endl;
    }
}
