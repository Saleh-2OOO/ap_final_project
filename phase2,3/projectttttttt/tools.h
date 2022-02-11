#ifndef TOOLS_H
#define TOOLS_H

#include <string>
#include <stdexcept>

class Tools
{
    public:
        int price;
        virtual std::string get_info() = 0;
};

#endif