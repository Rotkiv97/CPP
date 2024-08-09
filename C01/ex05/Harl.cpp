#include "Harl.hpp"

void Harl::debug(void) const{
    std::cout << "I love having extra bacon for my "\
    <<"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void) const{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "\
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) const{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "\
    << "years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) const{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) const
{
   void (Harl::*levels[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
   int steap[4] = {level.compare("DEBUG"), level.compare("INFO"), level.compare("WARNING"), level.compare("ERROR")};

	for(size_t i = 0; i < 4; i++){
		if(!steap[i])
			(this->*levels[i])();
	}
}