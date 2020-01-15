#pragma once
#include <string>
#include <map>

class Checkout
{
public:
	Checkout();
	virtual ~Checkout();
	void addItemPrice(std::string item, int price);
	void addItem(std::string);
	void addDiscount(std::string item, int nmbrOfItems, int discountPrice);
	int calculateTotal();

protected:
	struct Discount {
		int nbrOfItems;
		int discountPrice;
	};

	std::map<std::string, int> prices;
	std::map<std::string, Discount> discounts;
	int total;
};

