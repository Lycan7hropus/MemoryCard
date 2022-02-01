#include "StdAfx.h"
//#include "Game.h"
#include "Memories.h"

using namespace ProjektZwolskiMemories_02;

void Memories::setLabelImie()
{
	this->Text = gcnew String("Odczyt z setTitle2!!!");
	//this->label->Text = marshal_as<String ^>(this->gra->gracz->getImie());
	this->label->Text = marshal_as<String ^>(this->gra->getGracz()->getImie());

	//this->gra->getGracz()->
}


Osoba* Memories::getOsoba()
{
	//return this->gra->gracz;
	return this->gra->getGracz();
}
Game* Memories::getGra()
	{
		return this->gra;
	}






