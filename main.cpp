#include <iostream>
#include <vector>
#include "Monster.h"

using namespace std;




int main()
{
	vector<AMonster*> Monsters;

	Monsters.push_back(new AMonster());
	Monsters.push_back(new AMonster());
	Monsters.push_back(new AMonster());

	vector<AMonster*>::iterator iter = Monsters.begin();
	iter++;
	delete (*iter);
	Monsters.erase(iter);

	for (auto Monster : Monsters)
	{
		delete Monster;
	}

	Monsters.clear();

	return 0;
}