#include <iostream>
#include <vector>
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "World.h"

using namespace std;

int main()
{
    UWorld* MyWorld = new UWorld();

    MyWorld->SpawnActor(new AGoblin());
    MyWorld->SpawnActor(new ASlime());
    //Player, Boar
    //MyWorld->SpawnActor(new AGoblin());
    //MyWorld->SpawnActor(new AGoblin());

    MyWorld->Run();

    delete MyWorld;
    MyWorld = nullptr;

 	return 0;
}