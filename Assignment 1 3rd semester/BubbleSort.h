#ifndef BubbleSort_H
#define SIZE 100
#pragma once

using namespace std;
class BubbleSort {

private:

	int size;
	int arr[SIZE];

public:
	void SetSize(int);
	int GetSize();
	void GetNum();
	void TakeInput();
	void Sort();
	void Display();
	void Mid();
};
#endif  BubbleSort_H