#pragma once
#include <iostream>
#include <string>
#include "cDragon.h"

using namespace std;

class cJinete
{
private:
	string Nombre;
	string Apellido;
	string Apodo;
	string FecNac;
	string Caracteristicas;
	cDragon* miDragon;

	enum eResultadoEntrenamiento {
		NoAsistio,
		Aprobado,
		Desaprobado,
		Primero,
		Ultimo,
	};
	eResultadoEntrenamiento ResultadoEntrenamiento;

public:
	cJinete(string Nombre, string Apellido, string Apodo, string FecNac, string Caracteristicas, cDragon* miDragon);
	void IncorporarDragon();
};

