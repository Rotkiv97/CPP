#pragma once
#include "AForm.hpp"
#include <ostream>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _modulo;
    public:
        ShrubberyCreationForm(std::string name_form);
        ShrubberyCreationForm(const ShrubberyCreationForm & ShrubberyCreationForm);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ShrubberyCreationForm);
        virtual bool beSigned(Bureaucrat &Bureaucrat);
        virtual bool constexecute(Bureaucrat const &executor) const; 
        ~ShrubberyCreationForm();
};

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &ShrubberyCreationForm);
