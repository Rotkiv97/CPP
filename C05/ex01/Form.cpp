#include "Form.hpp"

Form::Form(std::string const Modulo, bool firma, int voto_form,\
int const voto_esecutive) : _modulo(Modulo) , _firma(firma), _voto_form(voto_form),\
_voto_esecutive(voto_esecutive){
    if(voto_form > 150 || voto_esecutive > 150)
        throw Form::GradeTooLowException();
    else if (voto_esecutive < 1 || voto_form < 1)
        throw Form::GradeTooHighException();
    std::cout << "\033[32mCostrucotr Form\033[32m" << std::endl;
}

Form::Form(const Form &Form) : _modulo(Form._modulo), _firma(false), _voto_form(Form._voto_form), _voto_esecutive(Form._voto_esecutive){
    *this = Form;
}

Form &Form::operator=(const Form &Form){
    if(this != &Form){
        this->_firma = Form._firma;  
    }
    return(*this);
}

bool Form::beSigned(Bureaucrat &Bureaucrat){
    if(Bureaucrat.getGrade() <= _voto_form){
        if(_firma == false)
            _firma = true;
        else
            return(_firma);
    }
    else{
        if (_firma == true)
            _firma = false;
        else
            return(_firma);
    }
    return(_firma);
}

Form::GradeTooHighException::GradeTooHighException(){
    std::cout << "\033[32mCostructor GradeTooHighException\033[37m" << std::endl;
}
Form::GradeTooHighException::~GradeTooHighException()throw() {
    std::cout << "\033[31mDestructor GradeTooHighException\033[37m" << std::endl;
}

Form::GradeTooLowException::GradeTooLowException() {
    std::cout << "\033[32mCostructor GradeTooLowException\033[37m" << std::endl;
}
Form::GradeTooLowException::~GradeTooLowException() throw() {
    std::cout << "\033[31mDestructor GradeTooLowException\033[37m" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw(){
    return("\033[35mIl valore e' troppo alto\033[37m");
}

const char *Form::GradeTooLowException::what() const throw(){
    return("\033[35mIl valore e' troppo basso\033[37m");
}

std::string Form::getModulo() const {
    return(_modulo);
}

int Form::getVotoForm() const{
    return(_voto_form);
}

int Form::getVotoEsecutive() const {
    return(_voto_esecutive);
}

bool Form::getFirma() const{
    return(_firma);
}

std::ostream &operator<<(std::ostream &out, const Form &Form){
    out << " " << Form.getVotoEsecutive() << " ";
    out << " " <<  Form.getModulo() << " ";
    out << " " <<  Form.getVotoForm() << " ";
    out << " " << Form.getFirma() << " ";
    return(out);
}

Form::~Form(){
    std::cout << "\033[31mDestructor Form\033[37m" << std::endl;
}