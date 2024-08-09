#include "Bureaucrat.hpp"


int main(){
    std::string name;
    std::string string;
    float     grade;
    while (1)
    {
        try
        {
            std::cout << "\033[33mImmetti il Nome -> " << std::flush;
            std::cin >> name;
            std::cout << "\033[33mImmetti il Grado -> " << std::flush;
            std::cin >> grade;
            Bureaucrat Bureaucrat(name, grade);
           // grade = OverGrade(grade);
            grade = DownGrade(grade);
            std::cout << "\033[33m" << name << ", grado burocrate " << grade << "\033[37m" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << "\033[31m" << e.what() << "\033[37m" << '\n';
        } 
        
        std::cout << "\033[33mVui constinuare a il ciclo -> \033[37m" << std::flush;
        std::cin >> string;
        if(!string.compare("yes"))    
            continue;
        else if(!string.compare("no"))
            break;
        else
            break;
    }
}