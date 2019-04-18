#include<iostream>

using namespace std;

int fib(int n) {
	if (n >= 1)
	{
		int val;
		int *fibs = new int[n + 1];
		*fibs = 0;
		*(fibs + 1) = 1;
		for (size_t i = 2; i <= n; i++)
		{
			*(fibs + i) = *(fibs + i - 1) + *(fibs + i - 2);
		}
		
		val = *(fibs + n);
		delete fibs;
		return val;
	}
	else
	{
		return n;
	}
}

void main()
{
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << fib(i) << std::endl;
	}
	system("pause");
}