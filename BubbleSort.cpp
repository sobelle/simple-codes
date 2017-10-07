#include <iostream> 
using namespace std;

void sortBubble(int*, int);

int main() {

	int i;
	int size;
	int *arr;

	cout << "Please enter the size of the array: ";
	cin >> size;
	cout << endl << "Please enter the array elements: ";

	arr = new int[size];
	for (i = 0; i < size; i++) {
		cin >> arr[i];
		cout << " ";
	}

	sortBubble(arr, size);

	system("PAUSE");

	delete[]arr;

	return 0;

}

void sortBubble(int *arr, int size) {

	int i, j;
	bool elem_swap = false;

	for (j = 0; j < size - 1; j++) {
		for (i = 0; i < size - j - 1; i++) {

			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				elem_swap = true;
			}
		}

		if (!elem_swap) {

			cout << endl << "No Swap. Already sorted." << endl;
			break;
		}
	}
	if (elem_swap) {

		cout << endl << "Sorted: ";
		for (i = 0; i < size; i++)
			cout << arr[i] << " ";
	}
}