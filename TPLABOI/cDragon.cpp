#include "cDragon.h"

cDragon::cDragon(string Nombre, string Caracteristica, string Tamaño, string Color, bool Estado)
{
    this->Nombre = Nombre;
    this->Caracteristica = Caracteristica;
    this->Tamaño = Tamaño;
    this->Color = Color;
    this->Estado = Estado;
}

string cDragon::AltaNombre(string Nombre)
{
    return string();
}

bool cDragon::Domado()
{
    return false;
}
