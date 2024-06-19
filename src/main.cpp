#include <iostream>
#include "sum.h"
#include "B.h"

int main()
{
	int num2 = 10;
	int num1 = 12;
	B b;
	std::cout<< b.call_sum(num1, num2) << std::endl;
	return  0;
}
