#ifndef BubbleSort_H
#pragma once
using namespace std;
class BubbleSort {
private:
	int array;
	int num;
	int* arr = new int[array];

public:
	BubbleSort();
	BubbleSort(int array, int num);
	void SetArray(int array);
	int GetArray();
	void SetNum(int array);
	int GetNum();
	void SetArr(int arr[]);
	int GetArr();
	void TakeInput(int[], int);
	void Sort(int[], int);
	void Display(int[], int);
	void Mid(int[], int, int);
};
#endif  BubbleSort_H