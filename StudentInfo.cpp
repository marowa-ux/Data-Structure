#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    int creditsCompleted;
    float cgpa;
};

int main() {
    vector<Student> students = {
        {101, 40, 3.5},
        {102, 50, 3.2},
        {103, 35, 3.8},
        {104, 60, 3.4},
        {105, 45, 2.9},
        {106, 55, 3.3},
        {107, 48, 3.5},
        {108, 42, 3.9},
        {109, 48, 3.6},
        {110, 38, 3.2}
    };

    cout << "Students with CGPA 3.5 and above:" << endl;
    for (const auto& student : students) {
        if (student.cgpa >= 3.5) {
            cout << "Student ID: " << student.id << endl;
        }
    }

    cout << "\nStudents with 45 credits and above:" << endl;
    for (const auto& student : students) {
        if (student.creditsCompleted >= 45) {
            cout << "Student ID: " << student.id << endl;
        }
    }

    return 0;
}
