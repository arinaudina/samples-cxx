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


void printStudent(const Student& student) {
    cout << "FIO: " << student.FIO << ", course: " << student.course << ", avgRating: " << student.avgRating << endl;
}

int main() {
    // Task 1
    cout << "Task 1" << endl;
    Student iam = { "Udina A.B.", 10, 89.7 }; 
    cout << "I am:" << endl;
    printStudent(iam);
    iam.course++;
    cout << "New course:" << endl;
    printStudent(iam);

    // Task 2
    cout << "\nTask 2" << endl;
    Student students[25];
    for (int i = 0; i < 25; ++i) {
        sprintf_s(students[i].FIO, "student %d", i);
        students[i].course = 10;
        students[i].avgRating = rand() % 100;
        printStudent(students[i]);
    }

    Student* topStudent = &students[0]; 
    for (int i = 1; i < 25; ++i) { 
        if (topStudent->avgRating < students[i].avgRating) {
            topStudent = &students[i];
            cout << "New top:" << endl;
            printStudent(*topStudent);
        }
    }
    cout << "Top student:" << topStudent->FIO << " " << topStudent->avgRating << endl;
    topStudent = nullptr; // NULL for C

    // Task 3
    cout << "\nTask 3" << endl;
    StudentExt other = { 
        "Marihewa S.M.", 9, 199.7,
        {
            {"Biology", 17},
            {"chemistry", 25}
        }
    };
    cout << "src:" << other.subjects[0].name << " " << other.subjects[0].grade << endl;
    strcpy_s(other.subjects[0].name, "philosophy");
    other.subjects[0].grade = 100;
    cout << "dst:" << other.subjects[0].name << " " << other.subjects[0].grade << endl;

    return 0;
}
