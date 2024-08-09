#include "RPN.hpp"


RPN::RPN(){}

RPN::RPN(const RPN &RPN){
    *this = RPN; 
}

RPN &RPN::operator=(const RPN &RPN){
    if(this != &RPN){
        this->_stack = RPN._stack;
    }
    return(*this);
}

RPN::~RPN(){}

bool RPN::checkStack(char *av){
    std::string tmp = av;
    for(size_t i = 0; i < tmp.length() ; i++){
          if((tmp[i] >= 48 && tmp[i] <= 57) || \
        (tmp[i] == '+' || tmp[i] == '-' ||\
         tmp[i] == '/' || tmp[i] == '*' || tmp[i] == ' '))
            ;
        else    
            return(false);
    }
    for(size_t i = 0; i < tmp.length(); i++){
        if(tmp[i] == ' ')
            i+=1;
        _string.push_back(tmp[i]);
    }
    return(true);
}


void RPN::ReversePolishNotation()//notazione pollacca(RPN) 
{
    int n;
    int r1;
    int r2;
    int count = 0;
    std::string op;
    for(size_t i = 0; i < _string.length(); i++){
        if(_string[i] >= '0' && _string[i] <= '9'){ 
            n = _string[i] - 48;  
            _stack.push(n);
        }
        else if(_string[i] == '/' || _string[i] == '*' || _string[i] == '-' || _string[i] == '+')
        {
            if(_stack.size() >= 2){
                r1 = _stack.top();
                _stack.pop();
                r2 = _stack.top();
                _stack.pop();
                if(_string[i] == '/'){
                    if(r1 == 0){
                        std::cout << "\033[31mError : invalid number\033[37m" << std::endl;
                        break;
                    }
                    _stack.push(r2 / r1);
                }
                else if(_string[i] == '+'){
                    _stack.push(r2 + r1);
                }
                else if(_string[i] == '-'){
                    _stack.push(r2 - r1);
                }
                else if(_string[i] == '*'){
                    _stack.push(r2 * r1);
                }
            }
            else{
                count = 1;
                break;
            }
        }
    }
    if(_stack.size() == 1 && count == 0)
        std::cout << _stack.top() << std::endl;
    else
        std::cout << "\033[31mError : invalid Stack" << std::endl;
}
