/*
Los propietarios de la pizzería "Don Raúl" calculan el precio
de sus pizzas a partir del  diámetro de éstas y de los ingredientes 
extras que llevan. Si se sabe que por cada centímetro de diámetro la pizzería 
cobra S/. 1.5 y el precio de  cada ingrediente extra es de S/.2.5. Realice una aplicación
en C++ que permita calcular el precio de una pizza, teniendo como datos los centímetros de
diámetro y la cantidad de ingredientes extras que llevará la pizza.

*/

#include<iostream>
#include<conio.h>

using namespace std;

int costodiametro(int diametro)
{
	float costo;
	costo = diametro*1.5;
	return costo;
}

int costoingredadiciones(int diametro)
{
	float costo;
	costo = diametro*1.5;
	return costo;
}

int main()
{
	int diametro;
	int numingextra;
	float costopizza;

	cout << "ingrese diametro de la pizza";
	cin >> diametro;
	cout << "ingrese numero de ingredientes extra";
	cin >> numingextra;

	costopizza = costodiametro(diametro) + costoingredadiciones(diametro);
	cout << "el precio de la pizza es: " << costopizza;

	_getch();

}





