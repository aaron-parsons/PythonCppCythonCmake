/*
 * myclass.cpp
 * Playing around with an example class to wrap with cython
 *  Created on: 14 Nov 2018
 *      Author: clb02321
 */

#include "Foo.h"

using namespace std;


Foo::Foo(int n): num(n) {}

void Foo::do_something() {
	cout << "hello world\n";
}


void Foo::do_something_else() {
	cout << "good bye world \n";
}
