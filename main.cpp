#include <iostream>
#include <vector>  //STL ȿ���� ���ؼ�, �ٸ��� ��Ա� ����, 
//���� �߰�
#include <list> //�߰� ���� ������, �˻� ����� ��δ�.
#include <map>
#include <set>

#include <algorithm>
//STL conatiner, �������̽� ǥ��ȭ


int main()
{
	std::vector<int> Numbers;

	std::list<int> NumbersList;

	Numbers.push_back(1);
	Numbers.push_back(2);
	Numbers.push_back(3);

	NumbersList.push_back(1);
	NumbersList.push_back(2);
	NumbersList.push_back(3);

	auto where = find(Numbers.begin(), Numbers.end(), 3);
	auto where2 = find(NumbersList.begin(), NumbersList.end(), 3);

	//[][][][][]
	for (int i = 0; i < Numbers.size(); ++i)
	{
		std::cout << Numbers[i] << std::endl;
	}

	for (auto iter = Numbers.rbegin();
		iter != Numbers.rend(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	//for (auto Data : Numbers)
	//{
	//	std::cout << Data << std::endl;
	//}

	//[][]        [][]     [][]       [][]
	//for (int i = 0; i < NumbersList.size(); ++i)
	//{
	//	std::cout << NumbersList[i] << std::endl;
	//}

	for (auto iter = NumbersList.rbegin();
		iter != NumbersList.rend(); iter++)
	{
		std::cout << *iter << std::endl;
	}

	//for (auto Data : NumbersList)
	//{
	//	std::cout << Data << std::endl;
	//}

	return 0;
}