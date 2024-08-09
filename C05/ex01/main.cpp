#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(){
    std::string target;
    std::string name;
    int grade;
    int grade_fortm;
    int grade_exec;
    while(1){
        std::cout << "\033[33mImmetti il nome del burocrate -> \033[37m" << std::flush;
        std::cin >> name;
        std::cout << "\033[33mImmetti il grado del burocrate -> \033[37m" << std::flush;
        std::cin >> grade;
        std::cout << "\033[33mImmetti il taget del Form -> \033[37m" << std::flush;
        std::cin >> target;
        std::cout << "\033[33mImmetti il grado del form -> \033[37m" << std::flush;
        std::cin >> grade_fortm;
        std::cout << "\033[33mImmetti il grado eseguibile -> \033[37m" << std::flush;
        std::cin >> grade_exec; 
        try
        {
            Bureaucrat burocrate(name, grade);
            Form form(target, false, grade_fortm, grade_exec);
            form.beSigned(burocrate);
            burocrate.singForm(form);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::string string;
        std::cout << "Vuoi continuare -> " << std::flush;
        std::cin >> string;
        if(!string.compare("yes"))
            continue;
        else
            break;
        
    }
    return(0);
}