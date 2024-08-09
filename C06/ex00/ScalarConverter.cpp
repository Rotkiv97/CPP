#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &ScalarConverter){
    *this = ScalarConverter;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ScalarConverter){
    (void)ScalarConverter;
    return(*this);
}

bool check_char(std::string type){
    type.c_str();
    if(type.length() == 1)
    {
        if((type[0] >= 33 && type[0] <= 47) || (type[0] >= 58 && type[0] < 127)){
            return(true);
        }
    }
    return(false);
}

bool check_int(std::string type){
    type.c_str();
    size_t i = 0;
    if(type[0] == 45 || type[0] == 43)
        i+=1;
    for(; i < type.length(); i++){
        if((type[i] < 48 || type[i] > 57)){
            return(false);
        }
    }
    return(true);
}

bool Check_riccorenze(std::string type, std::string ricorenza){
    int count = 0;
    size_t i = 0;
    while((i = type.find(ricorenza, i)) != std::string::npos){
        count++;
        i += ricorenza.length();
        if(count > 1)
            return(false);
    }
    if(count == 0)
        return(false);
    return(true);
}

bool check_pos(std::string type, std::string a)
{

    a.c_str();
    type.c_str();
    if(type[type.length() - 1] == a[0] || type[0] == a[0]){ 
        return(false);
    }
    else if (type[type.length() - 2] == a[0])
        return(false);
    return(true);
}

bool check_pos_d(std::string type, std::string a)
{

    a.c_str();
    type.c_str();
    if(type[type.length() - 1] == a[0] || type[0] == a[0]){ 
        return(false);
    }
    return(true);
}

bool check_pos_float(std::string type, std::string a)
{
    if(type[type.length() - 1] == a[0]){
        return(true);
    }
    return(false);
}

bool check_num_f(std::string type){
    type.c_str();
    std::cout << type << std::endl;
    size_t i = 0;
    if(type[0] == 45 || type[0] == 43)
        i+=1;
    for(; i < type.length(); i++){
        if(type[i] >= 48 && type[i] <= 57){}
        else if(type[i] == 46){}
        else if(type[i] == 102){}
        else
            return(false);
    }
    return(true);
}

bool check_num_d(std::string type){
    type.c_str();
    size_t i = 0;
    if(type[0] == 45 || type[0] == 43)
        i+=1;
    for(; i < type.length(); i++){
        if(type[i] >= 48 && type[i] <= 57){}
        else if(type[i] == 46){}
        else
            return(false);
    }
    return(true);
}

bool check_float(std::string type){
    type.c_str();

    if(!check_pos(type, ".") || !check_pos_float(type, "f"))
        return(false);
    if(!Check_riccorenze(type, ".")){ 
        return(false);
    }
    if(!Check_riccorenze(type, "f")){
        return(false);
    }
    if(!check_num_f(type))
        return(false);
    return(true);

}

bool check_double(std::string type){
    type.c_str();

    if(!check_pos_d(type, "."))
        return(false);
    if(!Check_riccorenze(type, ".")){ 
        return(false);
    }
    if(!check_num_d(type))
        return(false);
    return(true);
}


ScalarConverter::type ScalarConverter::get_Type(std::string type){
    type.c_str();
    int a;
    a = std::atoi(type.c_str());
    if(check_char(type))
        return(CHAR);
    if(check_int(type))
        return(INT);
    if(check_float(type))
        return(FLOAT);
    if(check_double(type)){
        return(DOUBLE);
    }
    return(IMPOSSIBILE);
}   

void ScalarConverter::convert(std::string imput){
    
    long int a = std::strtol(imput.c_str(), NULL, 10);
    if(!imput.compare("nan") || !imput.compare("+nan") || !imput.compare("-nan")){
        std::cout << "\033[35mChar   : impossibile\033[37m" << std::endl;
        std::cout << "\033[35mInt    : impossibile\033[37m" << std::endl;
        std::cout << "\033[33mFloat  : nan\033[37m" << std::endl;
        std::cout << "\033[33mDouble : nanf\033[37m" << std::endl;
    }
    else if(errno == ERANGE || a > std::numeric_limits<int>::max() || a < std::numeric_limits<int>::min())
    {
        std::cerr << "E'andato in overflow = numero non rappresentabile" << std::endl;
    }
    else{
        type type;
        type = get_Type(imput);
        switch (type)
        {
            case CHAR:
                std::cout << "\033[33mIs a char\033[37m" << std::endl;
                convertChar(imput);
                break;
            
            case INT:
                std::cout << "\033[33mIs a int\033[37m" << std::endl;
                convertInt(imput);
                break;
            
            case FLOAT:
                std::cout << "\033[33mIs a float\033[37m" << std::endl;
                convertFloat(imput);
                break;
            
            case DOUBLE:
                std::cout << "\033[33mIs a double\033[37m" << std::endl;
                convertDouble(imput);
                break;
        
            case IMPOSSIBILE:
                std::cout << "\033[31mE' impossibile\033[37m" << std::endl;
                break;
        }
    }
}