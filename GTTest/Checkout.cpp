#include "pch.h"
#include "Checkout.h"

Checkout::Checkout():total(0) {

}

Checkout::~Checkout() {

}

void Checkout::addItemPrice(std::string item, int price) {
	prices[item] = price;
}

void Checkout::addItem(std::string item) {
	total += prices[item];
}

void Checkout::addDiscount(std::string item, int nmbrOfItems, int discountPrice) {
	Discount discount;
	discount.nbrOfItems = nmbrOfItems;
	discount.discountPrice = discountPrice;
	discount[item] = discount;
}

int Checkout::calculateTotal() {
	return total;
}