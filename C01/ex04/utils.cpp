

#include "utils.h"

// ifstream serve per manipolare e leggere file
// ofstream serve per scrivere su un file
// find è una funzione che mi permette di trova re una parola o stringa all'interno si una stringa
// erase è una funzione che serve rimuovere elementi nelle strutture dati
// insert è una funzione che permette di aggiungere elementi nelle strutture dati


int CheckFile(std::ifstream& gest_file, std::string nameFile)
{
    
    if(gest_file.is_open()){
        std::cout << "\033[32maperto con successo <" << nameFile << ">\033[37m" << std::endl;
        return(0);
    }
    else{
        std::cout << "\033[31mfile non generato <"<< nameFile << ">\033[37m" << std::endl;
        return(1);
    }

    return(0);
}

int CheckGestfile(std::ifstream& gest_file, std::string nameFile)
{
    if(gest_file.is_open()){
        std::cout << "\033[32mfile trovato con successo <"<< nameFile << ">\033[37m" <<std::endl;
        return(0);
    }
    else{
        std::cout << "\033[31mfile non trovato <"<< nameFile << ">\033[37m" << std::endl;
        return(1);
    }
    return(0);
}

int GestImputFile(std::ofstream& imput_file,std::string s1)
{
    std::string imput;
    std::cout << "\033[33mvoi immetere il contenuto nel file generato \033[37m";
    while(1)
    {
        std::cout << "-> ";
        getline(std::cin, imput);
        if(!imput.compare("yes")){
            imput_file << s1;
            std::cout << "\033[33mStringa immessa nel file \033[37m" << std::endl;
            break;
        }
        else if(!imput.compare("no")){
            std::cout << "\033[31mnon hai scelta metti yes\033[37m" << std::endl;
            continue;
        }
        else{
            std::cout << "\033[31mnon hai scelta metti yes\033[37m" << std::endl;
            continue;
        }
    }
    return(0);
}

std::string Replace(std::string s1, std::string s2, std::string file_cont)
{
    size_t  size;
    size = file_cont.find(s1); 
    while(size != std::string::npos)
    {
        file_cont.erase(size, s1.size());
        file_cont.insert(size, s2);
        size = file_cont.find(s1);
    }
    return(file_cont);
}

void GestGestFile(std::string s1, std::string s2, std::ifstream& gest_file, std::string namefile, std::string file_cont)
{
    std::string tmp;
    std::string newName = namefile + ".replace";
    std::ofstream newFile(newName.c_str());
    CheckGestfile(gest_file, newName);
    tmp = Replace(s1 , s2, file_cont);
    GestImputFile(newFile, tmp);
    CheckFile(gest_file, newName);
    std::cout << "\033[32m[Swap riconrenze compiuto] \033[37m" << newName << std::endl;

}

int Check_Argv(char *s)
{
    std::ifstream name(s);
    if(CheckGestfile(name, s))
       return(1); 
    return(0);
}