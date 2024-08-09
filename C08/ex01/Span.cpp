#include "Span.hpp"

Span::Span(int N) : _N(N), _a(0){
}

Span::Span(const Span &Span){
    *this = Span; 
}

Span &Span::operator=(const Span &Span){
    if(this != &Span)
        this->_N = Span._N;
    return(*this);
}

bool Span::checkVector(void){
    std::vector<int>::iterator c = _a.begin();
    int count = 0;
    for(; c != _a.end(); ++c)
        count += 1;
    if(count < _N)
        return(true);

    return(false);
}

void Span::MultypleAdd(std::vector<int> l){
    std::vector<int>::iterator x = l.begin();
    std::vector<int>::iterator y = l.end();
    try{
    
        if(l.size() + _a.size() < static_cast<size_t>(_N)){
            for(; x != y; ++x){
                this->addNumber(*x);
                //std::cout << *x << std::endl;
            }
        }
        else
            throw   std::runtime_error("\033[33msize non valida\033[37m");
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
}



void Span::addNumber(int a){
    try
    {
        if(checkVector())
            _a.push_back(a);
        else    
            throw std::runtime_error("\033[31mSize troppo grande\033[37m");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int Span::shortestSpan(){

    std::vector<int>::iterator x = _a.begin();
    std::vector<int>::iterator l = _a.end();
    int c = 0;
    int f = _a.size();
    try{
        if(f > 1){
            std::sort(x, l);
            c =_a.back();
            for(;x != _a.end() - 1; ++x){
                int a = *x;
                std::vector<int>::iterator m = x + 1;
                int b = *m;
                if(a == b){
                    a = 0;
                }
                if(a < b){
                    b -= a;
                }
                else if(b < a){
                    a -= b;
                }
                if(c > b)
                    c = b;
                else if(c > a)
                    c = a;
            }
        }
        else
            throw std::runtime_error("\033[31mSize non valida\033[37m");
        return(c);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    return(c);
}

int Span::longestSpan(){
    int c = 0;
    std::vector<int>::iterator x = _a.begin();
    std::vector<int>::iterator l = _a.end();
    try{
        int f = _a.size();
        if(f > 1){
            std::sort(x, l);
            std::vector<int>::iterator y = _a.begin();
            int b = _a.back();
            int t = *y;
            c = b - t;
            if(c == 0)
                return(c);
        }
        else    
            throw std::runtime_error("\033[31mSize non valida\033[37m");
        return(c);
    }
    catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    return(c);
}


Span::~Span(){};
