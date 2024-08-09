#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <cerrno>

class ScalarConverter{
    typedef enum en_type{
        CHAR, INT, FLOAT, DOUBLE, IMPOSSIBILE    
    } type;
    public:

        static void convert(std::string imput);
        static type get_Type(std::string type);
        static void convertChar(std::string imput);
        static void  convertInt(std::string imput);
        static void convertFloat(std::string imput);
        static void convertDouble(std::string imput);
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &ScalarConverter);
        ScalarConverter &operator=(const ScalarConverter &ScalarConverter);
        ~ScalarConverter();
};

bool check_double(std::string type);
bool check_float(std::string type);
bool check_num_d(std::string type);
bool check_num_f(std::string type);
bool check_pos_float(std::string type, std::string a);
bool check_pos_d(std::string type, std::string a);
bool check_pos(std::string type, std::string a);
bool Check_riccorenze(std::string type, std::string ricorenza);
bool check_int(std::string type);
bool check_char(std::string type);
