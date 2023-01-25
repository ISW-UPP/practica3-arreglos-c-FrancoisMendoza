#include <iostream>
using namespace std;
int main()
{
	int i;
    int PrimerArray[10],SegundoArray[10],TercerArray[10],suma=0,suma2=0;
	//1.- Programa que pida 10 números y los muestre en orden inverso al que fueron agregados.
	cout << "Primer Arreglo"<<endl;
	for (i = 0; i < size(PrimerArray); i++)
	{
		cout << "Llene el espacio " << i + 1<<" del primer array: ";
		cin >> PrimerArray[i];
	}
	for ( i = size(PrimerArray)-1; i >= 0; i--)
	{
		cout << PrimerArray[i]<<" ";
	}
	//2.- Programa que pida 10 números, calcule su media y luego muestre los que están por encima de la media.
	cout << endl << "Segundo Arreglo" << endl;
	for (i = 0; i < size(SegundoArray); i++)
	{
		cout << "Llene el espacio " << i + 1 << " del segundo array: ";
		cin >> SegundoArray[i];
		suma = SegundoArray[i] + suma;
	} 
	cout << "La media es: " << suma / (size(SegundoArray))<<endl<<"Los numero arriba de la media son los siguientes:"<<endl;
	for (i = 0; i < size(SegundoArray); i++)
	{
		if (SegundoArray[i]>(suma/size(SegundoArray)))	
		{
			cout << SegundoArray[i]<<" ";
		}
	}
	//3.-Programa que pida 10 números, para que calcule cuál es el mayor de ellos.
	cout << endl << "Tercer Arreglo" << endl;
	for ( i = 0; i < size(TercerArray); i++)
	{
		cout << "Llene el espacio " << i + 1 << " del tercer Array: ";
		cin >> TercerArray[i];
		if (suma2>=TercerArray[i])
		{
			suma2 = suma2;
		}
		else 
		{
			suma2= TercerArray[i];
		}
	}
	cout << "El numero mas grande del tercer arreglo es: " << suma2;
}
