#include "cJinete.h"

cJinete::cJinete(string Nombre, string Apellido, string Apodo, string FecNac, string Caracteristicas, cDragon* miDragon)
{
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Apodo = Apodo;
	this->FecNac = FecNac;
	this->Caracteristicas = Caracteristicas;
	this->miDragon = miDragon;
}

void cJinete::IncorporarDragon()
{
}
