#include <iostream>
#include <vector>
#include "Monster.h"

using namespace std;

//�޸� ����
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
	AMonster* Monster = nullptr;

	//���� ������ ���� �Ҽ� �ִ�.
	Monster = new AMonster();
	delete Monster;


	return 0;
}