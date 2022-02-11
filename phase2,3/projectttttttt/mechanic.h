#ifndef MECHANIC_H
#define MECHANIC_H

#include <iostream>
#include <string>
#include <vector>
#include "tools.h"
#include "wingmirror.h"
#include "engine.h"


class Mechanic
{
    public:

        Mechanic(std::string ="user"); 

        void set_name(std::string &);   
        std::string get_name() const;    

        void increase_money(int);   
        void decrease_money(int);   
        int get_money() const;  

        std::vector<Tools*> mytools;
        void print_stuff();

    private:
        std::string name;  
        int money;  
};

#endif 