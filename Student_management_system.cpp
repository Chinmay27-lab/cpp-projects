#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string UID;
    string Name;
    string Email;
    string phone_no;   

    Student(string u, string n, string e, string p) {
        UID = u;
        Name = n;
        Email = e;
        phone_no = p;
    }
};

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            string UID, Name, Email, phone_no;

            cout << "Enter UID: ";
            cin >> UID;

            cout << "Enter Name: ";
            cin.ignore();        
            getline(cin, Name);       

            cout << "Enter Email: ";
            cin >> Email;

            cout << "Enter Phone Number: ";
            cin >> phone_no;         

            students.push_back(Student(UID, Name, Email, phone_no));
        }

        else if (choice == 2) {
            if (students.empty()) {
                cout << "No students found!\n";
            } else {
                for (auto s : students) {
                    cout << endl ;
                    cout << "UID -> " << s.UID
                         << ", Name -> " << s.Name
                         << ", Email -> " << s.Email
                         << ", Phone Number ->  " << s.phone_no << endl;
                }
            }
        }

    } while (choice != 3);

    return 0;
}