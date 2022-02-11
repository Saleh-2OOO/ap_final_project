#ifndef WINGMIRROR_H
#define WINGMIRROR_H

#include "tools.h"

enum mirror_quality {italian = 1 , japonese , iranian}; 
enum mirror_type {straight = 1 , curved}; 

class Wingmirror: public Tools
{
    public:

        Wingmirror(mirror_quality a, mirror_type p); 

        void set_mirror_quality(mirror_quality a);   
        void set_mirror_type(mirror_type p);   
         

        void set_price(int);   
        int get_price() const;    
        std::string get_info();

    private:
        mirror_quality quality;
        mirror_type mir_type;
        int price=5;  
};

#endif 