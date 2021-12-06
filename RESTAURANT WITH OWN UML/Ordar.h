/*
 * Ordar.h
 *
 *  Created on: Dec 5, 2021
 *      Author: asharbinkhalil
 */

#ifndef ORDAR_H_
#define ORDAR_H_
#include <iostream>
#include "customerInfo.h"
#include "pizza.h"
#include "delivered.h"
#include "Ordar.h"
#include "basee.h"
#include "toping.h"
#include "pickup.h"
using namespace std;
class Ordar : public customerInfo
{
protected:
	string items;
	int OrdarId;
	int CunstomerId;
	bool delivery;
	pickup po;
	delivered done;
	public:
	Ordar()
		{}
		Ordar(customerInfo  e): customerInfo(e)
		{}
		void displaybnda()
		{
			cout<<name;
			cout<<phNo;
			cout<<items;
			cout<<OrdarId;
		}
		int bill()
		{
			int bil;
			bil=1000+110+50;
			return bil;
		}
	int getCunstomerId() const {
		return CunstomerId;
	}
	void setCunstomerId(int cunstomerId) {
		CunstomerId = cunstomerId;
	}
	bool isDelivery() const {
		return delivery;
	}
	void setDelivery(bool delivery) {
		this->delivery = delivery;
	}
	const string& getItems() const {
		return items;
	}
	void setItems(const string &items) {
		this->items = items;
	}
	int getOrdarId() const {
		return OrdarId;
	}

	void setOrdarId(int OrdarId) {
		this->OrdarId = OrdarId;
	}

	const delivered& getDone() const {
		return done;
	}

	void setDone(const delivered &done) {
		this->done = done;
	}

	const pickup& getPo() const {
		return po;
	}

	void setPo(const pickup &po) {
		this->po = po;
	}
};


#endif /* ORDAR_H_ */
