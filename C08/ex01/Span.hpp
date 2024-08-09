#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <list>

class Span
{
    private:
        int _N;
        std::vector<int> _a;
    public:
        Span(int N);
        Span(const Span &Span);
        Span &operator=(const Span &Span);
        void addNumber(int a);
        void MultypleAdd(std::vector<int> l);
        bool checkVector(void);
        int shortestSpan();
        int longestSpan();    
        ~Span();
};

std::ostream &operator<<(std::ostream &out, Span &Span);
