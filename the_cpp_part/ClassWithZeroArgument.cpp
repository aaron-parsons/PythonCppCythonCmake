/*
 * myclass.cpp
 * Playing around with an example class to wrap with cython
 *  Created on: 14 Nov 2018
 *      Author: clb02321
 */

#include "ClassWithZeroArgument.h"

using namespace std;

ClassWithZeroArgument::ClassWithZeroArgument(void);

void ClassWithZeroArgument::do_something() {
	cout << "hello world\n";
}


void ClassWithZeroArgument::do_something_else() {
	cout << "good bye world \n";
}
