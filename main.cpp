#include <iostream>
#include <vector>
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"

using namespace std;

class A
{
public:
	virtual void Do()
	{

	}
};

class B : public A
{
public:
	//가상함수 테이블 __vfptr [][][][][][][]
	virtual void Do() override
	{

	}
};

int main()
{
	vector<AActor*> Actors;

	Actors.push_back(new ASlime());
	Actors.push_back(new AGoblin());

	////모든 몬스터가 이동한다.
	for (auto Actor : Actors)
	{
		//다형성
		Actor->Tick();
	}

	//ASlime* Slime = new ASlime();
	//Slime->Move();

	//AGoblin* Goblin = new AGoblin();
	//Goblin->Move();


 	return 0;
}