#include "StdAfx.h"
#include "TopList.h"

using namespace ProjektZwolskiMemories_02;

void TopList::setLabel1(String^ argName, String^ argPoints, int indeks)
{
	
	//this->labelName1->Text = argName;
	this->tablicaNames[indeks]->Text= argName;

	//this->labelPoints1->Text = argPoints;
	this->tablicaPoints[indeks]->Text = argPoints;
	
}
