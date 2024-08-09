#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string name_form) : AForm(name_form, 72, 45, false)
{
    std::cout << "\033[32mCostructor RobotomyRequestForm\033[37m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & RobotomyRequestForm) : AForm(RobotomyRequestForm._modulo, 72, 45, false)
{
    *this = RobotomyRequestForm;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &RobotomyRequestForm){
    if(this != &RobotomyRequestForm){
        this->_modulo = RobotomyRequestForm._modulo;
    }
    return(*this);
}

bool RobotomyRequestForm::constexecute(Bureaucrat const &executor) const{
    
    std::string sound[2];
    sound[0] = "wuaaaaaaa";
    sound[1] = "maaaaaaaaa";
    srand(time(0)); // time(0) mi rende un numero casuale in sec dal 1970/01/01 quindi da 0 a ...
    int n = rand(); // mi pesca quel numero (ovviamente che sia pari o dispari e' 50% - 50%)
    if(executor.getGrade() <= getVotoEsecutive()){
        if(n % 2 == 0)
            std::cout << sound[0] << " il " << getModulo() << " e' stato robotomizzato " << std::endl;
        else if (n % 1 == 0)
            std::cout << sound[1] << " il " << getModulo() << " non e' stato robotomizzato " << std::endl;
        else
            std::cout << "Errore" << std::endl;
        return(true);
    }
    else if(executor.getGrade() > getVotoEsecutive()){
        std::cout << "\033[31mIl Documento non e' eseguibile\033[37m" << std::endl; 
        throw RobotomyRequestForm::GradeTooHighException();
    }
    return(true);
}

bool RobotomyRequestForm::beSigned(Bureaucrat &burocrate){
    if(burocrate.getGrade() <= getVotoForm()){
        if(getFirma() == false)
            setFirma(true);
        else
            return(getFirma());
    }
    else{
        if (getFirma() == true)
            setFirma(false);
        else
            return(getFirma());
    }
    return(getFirma());
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "\033[31mDestructor RobotomyRequestForm\033[37m" << std::endl;
}