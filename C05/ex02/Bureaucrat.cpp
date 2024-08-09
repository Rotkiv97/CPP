#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const Name, int voto) : _name(Name), _voto(voto) {
    if(voto < 1)
        throw Bureaucrat::GradeTooHighException();
    if (voto > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "\033[32mCostructor Bureaucrat\033[37m" << std::endl;    
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) : _name(Bureaucrat._name) , _voto(Bureaucrat._voto) {

}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &Bureaucrat){
    if(this != &Bureaucrat){
        this->_voto = Bureaucrat._voto;
    }
    return(*this);
}

bool Bureaucrat::operator<(const Bureaucrat &Bureaucrat){
    if(this->_voto < Bureaucrat._voto)
        return(true);
    return(false);
}

bool Bureaucrat::operator>(const Bureaucrat &Bureaucrat){
    if(this->_voto > Bureaucrat._voto)
        return(true);
    return(false);
}

std::string Bureaucrat::getName() const {
    return(_name);
}

int Bureaucrat::getGrade() const {
    return (_voto);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(){
    std::cout << "\033[32mCostructor GradeTooHighException\033[37m" << std::endl;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){
    std::cout << "\033[31mDestructor GradeTooHighException\033[37m" << std::endl;  
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){
    std::cout << "\033[32mCostructor GradeTooLowException\033[37m" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw (){
    std::cout << "\033[31mDestructor GradeTooLowException\033[37m" << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return("\033[36mGrado stroppo alto\033[37m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
    return ("\033[36mGrado stroppo basso\033[37m");
}


float DownGrade(float grade){
    
    grade += 1;
    std::cout << "Il Grado e' -> " << grade << std::endl;
    if(grade > 150){
        throw Bureaucrat::GradeTooLowException();
    }
    return(grade);
}

float OverGrade(float grade){
    
    grade -= 1;
    std::cout << "Il Grado e' -> " << grade << std::endl; 
    if( grade < 1){
        throw Bureaucrat::GradeTooHighException();
    }
    return(grade);
}

bool    Bureaucrat::singForm(AForm &AForm){
    if(AForm.beSigned(*this) == true){
        std::cout << "\033[36m" << getName() << " ha firmato il documento " << AForm.getModulo()  << " di grado " <<\
        AForm.getVotoForm() << "\033[37m" << std::endl;
        return(true);
    }
    else if (AForm.beSigned(*this) == false)
    {
        std::cout << "\033[31m" << getName() << " non ha potuto firmare il documento " << AForm.getModulo() << std::endl;
        std::cout << "Perche' di grado troppo basso -> "  << getGrade() << "\033[37m" <<\
        std::endl;
        throw   Bureaucrat::GradeTooLowException();
    }
    return(true);
}   

void    Bureaucrat::executeForm(AForm const &AForm){
    AForm.constexecute(*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat){
    out << " " << Bureaucrat.getGrade() << " ";
    out << " " <<  Bureaucrat.getName() << " ";
    return(out);
}

Bureaucrat::~Bureaucrat(){
    std::cout << "\033[31mDestructor Bureaucrat\033[37m" << std::endl;
}

