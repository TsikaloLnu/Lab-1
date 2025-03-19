#include "price.h"

#include <iostream>
#include <fstream>
using namespace std;

void add(price &a, price &b){
    
    a.hrn += b.hrn;
    a.kop += b.kop;

    if (a.kop >= 100){
        a.hrn += 1;
        a.kop -= 100;
    }
    
};

void multiply(price &a, int quantity){
    a.hrn = a.hrn * quantity;
    a.kop = a.kop * quantity;

    if(a.kop >= 100){
        a.hrn += a.kop / 100;
        a.kop %= 100;
    }
}

void roundPrice(price &n) {
    if (n.kop % 10 < 5) {
        n.kop -= n.kop % 10; 
    } else {
        n.kop += (10 - n.kop % 10);
    }
    if (n.kop == 100) {
        n.hrn += 1;
        n.kop = 0;
    }
}

void consolePrice(price &p) {
    cout << p.hrn << " Hrn " << p.kop << " Kop" << endl;
}