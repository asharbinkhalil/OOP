/*
 * pizza.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#ifndef PIZZA_H_
#define PIZZA_H_
#include <iostream>
#include "customerInfo.h"
#include "pizza.h"
#include "delivered.h"
#include "Ordar.h"
#include "basee.h"
#include "toping.h"
#include "pickup.h"
using namespace std;
class pizza
{
private:
	int price;
	string size;
	basee b;
	toping tp;
public:
	void displayPizza()
	{
		cout<<"PRICE\t BASE\t TOPPING\tTOPPING QUANITY\n--"
				"-------------------------------\n";
		cout<<price<<"\t"<<b.getBasename()<<"\t "
				<<tp.getToppingname()<<"\t"<<tp.getToppingquantity();
	}
	basee getB()
	{return b;}
	void setB( basee b)
	{this->b = b;}
	int getPrice()
	{	return price;}
	void setPrice(int price)
	{this->price = price;}
	 toping& getTp()
	{return tp;	}
	void setTp( toping &tp)
	{this->tp = tp;}

	const string& getSize() const {
		return size;
	}

	void setSize(const string &size) {
		this->size = size;
	}
};
#endif /* PIZZA_H_ */
