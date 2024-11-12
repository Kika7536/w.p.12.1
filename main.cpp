#include<iostream>
#include<vector>

using namespace std;

void main() {
	int size, del, number;

	cout << "Input size: ";
	cin >> size;

	vector<int> numbers(size);

	cout << "Input numbers: ";

	for (int i = 0; i < size; i++) {
		cin >> number;
		numbers[i] = number;
	}


	cout << "Input number to delete: ";
	cin >> del;

	for (int i = 0; i < numbers.size(); i++) {

		if (numbers[i] == del) {
			for (int j = i; j < numbers.size() - 1; j++) {
				numbers[j] = numbers[j + 1];
			}
			numbers.pop_back();
			i--;
		}
	}


	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << "   ";
	}

	//изначально хотел использовать erase(); (хнык)

}