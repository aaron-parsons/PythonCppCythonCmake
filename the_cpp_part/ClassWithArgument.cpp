/*
 * myclass.cpp
 * Playing around with an example class to wrap with cython
 *  Created on: 14 Nov 2018
 *      Author: clb02321
 */

#include "ClassWithArgument.h"

using namespace std;


ClassWithArgument::ClassWithArgument(int n): num(n) {};

void ClassWithArgument::do_something() {
	cout << "hello world\n";
}


void ClassWithArgument::do_something_else() {
	cout << "good bye world \n";
}