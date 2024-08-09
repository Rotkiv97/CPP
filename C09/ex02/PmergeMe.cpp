#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &PmergeMe){
    *this = PmergeMe;
}
PmergeMe &PmergeMe::operator=(const PmergeMe &PmergeMe){
    if(this != &PmergeMe){
        this->_v = PmergeMe._v;
        this->_d = PmergeMe._d;
    }
    return(*this);
}

PmergeMe::~PmergeMe(){}

bool PmergeMe::checkstack(char **av){
    for(int y = 1; av[y]; y++){
        int k = 0;
        for(int x = 0; av[y][x]; x++){
            if((av[y][x] >= '0' && av[y][x] <= '9' )|| (/* av[y][x] == '-' ||  */av[y][x] == '+'))// non ho capito se deve accettare anche i negativi cmq mi sono preparato a contarli
                ;
            else 
                return(false);
        }
        k = std::atoi(av[y]);
        _v.push_back(k);
        _d.push_back(k);

    }
    return(true);
}

void PmergeMe::printBeforeV(std::vector<int>& v){
    std::cout << "\033[32mBefor :  ";
    std::vector<int>::iterator v1 = v.begin();
    std::vector<int>::iterator v2 = v.end();
    for(; v1 != v2; ++v1)
        std::cout <<  *v1 << " ";
    std::cout << " \033[37m" << std::endl;
}

void PmergeMe::printBeforeD(std::deque<int>& d){
    std::cout << "\033[33mBefor :  ";
    std::deque<int>::iterator d1 = d.begin();
    std::deque<int>::iterator d2 = d.end();
    for(; d1 != d2; ++d1)
        std::cout <<  *d1 << " ";
    std::cout << " \033[37m" << std::endl;
}


//////////////start_sort_v//////////////

void PmergeMe::Insertion_Sort_V(std::vector<int>::iterator a, std::vector<int>::iterator b){
    if ( a == b )
        return ;
    for(std::vector<int>::iterator tmp = a + 1; tmp !=  b; ++tmp){
        std::vector<int>::iterator v2 = tmp - 1;
        int key = *tmp;
        while (v2 >= a && *v2 > key){
            *(v2 + 1) = *v2;
            v2--;
        }
        *(v2 + 1) = key;
    }
}

std::vector<int> PmergeMe::Sort_Ford_Johnson_V(std::vector<int>& v, std::vector<int>::iterator a, std::vector<int>::iterator b, int N){
    std::vector<int> v1;
    v1.resize(std::distance(a,b));
    if(N < std::distance(a, b)){
        std::vector<int>::iterator N_cont_element = a + std::distance(a, b) / 2;
        Sort_Ford_Johnson_V(v, a, N_cont_element, N);
        Sort_Ford_Johnson_V(v, N_cont_element, b, N);
        std::merge(a, N_cont_element , N_cont_element, b, v1.begin());
        std::copy(v1.begin(), v1.end(), a);
    }
    else
        Insertion_Sort_V(a, b);
    return(v1);
}
 

void PmergeMe::PrintVector(std::vector<int> v3){
     std::vector<int>::iterator x = v3.begin();
    std::vector<int>::iterator y = v3.end();
    std::cout << "\033[32mAfer :  ";
    for(; x != y; ++x){
       std::cout << *x << " ";
    }
    std::cout << "\033[37m" << std::endl;
}

void PmergeMe::sortContainerV(std::vector<int>& v, int N){
    if(v.size() < 2)
        return;
    clock_t start = clock();
    std::vector<int>::iterator a = v.begin();
    std::vector<int>::iterator b = v.end();
    std::vector<int> v3;
    v3.resize(v.size());
    v3 = Sort_Ford_Johnson_V(v, a, b, N);
    PrintVector(v3);  
    clock_t end = clock();
    _timeV = static_cast<double>(end - start) / static_cast<double>(CLOCKS_PER_SEC) * 10000000.0;
}
/////////////fine_sort_V//////////////////////////

////////////start_sort_D/////////////////////////
void PmergeMe::Insertion_Sort_D(std::deque<int>::iterator a, std::deque<int>::iterator b){
    if ( a == b )
        return ;
    for(std::deque<int>::iterator tmp = a + 1; tmp !=  b; ++tmp){
        std::deque<int>::iterator d2 = tmp - 1;
        int key = *tmp;
        while (d2 >= a && *d2 > key){
            *(d2 + 1) = *d2;
            d2--;
        }
        *(d2 + 1) = key;
    }
}

std::deque<int> PmergeMe::Sort_Ford_Johnson_D(std::deque<int>& d, std::deque<int>::iterator a, std::deque<int>::iterator b, int N){
    std::deque<int> d1;
    d1.resize(std::distance(a,b));
    if(N < std::distance(a, b)){
        std::deque<int>::iterator N_cont_element = a + std::distance(a, b) / 2;
        Sort_Ford_Johnson_D(d, a, N_cont_element, N);
        Sort_Ford_Johnson_D(d, N_cont_element, b, N);
        std::merge(a, N_cont_element , N_cont_element, b, d1.begin());
        std::copy(d1.begin(), d1.end(), a);
    }
    else
        Insertion_Sort_D(a, b);
    return(d1);
}
 

void PmergeMe::PrintDeque(std::deque<int> d3){
     std::deque<int>::iterator x = d3.begin();
    std::deque<int>::iterator y = d3.end();
    std::cout << "\033[33mAfer :  ";
    for(; x != y; ++x){
       std::cout << *x << " ";
    }
    std::cout << "\033[37m" << std::endl;
}

void PmergeMe::sortContainerD(std::deque<int>& d, int N){
    if(d.size() < 2)
        return;
    clock_t start = clock();
    std::deque<int>::iterator a = d.begin();
    std::deque<int>::iterator b = d.end();
    std::deque<int> d3;
    d3.resize(d.size());
    d3 = Sort_Ford_Johnson_D(d, a, b, N);
    clock_t end = clock();
    PrintDeque(d3); 
    //qui mi fo ritornare il tempo mill-sec, volendo siccome CLOCKS_PER_SEC a valore clock_t 1000000 poso levargi uno zero per farmi ritornare un valore che time puo' interpretare meglio 
    _timeD = static_cast<double>(end - start) / static_cast<double>(CLOCKS_PER_SEC) * 10000000.0; 
}


///////////fine_sort_D//////////////////////////


void PmergeMe::printTime(size_t v, size_t d){
    std::cout << "\033[32mTime to range of " << v << " with std::vector<int> : " << _timeV << " us"<<std::endl;
    std::cout << "\033[32mTime to range of " << d << " with std::deque<int>  : " << _timeD << " us"<<std::endl;   
}

void PmergeMe::PrintSort(){
    PmergeMe stack;
    //stack.printBeforeV(_v);
    stack.printBeforeD(_d);
    int N = 0;
    std::cout << "\033[36mInserire la grandeza della coppia per cui vuoi suddividere lo stack -> \033[37m";
    std::cin >> N;
    stack.sortContainerV(_v, N);
    stack.sortContainerD(_d, N);
    stack.printTime(_v.size(), _d.size());
}