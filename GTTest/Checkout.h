#pragma once
#include <string>

class Checkout
{
public:
	Checkout();
	virtual ~Checkout();
	void addItemPrice(std::string item, int price);
	void addItem(std::string);
	int calculateTotal();
};

