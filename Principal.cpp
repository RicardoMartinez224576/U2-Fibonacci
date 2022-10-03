#include "Fibonacci.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
	int l,opc,s=0;
	do
	{
	system("Cls");
	Fibonacci F;
	cout<<"Programa para calcular la serie Fibonacci"<<endl;
	cout<<"Ingrese el limite"<<endl;
	cin>>l;
	cout<<"De que manera desea calcularlo?  \n1.Iterativa \n2.Recursiva"<<endl;
	cin>>opc;
	switch(opc)
	{
		case 1:
			system("Cls");
			cout<<"Solucion Iterativa= "<<endl;
			if(l==1)
			{
				cout<<"1\t"<<endl;
			}
			else if(l==2)
			{
				cout<<"1\t 1\t"<<endl;
			}
			else if(l==3)
			{
				cout<<"1\t 1\t 2\t"<<endl;
			}
			else
			{
			F.fibonacciIterativa(l);
			}
			break;
		case 2:
			system("Cls");
			cout<<"Solucion Recursiva= "<<endl;
			for(int i =1; i <= l; i++)
    		cout <<F.fibonacciRecursiva(i) <<"\t";
    		cout<<endl;
			break;
		default:cout<<"Ingrese valores correctos"<<endl;
	}
	cout<<"Desea regresar al menu?    Si=1     No=cualquier numero"<<endl;
	cin>>s;
	}while(s==1);
	getchar();
	system("pause");
	return 0;
}

