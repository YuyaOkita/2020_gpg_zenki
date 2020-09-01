#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:
	int sum();
	int avg();
	Student(char nm[MAX_NAME + 1], int jp, int sc, int mt);

private:
	char name[MAX_NAME + 1];
	int japanese;
	int society;
	int math;

};

Student::Student(char nm, int jp, int sc, int mt) {

	name[MAX_NAME + 1] = nm;
	japanese = jp;
	society = sc;
	math = mt;


}

int Student::sum() {
	int sum;
	sum = japanese + society + math;
	return sum;
}

int Student::avg() {
	int avg;

	avg = sum() / 3;

	return avg;
}

int main() {

	Student a("たかし", 58, 78, 29), b("エリザベス", 70, 90, 50), c("定春", 69, 45, 61);

		

	for (int i = 0; i < 3; i++) {

		int sum = 0;

		cout << student[i].name << endl;

		sum = student[i].japanese + student[i].society + student[i].math;

		cout << "合計は" << sum << endl << endl;

	}

}