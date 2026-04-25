#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//Full Control on Vector
	vector <int>vec1Numbers;
	vec1Numbers.push_back(10);
	vec1Numbers.push_back(20);
	vec1Numbers.push_back(30);
	vec1Numbers.push_back(40);
	vec1Numbers.push_back(50);

	cout << "\n\n\n\nVector1 Count = " << vec1Numbers.size() << endl;
	cout << "\nVector1 Elements = " << endl;
	/*
	while (!vec1Numbers.empty())
	{
		cout << vec1Numbers.back() << endl;
		vec1Numbers.pop_back();
	}*/
	//or 
	for (int i = 0;i < vec1Numbers.size();i++)
	{
		cout << vec1Numbers[i] << endl;
	}

	cout << "\n" << vec1Numbers[1] << endl;




}

