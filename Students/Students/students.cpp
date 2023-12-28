#include <iostream>
#include <cstdio> // for sprintf_s
#include <cstring> // for strcpy_s

using namespace std;

struct Student {
	char FIO[41];
	int course;
	double avgRating;
};

struct StudentExt {
	char FIO[41];
	int course;
	double avgRating;

	struct {
		char name[36];
		int grade;
	} subjects[2];
};


int main() {
	// Task 1
	Student iam = { "Udina A.B.", 10, 89.7 }; 
	iam.course++;
	cout << iam.FIO << endl;

	// Task 2
	Student students[25];
	for (int i = 0; i < 25; ++i) {
		sprintf_s(students[i].FIO, "student %d", i);
		students[i].course = 10;
		students[i].avgRating = rand() % 100;
	}

	Student* topStudent = &students[0]; 
	for (int i = 1; i < 25; ++i) { 
		if (topStudent->avgRating < students[i].avgRating) {
			topStudent = &students[i];
		}
	}
	cout << "Top student:" << topStudent->FIO << " " << topStudent->avgRating << endl;
	topStudent = nullptr; // NULL for C

	// Task 3
	StudentExt other = { 
		"Marihewa S.M.", 9, 199.7,
		{
			{"Biology", 17},
			{"chemistry", 25}
		}
	};
	strcpy_s(other.subjects[0].name, "philosophy");
	other.subjects[0].grade = 100;

	return 0;
}
