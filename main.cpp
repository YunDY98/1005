#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;


int main()
{
	FPlayer* MyPlayer = new FPlayer();

	MyPlayer->Move();

	FGoblin* Goblin = new FGoblin();
	Goblin->Move();


	FSlime* Slime = new FSlime();
	Slime->Move();

	cout << Slime->Attack(" GoblinÀ» ") ;
	//bool IsRunning = true;

	//while (IsRunning)
	//{
	//	MyPlayer->Move();
	//	Goblin->Move();
	//}

	delete MyPlayer;
	MyPlayer = nullptr;

	delete Goblin;
	Goblin = nullptr;

	delete Slime;
	Slime = nullptr;

	return 0;
}