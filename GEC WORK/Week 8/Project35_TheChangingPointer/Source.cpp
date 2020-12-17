#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
	int num1, num2;
	int* pNum = &num1;

	inputDetails(&num1, &num2);
	outputDetails(num1, num2, pNum);

	return 0;
}

void inputDetails(int* n1, int* n2)
{
	cout << "Please enter two Numbers" << endl;
	cout << "\nNumber 1: " << endl;
	cin >> *n1;
	cout << "\nNumber 2: " << endl;
	cin >> *n2;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
	cout << "\nFirst value: " << integer1 << endl;
	cout << "First value's memory address: " << &integer1 << endl;
	cout << "\nSecond value: " << integer2 << endl;
	cout << "Second value's memory address: " << &integer2 << endl;
	cout << "\npNum value: " << pointer << endl;
	cout << "pNum dereferenced value: " << *pointer << endl;
	cout << "pNum memory address: " << &pointer << endl;
}