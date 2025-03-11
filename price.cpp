#include "price.hpp"

#include <iostream>
#include <fstream>
using namespace std;

price add(price a, price b){
    a.hrn += b.hrn;
    a.kop += b.kop;

    if (a.kop >= 100){
        a.hrn += 1;
        a.kop -= 100;
    }
    return a;
};

price multiply(price a, int quantity){
    price result;
    result.hrn = a.hrn * quantity;
    result.kop = a.kop * quantity;

    if(result.kop >= 100){
        result.hrn += result.kop / 100;
        result.kop %= 100;
    }
    return result;
}

price roundPrice(price n) {
    if (n.kop % 10 < 5) {
        n.kop -= n.kop % 10; 
    } else {
        n.kop += (10 - n.kop % 10);
    }
    if (n.kop == 100) {
        n.hrn += 1;
        n.kop = 0;
    }
    return n;
}

void consolePrice(price p) {
    cout << p.hrn << " Hrn " << p.kop << " Kop" << endl;
}