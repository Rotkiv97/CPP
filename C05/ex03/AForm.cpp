#include "AForm.hpp"

AForm::AForm(std::string const Modulo, int const voto_form,\
int const voto_esecutive , bool firma) : _modulo(Modulo) , _firma(firma), _voto_form(voto_form),\
_voto_esecutive(voto_esecutive){
    if(voto_form > 150 || voto_esecutive > 150)
        throw AForm::GradeTooLowException();
    else if (voto_esecutive < 1 || voto_form < 1)
        throw AForm::GradeTooHighException();
}

AForm::AForm(const AForm &AForm) : _modulo(AForm._modulo), _firma(false), _voto_form(AForm._voto_form), _voto_esecutive(AForm._voto_esecutive){
    *this = AForm;
}

AForm &AForm::operator=(const AForm &AForm){
    if(this != &AForm){
        this->_modulo = AForm._modulo;
    }
    return(*this);
}

AForm::GradeTooHighException::GradeTooHighException(){
    std::cout << "\033[32mCostructor GradeTooHighException\033[37m" << std::endl;
}
AForm::GradeTooHighException::~GradeTooHighException() throw(){
    std::cout << "\033[31mDestructor GradeTooHighException\033[37m" << std::endl;
}

AForm::GradeTooLowException::GradeTooLowException(){
    std::cout << "\033[32mCostructor GradeTooLowException\033[37m" << std::endl;
}
AForm::GradeTooLowException::~GradeTooLowException() throw(){
    std::cout << "\033[31mDestructor GradeTooLowException\033[37m" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw(){
    return("\033[35mIl Grado del documento e' troppo alto\033[37m");
}

const char *AForm::GradeTooLowException::what() const throw(){
    return("\033[35mIl Grado del documento e' troppo basso\033[37m");
}

std::string const AForm::getModulo() const {
    return(_modulo);
}

int  AForm::getVotoForm() const{
    return(_voto_form);
}

int  AForm::getVotoEsecutive() const {
    return(_voto_esecutive);
}

bool AForm::getFirma() const{
    return(_firma);
}

void AForm::setFirma(bool firma){
    this->_firma = firma;
}

std::ostream &operator<<(std::ostream &out, const AForm &AForm){
    out << " " << AForm.getVotoEsecutive() << " ";
    out << " " <<  AForm.getModulo() << " ";
    out << " " <<  AForm.getVotoForm() << " ";
    out << " " << AForm.getFirma() << " ";
    return(out);
}

void AForm::setModulo(std::string modulo){
    this->_modulo = modulo;
}

AForm::~AForm(){
    std::cout << "\033[31mDestructor AForm\033[37m" << std::endl;
}