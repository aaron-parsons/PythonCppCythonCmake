/*
 * main.cpp
 *
 *  Created on: 14 Nov 2018
 *      Author: clb02321
 */

#include <stdio.h>
#include <stdlib.h>
#include "ClassWithArgument.h"
#include "ClassWithZeroArgument.h"

int main() {
	ClassWithArgument_c foo2(1);
	ClassWithZeroArgument_c foo;
	foo2.do_something();
	foo.do_something();
	return 0;
}
