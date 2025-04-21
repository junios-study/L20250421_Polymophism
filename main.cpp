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
	//�����Լ� ���̺� __vfptr [][][][][][][]
	virtual void Do() override
	{

	}
};

int main()
{
	vector<AActor*> Actors;

	Actors.push_back(new ASlime());
	Actors.push_back(new AGoblin());

	////��� ���Ͱ� �̵��Ѵ�.
	for (auto Actor : Actors)
	{
		//������
		Actor->Tick();
	}

	//ASlime* Slime = new ASlime();
	//Slime->Move();

	//AGoblin* Goblin = new AGoblin();
	//Goblin->Move();


 	return 0;
}