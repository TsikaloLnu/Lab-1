#ifndef PRICE_H
#define PRICE_H

struct price{
    int hrn; // змінна, яка зберігає гривні
    short int kop; // змінна, яка зберігає копійки
};

//оголошення функцій
void add(price &a, price &b);
void multiply(price &a, int quantity); //ціле число, яке представляє кількість.
void roundPrice(price &n);
void consolePrice(price &n);

#endif