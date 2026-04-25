#include <iostream>
#include <stack>
using namespace std;
int main()
{


	//stack last in first out (LIFO)
	stack <int>stk1Numbers;
	stk1Numbers.push(10);
	stk1Numbers.push(20);
	stk1Numbers.push(30);
	stk1Numbers.push(40);
	stk1Numbers.push(50);

	stack <int>stk2Numbers;
	stk2Numbers.push(60);
	stk2Numbers.push(70);
	stk2Numbers.push(80);
	stk2Numbers.push(90);
	stk2Numbers.push(100);


	/*
	cout << "\nStack1 Count (Befor Swaping)= " << stk1Numbers.size() << endl;

	cout << "\nStack1 Elements (Befor Swaping) = " << endl;
	while (!stk1Numbers.empty())
	{
		cout << stk1Numbers.top()<<endl;
		stk1Numbers.pop();
	}


	cout << "\nStack2 Count (Befor Swaping)= " << stk2Numbers.size() << endl;

	cout << "\nStack2 Elements (Befor Swaping) = " << endl;
	while (!stk2Numbers.empty())
	{
		cout << stk2Numbers.top() << endl;
		stk2Numbers.pop();
	}
	*/


	stk1Numbers.swap(stk2Numbers);

	cout << "\nStack1 Elements (After Swaping) = " << endl;

	while (!stk1Numbers.empty())
	{
		cout << stk1Numbers.top() << endl;
		stk1Numbers.pop();
	}


	cout << "\nStack2 Elements (After Swaping) = " << endl;

	while (!stk2Numbers.empty())
	{
		cout << stk2Numbers.top() << endl;
		stk2Numbers.pop();
	}


}

