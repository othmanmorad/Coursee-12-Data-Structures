#include <iostream>
#include <map>
using namespace std;

int main()
{
	// Map (Dictionary) is a data structure that stores key-value pairs. Each key is unique and maps to a specific value. It allows for efficient retrieval, insertion, and deletion of elements based on the key.
	map<string, int> StudentGrade;

	// Adding key-value pairs to the map
	StudentGrade["Ali"] = 90;
	StudentGrade["Sara"] = 95;
	StudentGrade["Omar"] = 85;
	StudentGrade["Othman"] = 95;

	// Accessing values using keys
	for (const auto& pair : StudentGrade)
	{
		cout << pair.first << ": " << pair.second << endl;
	}

	string studentName="Ahmad";
	if (StudentGrade.find(studentName) != StudentGrade.end())
	{
		cout << studentName << "'s grade: " << StudentGrade[studentName] << endl;
	}
	else
	{
		cout << studentName << " not found in the map." << endl;
	}

    
}
