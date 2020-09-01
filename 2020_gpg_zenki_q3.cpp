#include <iostream>
using namespace std;


void allCalc(int one, int two) {
	int* plus = 0;
	int* minus = 0;
	int* multi = 0;
	int* slush = 0;



	* plus = one + two;

	* minus = one - two;

	* multi = one * two;

	* slush = one / two;

}


int main() {

	int eins = 2;
	int zwei = 5;

	int plus = 0;
	int minus = 0;
	int multi = 0;
	int slush = 0;

	allCalc(eins, zwei);

	cout << plus << endl;


}