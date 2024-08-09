#include "Intern.hpp"

Intern::Intern(){
    std::cout << "\033[32mCostructro Intern\033[37m" << std::endl;
    _name_form[0] = "doc1";
    _name_form[1] = "doc2";
    _name_form[2] = "doc3";
    _AForm[0] = new ShrubberyCreationForm("ShrubberyCreationForm");
    _AForm[1] = new RobotomyRequestForm("RobotomyRequestForm");
    _AForm[2] = new PresidentialPardonForm("PresidentialPardonForm");
}

Intern::Intern(const Intern &Intern){
    (void)Intern;
    _name_form[0] = "doc1";
    _name_form[1] = "doc2";
    _name_form[2] = "doc3";
    _AForm[0] =  new ShrubberyCreationForm("ShrubberyCreationForm");
    _AForm[1] =  new RobotomyRequestForm("ShrubberyCreationForm");
    _AForm[2] =  new PresidentialPardonForm("ShrubberyCreationForm");
}



Intern &Intern::operator=(const Intern &Intern){
    (void)Intern;
    return(*this);
}

AForm *Intern::makeForm(std::string name_form, std::string target){
    for(int i = 0; i < 3; i++){
        if(!name_form.compare(_name_form[i]))
        {
            _AForm[i]->setModulo(target); 
            return(_AForm[i]->clone(*_AForm));
        }
    }
    throw std::runtime_error("Errore");
    return(0);
}

Intern::~Intern(){
    for(int i = 0; i < 3 ; i++)
        delete _AForm[i];
    std::cout << "\033[31mDestructor Intern\033[37m" << std::endl;
}