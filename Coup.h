/* 
 * File:   Coup.h
 * Author: antoine
 *
 * Created on 26 octobre 2012, 14:49
 */

#ifndef COUP_H
#define	COUP_H
#include <string>

class Coup {
public:
    Coup();
    virtual std::string type()=0;
private:

};

#endif	/* COUP_H */

