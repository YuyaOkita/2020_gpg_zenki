#include <iostream>
using namespace std;

int main() {

	int array[10];

	for (int i = 0; i < 10; i++) {

		cin >> array[i];

	}

	int max = array[0];

	int min = array[0];

	for (int i = 0; i < 10; i++) {

		if (max < array[i]) {

			max = array[i];

		}
		else if (min > array[i]) {

			min = array[i];

		}
	}

	cout << "Å‘å’l‚Í" << max << endl << "Å¬’l‚Í" << min << endl;

}