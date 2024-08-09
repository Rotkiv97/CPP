#pragma once

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class AForm;

class Intern
{
    private:
        AForm *_AForm[3];
        std::string _name_form[3];
    public:
        Intern();
        Intern(const Intern &Intern);
        Intern &operator=(const Intern &Intern);

        AForm *makeForm(std::string name_form, std::string target_destinazione);
        ~Intern();
};
