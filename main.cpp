#include <iostream>
#include <vector>
#include "Monster.h"

using namespace std;

//�޸� ����
//Code
//Data
//Heap
// 
// PA[int*] -> 0x2222(0x1121)
// A[int] -> 0x1121(1)
//Stack

int main()
{
	//OS ��û
	int A = 1;
	int* PA = &A;

	cout << *PA << endl;


	return 0;
}