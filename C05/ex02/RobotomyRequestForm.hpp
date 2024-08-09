#pragma once
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _modulo;
    public:
        RobotomyRequestForm(std::string modulo);
        RobotomyRequestForm(const RobotomyRequestForm & RobotomyRequestForm);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &RobotomyRequestForm);
        virtual bool beSigned(Bureaucrat &Bureaucrat);
        virtual bool constexecute(Bureaucrat const &executor) const; 
        ~RobotomyRequestForm();
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &RobotomyRequestForm);



