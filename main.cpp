#include <iostream>
#include <vector> //container, C#, java, collection
//STL 
//Standard Template Library -> 자료 상관 없이 동작

//C#, java
//Generic

using namespace std;

//Add1, Add2, Add2
//name mangling
//overload
//int Add(int A, int B)
//{
//	return A + B;
//}
//
//float Add(float A, float B, int C)
//{
//	return  A + B;
//}
//
//char Add(char A, char B)
//{
//	return  A + B;
//}


//meta programmingr
//c++ -> complier ->(template)+ make -> object
//template <typename T>
//T Add(T A, T B)
//{
//	return A + B;
//}

class Adder
{
public:
	int Add(int A, int B);
	float Add(float A, float B);
	char Add(char A, char B);
};

//overload
int Adder::Add(int A, int B)
{
	return A + B;
}

float Adder::Add(float A, float B)
{
	return A + B;
}

char Adder::Add(char A, char B)
{
	return A + B;
}


template <typename T>
class TemplateAdder
{
public:
	T Add(T A, T B);
};


template<typename T>
T TemplateAdder<T>::Add(T A, T B)
{
	return A + B;
}


int main()
{
	TemplateAdder<int> A;
	
	cout << A.Add(1, 2) << endl;

	return 0;
}





