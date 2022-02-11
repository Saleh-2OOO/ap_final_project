#ifndef ENGINE_H
#define ENGINE_H

#include "tools.h"

enum engine_strengh {weak = 1 , medium , high}; 
enum engine_quality {japonese_e = 1 , italian_e}; 

class Engine: public Tools
{
    public:

        Engine(engine_strengh a, engine_quality p); 

        void set_engine_strength(engine_strengh a);   
        void set_engine_quality(engine_quality p);   
        std::string get_info();

        void set_price(int);   
        int get_price() const;    


    private:
        engine_strengh strength;
        engine_quality enj_quality;
          
};

#endif 