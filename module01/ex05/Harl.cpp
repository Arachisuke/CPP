#include "Harl.hpp"

void Harl::_debug()
{
    std::cout << "DEBUG level: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info()
{
    std::cout << "INFO level: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning()
{
    std::cout << "WARNING level: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error()
{
    std::cout << "ERROR level : This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::complain(std::string level)
{
    void (Harl::*words[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*words[i])();
            return;
        }
    }
    std::cerr << "ERROR invalid level" << std::endl;
}

// type objet pointeur tableau arguments = INIT.
// this