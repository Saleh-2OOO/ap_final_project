#include <iostream>
#include "mechanic.h"
#include "wingmirror.h"
#include "engine.h"

using namespace std;

int main()
{
    Mechanic a("saleh");
    cout <<a.get_name()<< endl;
    // Engine c(static_cast<engine_strengh>(1), static_cast<engine_quality>(1));
    // cout << c.get_price() << endl;
    int i;
    cin>>i;
    a.mytools.push_back(new Engine (static_cast<engine_strengh>(i), static_cast<engine_quality>(1)));
    a.mytools.push_back(new Wingmirror (static_cast<mirror_quality>(1), static_cast<mirror_type>(1)));
    a.print_stuff();

    try{
        a.increase_money(2000);
        }
    catch(out_of_range &s) 
    {
        cout << s.what() << " your wallet will be set to 999$" << endl;
        a.increase_money(999);
    }
    return 0;
}