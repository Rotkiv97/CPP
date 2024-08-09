#pragma once

#include "AForm.hpp"
class AForm;

class PresidentialPardonForm : public AForm
{
     private:
        std::string _modulo;
    public:
        PresidentialPardonForm(std::string modulo);
        PresidentialPardonForm(const PresidentialPardonForm & PresidentialPardonForm);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &PresidentialPardonForm);
        virtual bool beSigned(Bureaucrat &Bureaucrat);
        virtual void constexecute(Bureaucrat const &executor) const; 
        virtual AForm *clone(AForm *AForm);
        virtual ~PresidentialPardonForm();
};

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &PresidentialPardonForm);