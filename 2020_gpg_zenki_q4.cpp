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
		{"������",58, 78, 29},
		{"�G���U�x�X", 70, 90, 50},
		{"��t", 69, 45, 61}
	};

	

	for (int i = 0; i < 3; i++) {

		int sum = 0;

		cout << student[i].name << endl;

		sum = student[i].japanese + student[i].society + student[i].math;

		cout << "���v��" << sum << endl << endl;

	}

}