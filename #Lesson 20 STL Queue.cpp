#include <iostream>
#include <queue>
using namespace std;
int main()
{
	//queue first in first out (FIFO)
	queue<int>que1Numbers;
	que1Numbers.push(10);
	que1Numbers.push(20);
	que1Numbers.push(30);
	que1Numbers.push(40);
	que1Numbers.push(50);

	queue<int>que2Numbers;
	que2Numbers.push(60);
	que2Numbers.push(70);
	que2Numbers.push(80);
	que2Numbers.push(90);
	que2Numbers.push(100);


	que1Numbers.swap(que2Numbers);
	cout << "\nCount of Queue1  = " << que1Numbers.size() << endl;
	cout << "\nFirst Element of Queue1  = " << que1Numbers.front() << endl;
	cout << "\nLast Element of Queue1  = " << que1Numbers.back() << endl;

	cout << "\nElements of Queue1 (After Swaping) = " << endl;
	while (!que1Numbers.empty())
	{
		cout << que1Numbers.front() << endl;
		que1Numbers.pop();
	}

}

