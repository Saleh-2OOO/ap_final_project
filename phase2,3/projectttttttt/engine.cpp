#include "engine.h"
using namespace std;

Engine::Engine(engine_strengh t, engine_quality p)
{
    set_price(10);
    set_engine_strength(t);
    set_engine_quality(p);
}

void Engine::set_engine_strength(engine_strengh a)
{
    strength = a;
}
void Engine::set_engine_quality(engine_quality p)
{
    enj_quality = p;
}

void Engine::set_price(int a)
{
    price = a;
}

int Engine::get_price() const 
{
    return price;
}
std::string Engine::get_info()
{
    string s="";
    switch (this->strength)
    {
    case weak:
        {    
            switch (this->enj_quality)
            {
            case japonese_e:
                s = "a japonese engine with weak power ";
                break;
            case italian_e:
                s = "an italian engine with weak power ";
                break;
            }


            break;
        }

    case medium:
        {    
            switch (this->enj_quality)
            {
            case japonese_e:
                s = "a japonese engine with medium power ";
                break;
            case italian_e:
                s = "an italian engine with medium power ";
                break;
            }


            break;
        }
    case high:
        {    
            switch (this->enj_quality)
            {
            case japonese_e:
                s = "a japonese engine with high power ";
                break;
            case italian_e:
                s = "an italian engine with high power ";
                break;
            }


            break;
        }
    
    }
    return s;
}