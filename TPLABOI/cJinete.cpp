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

cJinete::~cJinete()
{
}

string cJinete::getNombre()
{
	return this->Nombre;
}

string cJinete::getApellido()
{
	return this->Apellido;
}

string cJinete::getApodo()
{
	return this->Apodo;
}
/*
string cJinete::getFecNac()
{
	return this->getFecNac;
}*/

string cJinete::getCaracteristicas()
{
	return this->Caracteristicas;
}

void cJinete::IncorporarDragon()
{
}
