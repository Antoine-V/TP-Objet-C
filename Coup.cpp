/* 
 * File:   Coup.cpp
 * Author: antoine
 * 
 * Created on 26 octobre 2012, 14:49
 */

#include "Coup.h"

Coup::Coup() {
}

bool operator==(const Coup& c1, const Coup& c2) {
return c1.type() == c2.type();
}

