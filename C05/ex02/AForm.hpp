#pragma once

#include <cmath>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm
{
    private:
        std::string _modulo;
        bool       _firma;
        int const    _voto_form ;
        int const   _voto_esecutive; 
    public:
        AForm(std::string modulo, int const voto_form, int const voto_esecutive, bool firma);
        AForm(const AForm &AForm);
        AForm &operator=(const AForm &AForm);
        virtual ~AForm();
        std::string const getModulo() const;
        void setModulo(std::string modulo);
        int  getVotoForm() const;
        int  getVotoEsecutive() const;
        bool getFirma() const;
        void setFirma(bool firma);
        virtual bool constexecute(Bureaucrat const &executor) const = 0;
        virtual bool beSigned(Bureaucrat &burocrate) = 0;//cambia lo stato del documento se deve essere firmato
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

std::ostream &operator<<(std::ostream &out, const AForm &AForm);
