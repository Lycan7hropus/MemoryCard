#ifndef OSOBA_H
#define OSOBA_H
#include <string>
#include <iostream>
#include <cstdlib> //potrzebujemy do generowania licz pseudo losowych
#include <windows.h>
#include <math.h>
#include <algorithm>
#include <fstream>
#include <functional>
#include <time.h>
#include <ctime>

using namespace std;

class Osoba
{
private:
	int liczbaRuchowOsoba;
	std::string imie;
	

public:

	
	bool operator < (const Osoba &x)const
	{
		return liczbaRuchowOsoba < x.liczbaRuchowOsoba;
	}
	

	Osoba()
	{
		this->imie = "unkown";
		this->liczbaRuchowOsoba = 0;

	}

	void setImie(std::string imie)
	{
		this->imie = imie;
	}

	std::string getImie()
	{
		return this->imie;
	}


	void setLiczbaRuchowOsoba(int i)
	{
		if( i == 999)
		{
			this->liczbaRuchowOsoba++;
		}

		else
		{
			this->liczbaRuchowOsoba = i;
		}
	}

	int getLiczbaRuchowOsoba()
	{

		return this->liczbaRuchowOsoba;
	}


};
#endif