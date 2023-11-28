// TypesAndVariables.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Product.h"
#include <iostream>

int main()
{
    Product product1("pates", 2.5, 4);

    std::cout << product1 << std::endl;
    std::cout << product1.stock_value() << std::endl;

    product1.add_stock(10);

    std::cout << "Product after stock add : " << product1 << std::endl;

    std::string p2_name;
    double p2_price;
    int p2_stock;

    std::cout << "Enter product name : ";
    std::cin >> p2_name;

    std::cout << "Enter product price : ";
    std::cin >> p2_price;

    std::cout << "Enter product stock : ";
    std::cin >> p2_stock;

    Product product2(p2_name, p2_price, p2_stock);
    std::cout << product2 << std::endl;
}
