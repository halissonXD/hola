#include<iostream>
using namespace std;

main()
{
	int opcion,n1,n2,resultado;
	cout<<"ingrese dos numeros para poder hacer la operacion que quiere hacer\n";
	cin>>n1;
	cin>>n2;
	cout<<"ingrese uan opcion para hacer la operacion\n";
	cout<<"1 para suma\n";
	cout<<"2 para resta\n";
	cout<<"3 para multiplicar\n";
	cout<<"4 para dividir\n";
	cin>>opcion;
	switch(opcion)
	{
		case 1:resultado=n1+n2;
		  cout<<"el resultado al sumar  es de :"<<resultado;
		break;
		 case 2:
		  if (n2>n1)
		{
			resultado=n2/n1;
		}
	      else 
		    resultado=n1-n2;
		    cout<<"el resultado al restar  es de :"<<resultado;
		 break;
		case 3:resultado=n1*n2;
		  cout<<"el resultado al multiplicar  es de :"<<resultado;
		break;
		case 4: 
		if (n2>n1)
		{
			resultado=n2/n1;
		}
	    else 
		resultado=n1/n2;
		cout<<"el resultado al dividir es de :"<<resultado;
		break;
		default: cout<<"no estas en nada";
		
	}
}
