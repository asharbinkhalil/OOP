//============================================================================
// Name        : Assign4q3.cpp
// Author      : ASHAR
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "customerInfo.h"
#include "pizza.h"
#include "Ordar.h"
#include "delivered.h"
int main()
{
	label:
	customerInfo ci;
	char naam[15];
	string address,itemchoice,pizzasize,basechoice,toppingchoice;
	int toppingqnty;
	cout<<""
			"HELLO TO THE RESTURANT"
			"\nENTER  your FIRST NAME\n";
	cin>>naam;
	cout<<"ENTER PHONE NUMBER\n";
	ci.setName(naam);
	string phn;
	fflush(stdin);
	cin>>phn;
	ci.setPhNo(phn);
	Ordar o(ci);
	o.setCunstomerId(1724);
	o.setName(ci.getName());
	o.setPhNo(ci.getPhNo());
	cout<<"\nSelect ITEM PIZZA BREVERAGE OR SANDWICH\n";
	cin>>itemchoice;
	o.setItems(itemchoice);
	pizza p;
	p.setPrice(1000);
	cout<<"\nSELECT FORM THE FOLLOWING PIZZAS\n\n"
			"Restaurant offers pizza in four t sizes"
			"(small, medium, large,extra-large):\n";
	cin>>pizzasize;
	p.setSize(pizzasize);
	basee b;
	cout<<"\nSELECT BASE FROM THE FOLLOWING:"
			"(Fresh pan, Stuffed and Hand-tossed)\n";
	cin>>basechoice;
	b.setBasename(basechoice);
	p.setB(b);
	toping t;
	cout<<"\nSELECT TOPPING FROM THE FOLLOWING:"
			"(Pepperoni, Mushrooms, Onions, Extra cheese and Black olives).\n";
	cin>>toppingchoice;
	t.setToppingname(toppingchoice);
	cout<<"\nENTER TOPPING QUANTITY\n 5 to 10 over five will cause charges \n";
	cin>>toppingqnty;
	t.setToppingquantity(toppingqnty);
	p.setTp(t);
	delivered d;
	d.setCustName(ci.getName());
	cout<<"\nENTER ADRRESS\n";
	cin>>address;
	d.setDeliveryadress(address);
	o.setDone(d);
	p.displayPizza();

	cout<<"\nYOUR BILL IS : "<<o.bill()<<endl;
	cout<<d.getDeliveryadress();
	cout<<"do you want to place more orders if yes press 1\n";

	int n;
	cin>>n;
	if (n==1)
	{
			goto label;

	}
}
