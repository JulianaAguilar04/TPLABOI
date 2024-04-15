#pragma once
#include <iostream>
#include <string>
using namespace std;


class cDragon
{
private:
	string Nombre;
	string Caracteristica;
	string Tamaño;
	string Color;
	bool Estado;
	//cAtaque* FormadeAtaque;

public:
	cDragon(string Nombre, string Caracteristica, string Tamaño, string Color, bool Estado);
	string AltaNombre(string Nombre);
	bool Domado();
	//Entrenar();
	//Baja();
};

