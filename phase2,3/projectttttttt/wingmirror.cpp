#include "wingmirror.h"
using namespace std;

Wingmirror::Wingmirror(mirror_quality a, mirror_type p)
{
    set_price(5);
    set_mirror_quality(a);
    set_mirror_type(p);
}

void Wingmirror::set_mirror_quality(mirror_quality a)
{
    quality = a;
}
void Wingmirror::set_mirror_type(mirror_type p)
{
     mir_type = p;
}

void Wingmirror::set_price(int a)
{
    price = a;
}

int Wingmirror::get_price() const 
{
    return price;
}

std::string Wingmirror::get_info()
{
    string s="";
    switch (this->quality)
    {
    case italian:
        {    
            switch (this->mir_type)
            {
            case straight:
                s = "an italian straight mirror ";
                break;
            case curved:
                s = "an italian curved mirror ";
                break;
            }


            break;
        }

    case japonese:
        {    
            switch (this->mir_type)
            {
            case straight:
                s = "a japonese straight mirror ";
                break;
            case curved:
                s = "a japonese curved mirror";
                break;
            }


            break;
        }
    case iranian:
        {    
            switch (this->mir_type)
            {
            case straight:
                s = "an iranian straight mirror ";
                break;
            case curved:
                s = "an iranian curved mirror ";
                break;
            }


            break;
        }
    
    }
    return s;
}