#include <iostream>
#include <fstream>
#include "price.hpp"
using namespace std;

int main(){
    ifstream file("price.txt");
    if (!file) {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    price total = {0, 0};
    int h, k, q;

    while (file >> h >> k >> q) 
    total = add(total, multiply({h, (short)k}, q));
    file.close();

    cout << "Total price:";
    consolePrice(total);

    total = roundPrice(total);
    cout << "Total rounded price: ";
    consolePrice(total);
};



// відкриття файлу, зчитування, обчслення і виведення результату