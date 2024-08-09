#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <functional>
#include <map>

class Harl
{
    private:
        void debug(void) const;
        void info(void) const;
        void warning(void) const;
        void error(void) const;
   
    public:
        Harl();
        void complain(std::string level) const;
        ~Harl();
   
};


#endif