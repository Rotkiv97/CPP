#include "MutantStack.hpp"


int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "\033[32m" << mstack.top() << "\033[37m" << std::endl;
    mstack.pop();
    std::cout << "\033[33m" << mstack.size() << "\033[37m" << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(100);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << "\033[36m" << *it << "\033[37m" << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "\033[33m" << s.size() << "\033[37m" << std::endl;
    std::cout << "\033[32mAggiungo un valore a s che a copiato i valori di mstack\033[37m" << std::endl;
    s.push(124);
    std::cout << "\033[33m" << s.size() << "\033[37m" << std::endl;    
    
    /*std::cout << std::endl;
    std::cout << "\033[32m-----Confronto con una lista di interi-----\033[37m" << std::endl;
    std::cout << std::endl;
    std::list<int> a; 
    a.push_back(5);
    a.push_back(17);
    std::cout << "\033[32m" << a.back() << "\033[37m" << std::endl;
    a.pop_back();
    std::cout << "\033[33m" << a.size() << "\033[37m" << std::endl;
    a.push_back(3);
    a.push_back(5);
    a.push_back(737);
    //[...]
    a.push_back(100);
    std::list<int>::iterator st = a.begin();
    std::list<int>::iterator en = a.end();
    ++st;
    --st;
    while (st != en)
    {
        std::cout << "\033[36m" << *st << "\033[37m" << std::endl;
        ++st;
    }
    std::cout << "\033[33m" << a.size() << "\033[37m" << std::endl;
    std::list<int> l(a);
    l.push_back(13);
    std::cout << "\033[33m" << l.size() << "\033[37m" << std::endl;*/
    return 0;


}
    
