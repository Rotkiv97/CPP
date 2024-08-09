#pragma once

#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
     private:
        std::string _modulo;
    public:
        PresidentialPardonForm(std::string modulo);
        PresidentialPardonForm(const PresidentialPardonForm & PresidentialPardonForm);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &PresidentialPardonForm);
        virtual bool beSigned(Bureaucrat &Bureaucrat);
        virtual bool constexecute(Bureaucrat const &executor) const; 
        virtual ~PresidentialPardonForm();
};

std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &PresidentialPardonForm);