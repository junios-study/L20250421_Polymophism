#include <iostream>
#include <vector>
#include "Monster.h"

using namespace std;

//메모리 구조
//Code
//Data : Global
//Heap 
// int -> 0x333003(1)
// 
// ADD()
// -------------------
// PA[int*] -> 0x2222(0x333003)
// A[int] -> 0x1121(1)
// Main()
//Stack

int Global;

int main()
{
	//OS 요청
	int A = 1;
	int* PA = &A;

	cout << *PA << endl;

	PA = new int();
	*PA = 1;
	delete PA;


	return 0;
}