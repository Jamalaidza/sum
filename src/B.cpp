#include "B.h"
#include "sum.h"

int B::call_sum(int a, int b)
{
	Sum sum;
	return sum.calculate_sum(a, b);
}
