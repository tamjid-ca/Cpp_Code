#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    double gpa;

public:
    Student(string n, int roll, double g) : name(n), rollNumber(roll), gpa(g) {}

    void displayInfo() const {
        cout << left << setw(20) << name 
             << setw(15) << rollNumber 
             << fixed << setprecision(2) << gpa << endl;
    }

    string getName() const { return name; }
    int getRollNumber() const { return rollNumber; }
    double getGPA() const { return gpa; }
};

int main() {
    vector<Student> students;
    int choice;

    cout << "=== Student Grade Management System ===" << endl;

    while (true) {
        cout << "\n1. Add Student\n2. Display All Students\n3. Find Student\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string name;
            int roll;
            double gpa;

            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Roll Number: ";
            cin >> roll;
            cout << "Enter GPA: ";
            cin >> gpa;

            students.emplace_back(name, roll, gpa);
            cout << "Student added successfully!" << endl;

        } else if (choice == 2) {
            if (students.empty()) {
                cout << "No students registered yet." << endl;
            } else {
                cout << "\n" << left << setw(20) << "Name" 
                     << setw(15) << "Roll Number" << "GPA" << endl;
                cout << string(50, '-') << endl;
                for (const auto& student : students) {
                    student.displayInfo();
                }
            }

        } else if (choice == 3) {
            int searchRoll;
            cout << "Enter Roll Number to search: ";
            cin >> searchRoll;

            bool found = false;
            for (const auto& student : students) {
                if (student.getRollNumber() == searchRoll) {
                    cout << "\nStudent Found!" << endl;
                    cout << "Name: " << student.getName() << endl;
                    cout << "GPA: " << fixed << setprecision(2) << student.getGPA() << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student not found." << endl;
            }

        } else if (choice == 4) {
            cout << "Exiting... Thank you!" << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
