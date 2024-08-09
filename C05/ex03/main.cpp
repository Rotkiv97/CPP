#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
    while(1){
        std::string name_burocrate;
        std::string name_Form;
        std::string target;
        int grade;
        std::cout << "\033[33mImmetti il nome del Burocrate -> \033[37m" << std::flush;
        std::cin >> name_burocrate;
        std::cout << "\033[33mImmetti il Grado del buorocrate -> \033[37m" << std::flush;  
        std::cin >> grade;
        std::cout << "\033[32m|doc1\033[33m|doc2|\033[35mdoc3|\033[37m" << std::endl;
        std::cin >> name_Form;
        std::cout << "\033[33mImmetti il Target -> \033[37m" << std::flush;
        std::cin >> target;
        try
        {
            Intern someRandomIntern;
            Bureaucrat burocrate(name_burocrate, grade);
            AForm *a;
            a = someRandomIntern.makeForm(name_Form, target);
            burocrate.singForm(*a);
            a->beSigned(burocrate);
            burocrate.executeForm(*a);
            delete a;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            
        }
        std::string string;
        std::cout << "\033[36mVuoi continuare -> \033[37m" << std::flush;
        std::cin >> string;
        if(!string.compare("yes"))
            continue;
        else
            break;
    }
    return(0);
}