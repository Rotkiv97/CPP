#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name_form) : AForm(name_form, 25 ,5, false)
{
    std::cout << "\033[32mCostructor PresidentialPardonForm\033[37m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & PresidentialPardonForm) : AForm(PresidentialPardonForm._modulo,  25 , 5, false)
{
    *this = PresidentialPardonForm;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &PresidentialPardonForm){
    if(this != &PresidentialPardonForm){
        this->_modulo = PresidentialPardonForm._modulo;
    }
    return(*this);
}

bool PresidentialPardonForm::constexecute(Bureaucrat const &executor) const{
    if(executor.getGrade() <= getVotoEsecutive()){
        std::cout << "\033[35m" << getModulo() <<  " e' stato graziato da Zaphod BeebBrox" << std::endl;
        return(true);
    }
    else if (executor.getGrade() > getVotoEsecutive()){
        std::cout << "\033[31mIl Documento non e' eseguibile\033[37m" << std::endl;
        throw PresidentialPardonForm::GradeTooHighException();
    }
    return(true);
}

bool PresidentialPardonForm::beSigned(Bureaucrat &burocrate){
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

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "\033[31mDestructor PresidentialPardonForm\033[37m" << std::endl;
}