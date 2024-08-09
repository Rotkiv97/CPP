#include "utils.h"
/* tre parametri 
1) nome file
2) s1
3) s2
*/

int main(int ac, char **av)
{
    if(ac != 4){
        std::cout << "\033[31mmettti degli agomenti\033[37m" << std::endl;
        return(1);
    }
    if(!Check_Argv(av[1])){
        std::string file_cont;
        std::string s2 = av[3];
        std::string s1 = av[2];
        std::string nameFile = av[1];
        std::ifstream gest_file(av[1]);
        std::getline(gest_file, file_cont, (char)EOF);//(char)EOF serve per copiare tutto il contenuto all'interno della stringa
        GestGestFile(s1, s2, gest_file, nameFile, file_cont);
        std::string output;
        while(1){
            std::cout << "\033[35mdesideri chiudere i file -> \033[37m";
            std::getline(std::cin, output);
            if(!output.compare("yes")){
                gest_file.close();
                break;
            }
            else if(output.compare("no")){
                std::cout << "\033[31mnon hai shelta metti yes\033[37m" << std::endl;
                continue;
            }
            else{
                std::cout << "\033[31mnon hai shelta metti yes\033[37m" << std::endl;
                continue;
            }
        }
    }
    return(0);
}