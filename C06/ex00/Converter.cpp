#include "ScalarConverter.hpp"

void    ScalarConverter::convertChar(std::string imput){
        imput.c_str();
        int a = static_cast<int>(imput[0]);
        if(a >= 0 && a <= 127){
            std::cout << "\033[32mChar   : " << a << "\033[37m" << std::endl;
        }
        else{
            std::cout << "\033[32mChar : non printabile" << std::endl;
        }
        std::cout << "\033[32mInt    : " << a << "\033[37m "<< std::endl;
        float b = static_cast<float>(a);
        std::cout << "\033[32mFloat  : " << b << ".0f" << "\033[37m" << std::endl;
        double c  = static_cast<double>(a);
        std::cout << "\033[32mDouble : " << c << ".0" << "\033[37m" << std::endl;
}

void    ScalarConverter::convertInt(std::string imput){
    
    int a = std::atoi(imput.c_str());
    if(a >= 33 && a <= 127){
        char b = static_cast<char>(a);    
        std::cout << "\033[32mChar   : " << b << "\033[37m" << std::endl;
    }
    else{
        std::cout << "\033[32mChar   : non printabile"<< "\033[37m" << std::endl;
    }
    std::cout << "\033[32mInt    : " << a << "\033[37m" << std::endl;
    float c = static_cast<float>(a);
    std::cout << "\033[32mFloat  : " << c << ".0f" << "\033[37m" << std::endl;
    double d = static_cast<double>(a);
    std::cout << "\033[32mDouble : " << d  << ".0" << "\033[37m" << std::endl;
}

void ScalarConverter::convertFloat(std::string imput){
    float c = std::strtof(imput.c_str(), NULL);// stod per i double
    int a = static_cast<int>(c);
    double d = static_cast<double>(c);
    if(a >= 33 && a <= 127){
        char b = static_cast<char>(a);
        std::cout << "\033[32mChar   : " << b << "\033[37m" << std::endl; 
    }
    else{
        std::cout << "\033[32mChar   : non printabile \033[37m" << std::endl; 
    }
    std::cout << "\033[32mInt    : " << a << "\033[37m" << std::endl;
    if(imput[imput.length() - 2] == 48)
        std::cout << "\033[32mFloat  : " << c << ".0f\033[37m" << std::endl;
    else
        std::cout << "\033[32mFloat  : " << c << "f\033[37m" << std::endl;
    if(imput[imput.length() - 2] == 48)    
        std::cout << "\033[32mDouble : " << d << ".0\033[37m" << std::endl;
    else
        std::cout << "\033[32mDouble : " << d << "\033[37m" << std::endl;

}

void ScalarConverter::convertDouble(std::string imput){
    float c = std::strtof(imput.c_str(), NULL);
    double f = static_cast<double>(c);
    int a = static_cast<int>(c); 
    if(a >= 33 && a <= 127){
        char b = static_cast<char>(a);
        std::cout << "\033[32mChar   : " << b << "\033[37m" << std::endl; 
    }
    else{
        std::cout << "\033[32mChar   : non printabile \033[37m" << std::endl; 
    }
    std::cout << "\033[32mInt    : " << a << "\033[37m" << std::endl;
    if(imput[imput.length() - 1] == 48)
        std::cout << "\033[32mFloat  : " << c << ".0f\033[37m" << std::endl;
    else
        std::cout << "\033[32mFloat  : " << c << "f\033[37m" << std::endl;
    if(imput[imput.length() - 1] == 48)    
        std::cout << "\033[32mDouble : " << f << ".0\033[37m" << std::endl;
    else
        std::cout << "\033[32mDouble : " << f << "\033[37m" << std::endl;
}