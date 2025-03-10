#include "price.hpp"

price add(price a, price b){
    price result;
    a.hrn += b.hrn;
    a.kop += b.kop;

    if (result.kop >= 100){
        result.hrn += 1;
        result.kop -= 100;
    }
    return result;
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
    if (n.kop % 10 >= 5) {
        n.kop = (n.kop / 10 + 1) * 10;
    } else {
        n.kop = (n.kop / 10) * 10;
    }
    if (n.kop == 100) {
        n.hrn += 1;
        n.kop = 0;
    }
    return n;
}

void consolePrice(price p) {
    std::cout << p.hrn << " грн " << p.kop << " коп" << std::endl;
}