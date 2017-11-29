/*
 * Customer.h
 *
 *  Created on: Nov 12, 2017
 *      Author: beverlyackah
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <iostream>
#include "LinkedStack.h"
using namespace std;

class Customer {
private:
	string fName, lName;

public:
	Customer();
	Customer(string fName, string lName);
	string getName();
	~Customer();

};


#endif /* CUSTOMER_H_ */
