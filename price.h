#ifndef PRICE_H
#define PRICE_H

struct price{
    int hrn; // змінна, яка зберігає гривні
    short int kop; // змінна, яка зберігає копійки
};

//оголошення функцій
price add(price a, price b);
price multiply(price a, int quantity); //ціле число, яке представляє кількість.
price roundPrice(price n);
void consolePrice(price n);

#endif