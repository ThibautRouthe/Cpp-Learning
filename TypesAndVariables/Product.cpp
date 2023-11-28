#include "Product.h"

Product::Product() : name(""), price(0), stock(0)
{

}

Product::Product(std::string n, double p, int s): name(n), price(p), stock(s)
{

}

std::ostream& operator<<(std::ostream& os, const Product& product) {
	os << "name : " << product.name << " price : " << product.price << "€ stock : " << product.stock;
	return os;
}

Product Product::operator+(const Product& productToAdd) const{
	if (name != productToAdd.name) {
		throw std::invalid_argument("Error: Product names are different.");
	}

	Product resultProductAdd;
	resultProductAdd.name = name;
	resultProductAdd.price = price + resultProductAdd.price;
	resultProductAdd.stock = stock + resultProductAdd.stock;
	return resultProductAdd;
}

Product Product::operator-(const Product& productToAdd) const {
	if (name != productToAdd.name) {
		throw std::invalid_argument("Error: Product names are different.");
	}

	Product resultProductAdd;
	resultProductAdd.name = name;
	resultProductAdd.price = price - resultProductAdd.price;
	resultProductAdd.stock = stock - resultProductAdd.stock;
	return resultProductAdd;
}

double Product::stock_value() {
	return price * stock;
}

void Product::add_stock(int quantity) {
	stock += quantity;
}

void Product::substract_stock(int quantity) {
	stock -= quantity;
}