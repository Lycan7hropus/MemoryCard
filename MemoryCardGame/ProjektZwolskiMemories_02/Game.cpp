#include "StdAfx.h"
//#include "Game.h"


Game::Game()
{
	this->gracz = new Osoba();
	this->motyw = 1;
	
	this->fileLoad();
	this->losuj();

	this->wyczysc();

} 

int Game::get(int i, int j)
{

	return niewiadome[i][j];

}



bool Game::setX(int a1, int znakA) //tu podac mam wartosci z maina
{
	int i = 0;
	int j = 0; 

			if( a1 == 1 || a1 == 2 || a1 == 3 || a1 == 4)
			{
				i=1;
			}
			
			if( znakA == 1 || znakA == 2 || znakA == 3 || znakA == 4 ) 
			{
				j=1;
			}

			if ( i + j == 2)
			{
				x1 = a1;
				x2 = znakA;

	
						
				
				return true;
			}

			return false;
	
}


bool Game::setY(int b1, int znakB) //tu podac mam wartosci z maina
{
	int i = 0;
	int j = 0; 

			if( b1 == 1 || b1 == 2 || b1 == 3 || b1 == 4)
			{
				i=1;
			}
			
			if( znakB == 1 || znakB == 2 || znakB == 3 || znakB == 4 ) 
			{
				j=1;
			}

			if ( i + j == 2)
			{
				y1 = b1;
				y2 = znakB;

						
				
				return true;
			}

			return false;
	
}


void Game::podmienX()
{
	for(int i=0;i<4;i++)
		{
			
			for(int j=0;j<4;j++)
			{
				niewiadome[x1-1][x2-1] = pary[x1-1][x2-1];
	
			}
			cout << endl;
		
		}
}

void Game::podmienY()
{
	for(int i=0;i<4;i++)
		{
			
			for(int j=0;j<4;j++)
			{
				niewiadome[y1-1][y2-1] = pary[y1-1][y2-1];
				
			}
			cout << endl;
		
		}
}


void Game::cofnij()
{
	for(int i=0;i<4;i++)
		{
			
			for(int j=0;j<4;j++)
			{
				niewiadome[x1-1][x2-1] = 0;
				niewiadome[y1-1][y2-1] = 0;
	
			}
			cout << endl;
		
		}
}

bool Game::check()
{

	bool checkBool;
	//cout << "dzialanie funkcji CHECK!" << endl;
	
	if ( pary[x1-1][x2-1] == pary[y1-1][y2-1])
	{
		checkBool = true;
	

		
	}
	else 
	{
		checkBool = false;
		cofnij();
		

	}

	return checkBool;
}



bool Game::wygrana()
{
	bool stanGry;
	int x = 0;

	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
		
			if(niewiadome[i][j] == 0)
			{
				stanGry = true;

			}

			else
			{
			x++;
			}

		
		}

	if(x == 16)
	{
		stanGry = false;
	}
		
	}

return stanGry;
}

void Game::setNrKlikniecia(int i)
{
	if( i == 999)
	{
		nrKlikniecia++;
	}

	else
	{
		nrKlikniecia = i;
	}
}

int Game::getNrKlikniecia()
{

	return nrKlikniecia;

}

void Game::setKartaPierwszaId(int i)
{
	if( i == 999)
	{
		kartaPierwszaId++;
	}

	else
	{
		kartaPierwszaId = i;
	}
}

int Game::getKartaPierwszaId()
{

	return kartaPierwszaId;

}


void Game::setKartaDrugaId(int i)
{
	if( i == 999)
	{
		kartaDrugaId++;
	}

	else
	{
		kartaDrugaId = i;
	}
}

int Game::getKartaDrugaId()
{

	return kartaDrugaId;

}


void Game::setBloczekId(int i)
{
	if( i == 999)
	{
		BloczekId++;
	}

	else
	{
		BloczekId = i;
	}
}

int Game::getBloczekId()
{

	return BloczekId;
}


//void Game::setLiczbaRuchów(int i)
//{
//	if( i == 999)
//	{
//		liczbaRuchow++;
//	}
//
//	else
//	{
//		liczbaRuchow = i;
//	}
//}

//int Game::getLiczbaRuchów()
//{
//
//	return liczbaRuchow;
//}

void Game::wyczysc()
{
	for(int i=0;i<4;i++)
		{
			
			for(int j=0;j<4;j++)
			{
				niewiadome[i][j] = 0;
	
			}
		}


}

void Game::setFirstBlockId(int i)
{
	firstBlockId = i;

}

int Game::getFirstBlockId()
{

	return firstBlockId;
}
void Game::setSecondBlockId(int i)
{
	secondBlockId = i;

}

int Game::getSecondBlockId()
{

	return secondBlockId;
}

void Game::setGracz(){}

Osoba* Game::getGracz()
{
	return gracz;
}



void Game::losuj()
{
	int zmienna,i,j;
	int swX[8] = {0,0,0,0,0,0,0,0}; 

	for( i=0;i<4;i++)
		{ //for i 
			
			
			
			for( j=0;j<4;j++)
			{ //for j

				zmienna  =( rand() % 8 ) + 1;
				
				switch(zmienna)
				{ //for switch
				case 1:
					
					pary[i][j] = 1;
					swX[0]++;
					if ( swX[0]>2)
					{
						j--;
					}
					
					break;

				case 2:
					
					pary[i][j] = 2;
					swX[1]++;
					if ( swX[1]>2)
					{
						j--;
					}
					break;

				case 3:
					
					pary[i][j] = 3;
					swX[2]++;
					if ( swX[2]>2)
					{
						j--;
					}
					break;

				case 4:
					pary[i][j] = 4;
					swX[3]++;
					if ( swX[3]>2)
					{
						j--;
					}
					break;

				case 5:
					pary[i][j] = 5;
					swX[4]++;
					if ( swX[4]>2)
					{
						j--;
					}
					break;

				case 6:
					pary[i][j] = 6;
					swX[5]++;
					if ( swX[5]>2)
					{
						j--;
					}
					break;
				

				case 7:
					pary[i][j] = 7;
					swX[6]++;
					if ( swX[6]>2)
					{
						j--;
					}

					break;

				case 8:
					pary[i][j] = 8;
					swX[7]++;
					if ( swX[7]>2)
					{
						j--;
					}
					break;
				} // end switch

			} //end for j
			
		} // end for i


}

void Game::setMotyw(int i)
{
	motyw = i;
	//  1 = minecraft
	//  2 = starwars
	

}

int Game::getMotyw()
{
	return motyw;
	
}

//bool Game::mniejsze( Osoba a, Osoba b )
//{
//	return a.getLiczbaRuchowOsoba() < b.getLiczbaRuchowOsoba();
// 
//}

void Game::saveTopList(string nameArg, int movementsArg)
{
	fstream plik;
	this->listOfTopPlayers[5].setImie(nameArg);
	this->listOfTopPlayers[5].setLiczbaRuchowOsoba(movementsArg);

	sort(listOfTopPlayers,listOfTopPlayers+6);
	
	plik.open("listaPlik.txt", ios::out );

	for(int i = 0 ; i<5; i++)
	{
		plik << listOfTopPlayers[i].getImie() <<" 	 " << listOfTopPlayers[i].getLiczbaRuchowOsoba() << endl;
	}
	plik.close();
	

}

void Game::fileLoad()
{
	fstream plik;

	plik.open("listaPlik.txt", ios::in );

		if(plik.good()== false)
		{
			exit(0);
		}

	for (int i = 0; i<5; i++)
	{
		string name;
		int movements;

		plik >> name;
		listOfTopPlayers[i].setImie(name); 

		plik >> movements;
		listOfTopPlayers[i].setLiczbaRuchowOsoba(movements);

	}

	plik.close();	


}


Osoba Game::getListOfTopPlayers(int indeks)
{

	return listOfTopPlayers[indeks];

}