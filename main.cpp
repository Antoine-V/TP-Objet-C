/* 
 * File:   main.cpp
 * Author: Antoine_V
 *
 * Created on 26 octobre 2012, 14:31
 */

#include <cstdlib>
#include <iostream>
#include "Ciseaux.h"
#include "Pierre.h"
#include "Feuille.h"
#include "Coup.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout<<"Bonjour!\n";
    Ciseaux A;
    Pierre B;
    Feuille C;
    std::cout<<A.type();
    std::cout<<"\n";
    std::cout<<B.type();
    std::cout<<"\n";
    std::cout<<C.type();
    std::cout<<"\n";
    if(A==B){
       std::cout<<"Vrai!"; 
    };
    
    return 0;
}

