#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    string name;
    double grade;
    
    while (true) {
        cout << "Enter student name (or 'exit' to finish): ";
        cin >> name;
        
        if (name == "exit") {
            break;
        }
        
        cout << "Enter grade for " << name << ": ";
        cin >> grade;
        
        students.push_back({name, grade});
    }
    if (students.empty()) {
        cout << "No students entered." << endl;
        return 0;
    }
    double totalGrade = 0;
    double highestGrade = students[0].grade;
    double lowestGrade = students[0].grade;
    
    for (const Student& student : students) {
        totalGrade += student.grade;
        highestGrade = max(highestGrade, student.grade);
        lowestGrade = min(lowestGrade, student.grade);
    }
    
    double averageGrade = totalGrade / students.size();
    
    cout << "Average grade: " << averageGrade << endl;
    cout << "Highest grade: " << highestGrade << endl;
    cout << "Lowest grade: " << lowestGrade << endl;
    
    return 0;
}
