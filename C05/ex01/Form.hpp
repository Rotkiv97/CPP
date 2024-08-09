#pragma once

#include <cmath>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;


class Form
{
    private:
        std::string const   _modulo;
        bool                _firma;
        int const           _voto_form;
        int const           _voto_esecutive; 
    public:
        Form(std::string Modulo , bool firma, int const voto_form,\
        int voto_esecutive);
        Form(const Form &Form);
        std::string  getModulo() const;
        int getVotoForm() const;
        int getVotoEsecutive() const;
        bool getFirma() const;
        Form &operator=(const Form &Form);
        bool beSigned(Bureaucrat &burocrate);//cambia lo stato del documento se deve essere firmato
        ~Form();
    class  GradeTooHighException : public std::exception
    {
        public:
            GradeTooHighException();
            virtual const char *what() const throw();
            virtual ~GradeTooHighException() throw();
    };

    class GradeTooLowException : public std::exception {
        public:
            GradeTooLowException();
            virtual const char *what() const throw();
            virtual ~GradeTooLowException() throw(); 
    };
};

std::ostream &operator<<(std::ostream &out, const Form &Form);
