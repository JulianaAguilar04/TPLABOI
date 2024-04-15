#pragma once
#include <iostream>
#include <string>

using namespace std;

class cVikingo
{
private:
	string Nombre;
	string Apellido;
	string Posicion;

public:
	cVikingo(string Nombre, string Apellido, string Posicion);
	void Trabajar();
	bool DragonesTerminados();
	void AtacarDragones();
};

