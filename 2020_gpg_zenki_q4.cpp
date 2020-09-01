#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student {

	char name[ MAX_NAME + 1];
	int japanese;
	int society;
	int math;

};

int main() {

	Student student[]{
		{"たかし",58, 78, 29},
		{"エリザベス", 70, 90, 50},
		{"定春", 69, 45, 61}
	};

	

	for (int i = 0; i < 3; i++) {

		int sum = 0;

		cout << student[i].name << endl;

		sum = student[i].japanese + student[i].society + student[i].math;

		cout << "合計は" << sum << endl << endl;

	}

}