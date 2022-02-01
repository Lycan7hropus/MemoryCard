#ifndef GAME_H
#define GAME_H
#include "Osoba.h"


class Game 
{
	int pary[4][4]; //losowe wartosci cltr+f
	int niewiadome[4][4];
	int x1,x2,y1,y2; // (x2 = znakA) & (y2 = znakB)
	int nrKlikniecia;
	int kartaPierwszaId;
	int kartaDrugaId;
	int BloczekId;
	//int liczbaRuchow;
	int indeks;
	int firstBlockId;
	int secondBlockId;
	int motyw;
	Osoba* gracz;
	Osoba listOfTopPlayers[6];
	
	
	
	


public:
	
	Game();

	Osoba* getGracz();

	void setGracz();
	
	int get(int i, int j);


	bool setX(int a1, int znakA);
	bool setY(int b1, int znakB);

	void setNrKlikniecia(int i);
	int getNrKlikniecia(); 

	void setKartaPierwszaId(int i);
	int getKartaPierwszaId();

	void setKartaDrugaId(int i);
	int getKartaDrugaId();
	
	void setBloczekId(int i);
	int getBloczekId();

	void setMotyw(int i);
	int getMotyw();

	//void setLiczbaRuchów(int i);
	//int getLiczbaRuchów();

	void setFirstBlockId(int i);
	int getFirstBlockId();

	void setSecondBlockId(int i);
	int getSecondBlockId();

	Osoba getListOfTopPlayers(int indeks);





	void podmienX();
	void podmienY();
	void wpisz();
	bool check();
	void cofnij();
	bool wygrana();
	void wyczysc();
	void losuj();
	void saveTopList(string nameArg, int movementsArg);
	void fileLoad();
	//bool mniejsze( Osoba a, Osoba b);


	

	

	




};
#endif