#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    protected:
        std::string const _name;
        int _voto;
    public:
        Bureaucrat(std::string const Name, int voto);
        Bureaucrat(const Bureaucrat &Bureaucrat);
        Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
        bool operator<(const Bureaucrat &Bureaucrat);
        bool operator>(const Bureaucrat &Bureaucrat);
        bool singForm(AForm &Form);/////controlla se il modulo e' stato firmato 
        std::string getName() const;
        void executeForm(AForm const &AForm);
        int getGrade() const;
        class  GradeTooHighException : public std::exception
        {
           public:
                GradeTooHighException();
                virtual const char *what() const throw();
                virtual ~GradeTooHighException() throw() ;
        };
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                virtual const char *what() const throw();
                virtual ~GradeTooLowException() throw();
        };
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);
float OverGrade(float grade);
float DownGrade(float grade);



