#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <iostream>
#include <fstream>
#include <ios>
#include <ostream>
#include <iterator>

int CheckFile(std::ifstream& gest_file, std::string nameFile);
int CheckGestfile(std::ifstream& gest_file, std::string nameFile);
//int GestImputFile(std::ofstream& imput_file);
std::string Replace(std::string s1, std::string s2, std::string file_cont);
void GestGestFile(std::string s1, std::string s2, std::ifstream& gest_file, std::string namefile, std::string file_cont);
int Check_Argv(char *s);
#endif