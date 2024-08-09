#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name_form) : AForm(name_form, 145 ,137, false)
{
    std::cout << "\033[32mCostructor ShrubberyCreationForm\033[37m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & ShrubberyCreationForm) : AForm(ShrubberyCreationForm._modulo, 145, 137, false)
{
    *this = ShrubberyCreationForm;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ShrubberyCreationForm){
    if(this != &ShrubberyCreationForm){
        this->_modulo = ShrubberyCreationForm._modulo;
    }
    return(*this);
}

AForm *ShrubberyCreationForm::clone(AForm *AForm){
    AForm = new ShrubberyCreationForm(getModulo());
    return(AForm);
}

void ShrubberyCreationForm::constexecute(Bureaucrat const &executor) const{

    if(executor.getGrade() <=  getVotoEsecutive())
    {
        std::cout << "\033[35mIl burocrate " << executor.getName() << " ha potuto eseguire il "\
        << getModulo() << "\033[37m" << std::endl;
        std::ofstream file;
        file.open((getModulo() + "_shrubbery").c_str());
        if(file.is_open()){
        file << "                               _{\\ _{\\{\\/}/�/}__\n\
                                               {/�/\\}{/{/\\}(\\}{/\\} _\n\
                                             {/{/\\}{/{/\\�(_)\\}{/{/\\} _\n\
                                          {\\{/�\\}\\}{/{/\\}\\}{/){/\\�\\} /\\}\n\
                                            {/{/(_)/}{\\{/�\\}{\\(_){/}/}/}/}\n\
                                        _{\\{/{/�\\{/{/(_)/}/}/}{\\(/}/}/}\n\
                                        {/{/{\\{\\{\\(/}{\\{\\/}/}{\\�(_){\\/}\\}\n\
                                        _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n\
                                        {/{/{\\{\\(/}{/{\\{\\�\\/})/}{\\(_)/}/}\\}\n\
                                        {\\�\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/�)/}\n\
                                        {/{\\{\\/}{/�\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n\
                                        {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n\
                                        {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n\
                                          {/({/{\\{/�\\{\\/}(_)�\\/}/}\\}/}(\\},,,,\n\
                                             (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)  /////\\\n\
                                                 {/{/{\\{\\/}{/{\\{\\{\\(_)/}   | 0 0 ||\n\
                                                   /�\\{\\{\\/}/}{\\{\\}/}      |/    @|\n\
                                                 {){/ {\\/}{\\/} \\�\\}         \\- _//\n\
                                                 (_)  \\.-'.-/                  __| |__\n\
                                              __...--- |'-.-'| --...__        .'        '.\n\
                                      _...--"    "-' � |'- -'| �' -.  "  "-   |           | \n\
                                      -"      ".  "  " | ""-_| '  . .  '      | |       | |\n\
                                      .  '-  �    .--' | '-.'|    .  '� . '   | |       | |\n\
                                              ' ..     |'-_.-|                | |       | |\n\
                                      .  '  .  �    _.-|-._ -|-._  .  '  .    |_|       |_|\n\
                                                .'   |'- .-|   '.           \\/|_______|\\/\n\
                                    ..-'  �' .  '.   `-._.-�   .'  '  - .     |   |   |\n\
                                    .-' '        '-._______.-'     '  .       |   |   |\n\
                                            .      ~,        �                |   |   |\n\
                                        .       .   |\\   .    ' '-.           |   |   |\n\
                                                                             _|___|___|\n\
                                                                            (___(_____]\n";
    
        
            std::string string;
            std::cout << "Vuoi chiude il File -> " << std::flush;
            std::cin >> string;
            if(!string.compare("yes"))
                file.close();
        }
        else if (executor.getGrade() > getVotoEsecutive()){
            std::cout << "\033[31mIl Documento non e' eseguibile\033[37m" << std::endl;
            throw ShrubberyCreationForm::GradeTooHighException();
        }
    }
}

bool ShrubberyCreationForm::beSigned(Bureaucrat &burocrate){
    if(burocrate.getGrade() <= getVotoForm()){
        if(getFirma() == false)
            setFirma(true);
        else
            return(getFirma());
    }
    else{
        if (getFirma() == true)
            setFirma(false);
        else
            return(getFirma());
    }
    return(getFirma());
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "\033[31mDestructor ShrubberyCreationForm\033[37m" << std::endl;
}