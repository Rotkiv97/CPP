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
        virtual void constexecute(Bureaucrat const &executor) const; 
        virtual AForm *clone(AForm *AForm);
        ~RobotomyRequestForm();
};

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &RobotomyRequestForm);



