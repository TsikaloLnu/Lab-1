#include <iostream>
#include <fstream>
#include "price.h"
using namespace std;

int main(){
    ifstream file("price.txt");
    if (!file) {
        cout << "Eror with opening file!" << endl;
        return 1;
    }

    price total = {0, 0};
    int h, q;
    short int k;

    while (file >> h >> k >> q) {
        price item = {h, k};
        multiply (item, q);
        add (total, item);
    }
    file.close();

    cout << "Total price:";
    consolePrice(total);

    roundPrice(total);
    cout << "Total rounded price: ";
    consolePrice(total);
};



// відкриття файлу, зчитування, обчслення і виведення результату