/*
 * BarberShop.h
 *
 *  Created on: Nov 12, 2017
 *      Author: beverlyackah
 */
#ifndef BARBERSHOP_H_
#define BARBERSHOP_H_

#include "Customer.h"
#include <iostream>
#include "LinkedStack.h"
using namespace std;

class BarberShop{
	LinkedStack<Customer> s1;
	LinkedStack<Customer> s2;
public:
	BarberShop();
	void addCustomer(Customer&);
	Customer nextCustomer();
	virtual ~BarberShop();

};

BarberShop::BarberShop(){ //initialization of stacks s1 an s2
	this->s1 = LinkedStack<Customer>();
	this->s2= LinkedStack<Customer>();
}

void BarberShop::addCustomer(Customer& customer){// add customer to the stack (first in will be top)
	s1.push(customer);
}

Customer BarberShop::nextCustomer(){ //next customer in out stack
	if(s2.isEmpty()){

		while(!s1.isEmpty()){
			Customer customer = s1.pop();
			s2.push(customer);
		}
	}
	Customer c1 = s2.pop();
	return c1;
}

#endif
