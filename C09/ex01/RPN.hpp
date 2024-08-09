#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>

class RPN
{
    private:
        std::string _string;
        std::stack<int> _stack;

    public:
        RPN();
        RPN(const RPN &RPN);
        RPN &operator=(const RPN &RPN);
        ~RPN();

        bool checkStack(char *av);
        void ReversePolishNotation();
};
