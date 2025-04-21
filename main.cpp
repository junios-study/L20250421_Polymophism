#include <iostream>
#include <vector>
#include "Monster.h"

using namespace std;

//메모리 구조
//Code
//Data : Global
//Heap 
// int -> 0x333003(1)
// Monster -> 0x56566()
// 
// ADD()
// -------------------
// Monster[AMonster*] -> 0x4444(0x56566)
// PA[int*] -> 0x2222(0x333003)
// A[int] -> 0x1121(1)
// Main()
//Stack



int main()
{
	vector<AMonster*> Monsters;

	//생성 삭제를 조절 할수 있다.
	Monsters.push_back( new AMonster());


	return 0;
}