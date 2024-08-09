#include "easyfind.hpp"

int main(){
    std::list<int>l1;
    for(int i = 0; i < 10; i++)
        l1.push_back(i);
    try
    {
        ::easyfind(l1, 11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        ::easyfind(l1, 5);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::vector<int> v1;
    for(int i = 0; i < 10; i++)
        v1.push_back(i);
    try
    {
        ::easyfind(v1, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}