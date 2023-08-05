// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <algorithm>



void myfunc(std::vector<int> &v)
{

	std::sort(v.begin(), v.end());

	auto st = std::unique(v.begin(), v.end());

	v.erase(st, v.end());
}

void print_vec(const std::vector<int> &mp)
{
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		if (it != mp.begin()) std::cout << ", ";
		std::cout << *it;
	}
}

int main()
{

	std::vector<int> mp = { 1,2,3,4,5,1,2,4,6 };

	std::cout << "[IN]: ";

	print_vec(mp);

	myfunc(mp);

	std::cout << std::endl << "[OUT]: ";

	print_vec(mp);



}
