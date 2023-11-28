//Product.h

#include <string>
#include <iostream>

#ifndef PRODUCT_H
#define PRODUCT_H

class Product
{
public:
	std::string name;
	double price;
	int stock;

	Product();

	Product(std::string name, double price, int stock);

	// Surcharge de l'opérateur <<
	friend std::ostream& operator<<(std::ostream& os, const Product& product);

	Product operator+(const Product& productToAdd) const;

	Product operator-(const Product& productToAdd) const;

	double stock_value();

	void add_stock(int quantity);

	void substract_stock(int quantity);
};

#endif