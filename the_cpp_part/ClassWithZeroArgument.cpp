/*
 * ClassWithZeroArgument_c.cpp
 * Playing around with an example class to wrap with cython
 *  Created on: 14 Nov 2018
 *      Author: clb02321
 */

#include "ClassWithZeroArgument.h"

using namespace std;


void ClassWithZeroArgument_c::do_something() {
	cout << "hello world with zero argument\n";
}

void ClassWithZeroArgument_c::do_something_else() {
	cout << "good bye world with zero argument \n";
}
