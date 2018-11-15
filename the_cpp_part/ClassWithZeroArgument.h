/*
 * ClasswithZeroArgument_c.h
 *
 *  Created on: 14 Nov 2018
 *      Author: clb02321
 */
#include <iostream>


class ClassWithZeroArgument_c
{
private:
	int num;
public:
	ClassWithZeroArgument_c(){
		num=1; // seems like we always need a field somewhere
	}
	void do_something();
	void do_something_else();
};

