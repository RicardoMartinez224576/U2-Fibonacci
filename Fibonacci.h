#include <cstdlib>
#include <iostream>

using namespace std;

class Fibonacci
{
	private:
		int n1,n,fib,a;
	
	public:	
		Serie(){n1=0;n=0;fib=0; a=0;};
		void setn(int n);
		int fibonacciIterativa(int n1);
		int fibonacciRecursiva(int n);	
};

int Fibonacci::fibonacciIterativa(int n1)
{
	int x2=0,y2=1,z1=1;	
	for (int i=0;i<=x2;i++)
	{
		do
		{
			cout<<i<<"\t";
			z1=x2+y2;
			x2=y2;
			y2=z1;
			i=x2;
		}while (x2<=n1);
	}
	cout<<endl;
	return z1;
}

int Fibonacci::fibonacciRecursiva(int n)
{
    if(n < 2)
    return n;

    return fibonacciRecursiva(n-1) + fibonacciRecursiva(n-2);
}
