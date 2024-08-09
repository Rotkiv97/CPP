#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const BitcoinExchange& B){
    *this =  B;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange & B){
    if(this != &B){
        this->_f2 = B._f2;
    }
    return(*this);
}

int BitcoinExchange::MakeData(std::string string, int data){
    std::string data1;
    std::string data2;     
    data1.clear();
    data2.clear();
    for(size_t i = 0; i < string.length(); i++){
            if(string[i] == 44)
                break;
            data1.push_back(string[i]);
        }
        for(size_t i = 0; i < data1.length(); i++){
            if(data1[i] == '-')
                i++;
            data2.push_back(data1[i]);
        }
        data = std::atoi(data2.c_str());
        return(data);
}

double BitcoinExchange::MakeValue(std::string string, double value_bitcoin){
    std::string value1;
    value1.clear();
    for(size_t i = 0; i < string.length(); i++){
        if(string[i] == 44){
            i += 1;
            for(; i < string.length(); i++){
                value1.push_back(string[i]);
            }
        }
    }
    value_bitcoin = std::atof(value1.c_str());
    return(value_bitcoin);
}

std::map<int, double> BitcoinExchange::Map2(std::ifstream& f1){
    double value_bitcoin =0.0;
    int data = 0;
    int count =0;
    std::map<int, double> map;
    std::string string;
    while(std::getline(f1, string)){
        data = MakeData(string, data);
        value_bitcoin = MakeValue(string, value_bitcoin);
        map[data] = value_bitcoin;
        count++;
    }
    return(map);
}

bool BitcoinExchange::checkFile(char *av){
    std::string av1 = av;
    std::ifstream file("data.csv");
    if(!file.is_open()){
        std::cout << "\033[31mFile non trovato .csv\033[37m" << std::endl;
        return(false);
    }
    std::string l = av;
    std::ifstream file1(l.c_str());
    if(!file1.is_open())
    {
        std::cout << "\033[31mFile non trovato .csv\033[37m" << std::endl;
        return(false);
    }
    _f2 = Map2(file);
    return(true);
}

void BitcoinExchange::MakedataInput(char *av){
    std::string string;
    std::string string1;
    std::string string2;
    double value;
    double value_end;
    int error_value = 0;
    int error_date = 0;
    int count = 1;
    int checkdate = 0;
    std::string file = av;//av[1] imput.txt.csv
    std::ifstream x(file.c_str());
    std::getline(x, string);
    while(std::getline(x, string)){
        error_date = 0;
        error_value = 0;
        checkdate = 0;
        string1.clear();
        string2.clear();
        std::stringstream m(string);
        std::getline(m, string1, '|');
        m >> value;
        for(size_t i = 0; i < string1.length(); i++){
            if(string1[i] == '-')
                i++;
            string2.push_back(string1[i]);
        }
        count++;
        int data1 = std::atoi(string2.c_str());
        if(m.fail()){
            error_value = 1;
        }
        value_end = value;
        /* fino a qui estraggo i valori dell'imputfile(int, double)*/
        /* ora devo confrontare i le date e i valori e moltiplicarli */
        std::map<int, double>::reverse_iterator k = _f2.rbegin();
        std::map<int, double>::reverse_iterator l = _f2.rend();
        //reverse_iterator mi serve per iterare al contrario la map e incremetarla normalmente
        int data_csv = 0;
        double value_csv = 0;
        size_t s  = 1;// la fo partire da uno perche' la size del contine map parte da uno
        for(; k != l; ++k){//for per trovare le date
            if(data1 == k->first){
                data_csv = k->first;
                value_csv = k->second;
                value *= k->second;
                break;
            }
            else if(data1 > k->first){
                data_csv = k->first;
                value_csv = k->second;
                value *= k->second;
                break;
            }
            ++s;
        }
        /* stampa utile per trovare la riga che sto cercanto e dove si ferma la ricerca */
        //std::cout << s << std::endl;
        //std::cout << _f2.size() << std::endl;
        if(s >= _f2.size()){
            checkdate = value_end;
            error_date = 1;
        }
        
        if((error_date == 0 && error_value == 0) && (value_end <= 1000 && value_end >= 0))
            std::cout << string1 << "(" << data_csv << ")" << " => " << value_end << " (" << value_csv << ")" << " = " << value << std::endl;
        else{
            if(error_date == 1){
                std::cout << "\033[31m" << "Error : date not found\033[37m" << std::endl;
            }
            else if(error_value){
                std::cout << "\033[31m" << "Error : bad extraction elemet value "<< "\033[37m" << std::endl;
            }
            else if(value < 0 || value_end < 0){
                std::cout << "\033[31m" << "Error: not positive number" << "\033[37m" << std::endl;
            }
            else if(value > 1000 || value_end > 1000){
                std::cout << "\033[31m" << "Error : too large a number " << "\033[37m" << std::endl;
            }
        }
    }

}
