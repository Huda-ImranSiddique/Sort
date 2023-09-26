#include <iostream>
#include "BubbleSort.h"
BubbleSort::BubbleSort() {
	this->array = 5;
	this->num = 3;

}
BubbleSort::BubbleSort(int array, int num) {
	this->array = array;
	this->num = num;
}
void BubbleSort::SetArray(int array) {
	if (array > 0) {
		this->array = array;
	}
}
void BubbleSort::SetNum(int num) {
	if (num > 0) {
		this->num = num;
	}
}
/*void BubbleSort::SetArr(int arr[]) {
	for (int i = 0; i < this->array; i++) {
		cout << "Enter Number :";
		cin >> this->arr[i];
	}
}*/
int BubbleSort::GetArray() {
	cout << "Enter Number array : ";
	cin >> this->array;
	return array;
}
int BubbleSort::GetNum() {
	cout << "Enter Number you need to find : ";
	cin >> this->num;
	return num;
}
/*int BubbleSort::GetArr() {
	for (int i = 0; i < this->array; i++) {
		return this->arr[i];
	}
}*/
void BubbleSort::TakeInput(int a[], int s) {
	for (int i = 0; i < s; i++) {
		cout << "Enter Number :";
		cin >> a[i];
	}
}
void BubbleSort::Sort(int a[], int s) {
	int store;
	for (int i = 0; i < s-1; i++) {
		for (int j = i+1; j < s; j++) {
			if (a[i] > a[j]) {
				store = a[i];
				a[i] = a[j];
				a[j] = store;
			}
		}
	}
}
void BubbleSort::Display(int a[], int s) {
	for (int i = 0; i < s; i++) {
		cout << "Number :" << a[i] << endl;
	}
}
void BubbleSort::Mid(int a[], int s, int f) {
	int l = 0;
	int h = s-1;
	int m = (h + l) / 2;
	do {
		if (f == a[m]) {
			cout << "Number is in the array : " << a[m] << endl;
			break;
		}
		if (f < a[m]) {
			h = m-1;
			m = (h + l) / 2;
			if (f == a[m]) {
				cout << "Number is in the array : " << a[m] << endl;
				break;
			}
		}
		if (f > a[m]) {
			l = m +1;
			m = l+(h- l) / 2;
			if (f == a[m]) {
				cout << "Number is in the array : " << a[m] << endl;
				break;
			}
		}
	} while (h >= l);
	if (a[m] != f) {
		cout << "Number not found" << endl;
	}
}