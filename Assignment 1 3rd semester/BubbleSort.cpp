#include <iostream>
#include "BubbleSort.h"

void  BubbleSort::SetSize(int size) {
	this->size = size;
}

int  BubbleSort::GetSize() {
	return size;
}

void BubbleSort::GetNum() {
	this->size = 0;
	do {
		cout << " Enter Number between 100 : ";
		cin >> this->size;
	} while (this->size >= SIZE);
}

void BubbleSort::TakeInput() {
	

	for (int i = 0; i < this->size; i++) {
		cout << "Enter Number '" << i << "' : ";
		cin >> this->arr[i];
	}
}

void BubbleSort::Sort() {
	int store;
	for (int i = 0; i < this->size - 1; i++) {
		for (int j = i + 1; j < this->size; j++) {
			if (this->arr[i] > this->arr[j]) {
				store = this->arr[i];
				this->arr[i] = this->arr[j];
				this->arr[j] = store;
			}
		}
	}
}

void BubbleSort::Display() {
	for (int i = 0; i < this->size; i++) {
		cout << "Number :" << this->arr[i] << endl;
	}
}

void BubbleSort::Mid() {
	int find;
	do {
		cout << " Enter Number you need to find : ";
		cin >> find;
	} while (find<0 || find>this->size);
	int l = 0;
	int h = this->size - 1;
	int m = (h + l) / 2;
	do {
		if (find == this->arr[m]) {
			cout << "Number " << this->arr[m] << " is in the array!" << endl;
			break;
		}
		if (find < this->arr[m]) {
			h = m - 1;
			m = (h + l) / 2;
			
		}
		if (find > this->arr[m]) {
			l = m + 1;
			m = (l + h) / 2;
		}
	} while (h >= l);

	if (this->arr[m] != find) {
		cout << "Number not found!" << endl;
	}
}