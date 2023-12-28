#include <iostream>
#include <cstring>

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
	Student iam = { "Udina A.B.", 10, 89.7 };
	StudentExt other = {
	 "Marihewa S.M.", 9, 199.7,
		{
		  {"biology", 4},
		   {"chemistry", 5}
		   }
	};

	iam.course++;
	puts(iam.FIO);
	strcpy_s(other.subjects[0].name, "Philosophy");
	other.subjects[0].grade = 100;
	
	if (other.avgRating <= iam.avgRating) {
	    cout << iam.FIO << iam.avgRating;
	}
	else {
	    cout << other.FIO << other.avgRating;
	}

	return 0;
}