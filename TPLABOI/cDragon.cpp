#include "cDragon.h"

cDragon::cDragon(string Nombre, string Caracteristica, string Tama�o, string Color, bool Estado)
{
    this->Nombre = Nombre;
    this->Caracteristica = Caracteristica;
    this->Tama�o = Tama�o;
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
