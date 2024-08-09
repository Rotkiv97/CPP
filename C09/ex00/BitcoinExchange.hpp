#pragma once 
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <time.h>
#include <fstream>
#include <map>
#include <stdio.h>

/* sintassi std::map<template T(key), template L(), less<key> > 

std::map<key(index)(data), _tp(valore data);
*/


class BitcoinExchange
{
    private: 
        std::map<int, double> _f2;// e il file che ho da confrontare
    public:
        BitcoinExchange(){}
        BitcoinExchange(const BitcoinExchange &B);
        BitcoinExchange &operator=(const BitcoinExchange &B);
        ~BitcoinExchange(){}
        std::map<int, double> Map2(std::ifstream& file);// riempio la mappa dell file principale;
        bool    checkFile(char *av);//controllare che il file che ho creato esiste
        int     MakeData(std::string string, int data);
        double  MakeValue(std::string string, double value_bitcoin);
        void    MakedataInput(char *av);
        // ottengo i confronto stra le date e motiplico il loro 
        // valore, scorrendo il file input.txt al suo 
        // interno scorro anche il container map<int, double> _f2
        // e trovo gli errrori
};
