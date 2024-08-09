#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    std::string string;
    std::string name;
    std::string name_documento;
    int grade;
    while(1){
        std::cout << "\033[32mImmetti il nome del burocrate -> \033[37m" << std::flush;
        std::cin >> name;
        std::cout << "\033[32mImmetti il grado del burocrate -> \033[37m" << std::flush;
        std::cin >> grade;
        std::cout << "\033[33mdoc1 |\033[34m doc2 |\033[32m doc3" << std::endl;
        std::cout << "\033[33mImmetti il nome del documento -> \033[37m" << std::flush;
        std::cin >> name_documento;
        try
        {
            Bureaucrat burocrate(name, grade);
            if(!name_documento.compare("doc1")){
                AForm   *a = new ShrubberyCreationForm(name_documento);
                a->setModulo(name_documento);
                a->beSigned(burocrate);
                burocrate.singForm(*a);
                a->constexecute(burocrate);
                burocrate.executeForm(*a);
                delete a;
            }
            else if(!name_documento.compare("doc2")){
                AForm   *a = new RobotomyRequestForm(name_documento);
                a->setModulo(name_documento);
                a->beSigned(burocrate);
                burocrate.singForm(*a);
                a->constexecute(burocrate);
                burocrate.executeForm(*a);
                delete a;
            }
            else if (!name_documento.compare("doc3")){
                AForm   *a = new PresidentialPardonForm(name_documento);
                a->setModulo(name_documento);
                a->beSigned(burocrate);
                burocrate.singForm(*a);
                a->constexecute(burocrate);
                burocrate.executeForm(*a);
                delete a;
            }
            else{
                std::cout << "\033[31mDocumento in esistente\033[37m" << std::endl;
                continue;
            }
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << "Voui Continuare -> " << std::flush;
        std::string string1;
        std::cin >> string1;
        if(!string1.compare("yes")){
            continue;
        }
        else{
            break;
        }
    }

}