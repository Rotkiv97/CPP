#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
#include <ctime>


    /* std::merge(1, 2 , 3, 4, 5); 
    // 1) iteratore start-sinistra 
    //2) iteratore start - destra //
    //3) ieratore end-sinistra
    //4) ierator end-destra
    //5) container in cui vuole salvare i valori  */

class PmergeMe
{
    private:
        std::vector<int> _v;
        std::deque<int> _d;
        double _timeV;
        double _timeD;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &PmergeMe);
        PmergeMe &operator=(const PmergeMe &PmergeMe);
        ~PmergeMe();

        void printBeforeV(std::vector<int>& tmpV);
        void printBeforeD(std::deque<int>& tempD);
        bool checkstack(char **av);
        void printTime(size_t v, size_t d);
        
        void sortContainerV(std::vector<int>& v, int N);
        /*Nell Sort_Ford_jonson_V e _D utillizzo la ricorsione, cio' definizione generica(significa suffivido un problema piu' grande in piu' problemi)*/
        std::vector<int> Sort_Ford_Johnson_V(std::vector<int>& v, std::vector<int>::iterator a, std::vector<int>::iterator b, int N);
        /* Insertion_Sort mi arriva un parte dello stack che riordino0 */
        void Insertion_Sort_V(std::vector<int>::iterator a, std::vector<int>::iterator b);
        void PrintVector(std::vector<int> v3);
        
        void sortContainerD(std::deque<int>& d, int N);
        std::deque<int> Sort_Ford_Johnson_D(std::deque<int>& d, std::deque<int>::iterator a, std::deque<int>::iterator b, int N);
        void Insertion_Sort_D(std::deque<int>::iterator a, std::deque<int>::iterator b);
        void PrintDeque(std::deque<int> d3);

        
        void PrintSort();
};
        
