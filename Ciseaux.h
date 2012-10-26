/* 
 * File:   Ciseaux.h
 * Author: antoine
 *
 * Created on 26 octobre 2012, 14:51
 */

#ifndef CISEAUX_H
#define	CISEAUX_H
#include "Coup.h"
#include <string>

class Ciseaux :public Coup{
public:
    Ciseaux();
    std::string type();
private:

};

#endif	/* CISEAUX_H */

