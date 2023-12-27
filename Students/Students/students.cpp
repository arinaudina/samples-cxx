#include <iostream>
#include <cstring>

using namespace std;

int main() {
	struct student
	{
		char FIO[41];
		int course;
		double avg_rating;
	};

	struct student_ext
	{
		char FIO[41];
		int course;
		double avg_rating;

		struct {
			char name[36];
			int grade;
		} subjects[2];
	};

	struct student iam = { "Udina A.B.", 10, 89.7 };
	struct student_ext other = {
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
	if (other.avg_rating <= iam.avg_rating) {
	    cout << iam.FIO << iam.avg_rating;
	}
	else {
	    cout << other.FIO << other.avg_rating;
	}
	
}
