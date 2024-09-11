#include<iostream>
using namespace std;
class student {
    int rollno;
    char name;
    int marks;

public:
    void initStudent(){
        int rollno = 0;
        string name = "";
        int marks = 0;
         }
    void printStudentOnConsole(){
        cout<<"enter rollno,name,marks-";
        cin>>rollno>>name>>marks;
    }
    void acceptStudentFromConsole(){
        cout<<rollno<<name<<marks;
    }
};
   int main() {
    student s;
    int choice;

    do {
        cout << "\nMenu\n";
        cout << "1.initStudent\n";
        cout << "2. acceptStudentFromConsole\n";
        cout << "3. printStudentOnConsole\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.initStudent();
                cout << "Student initialized with default values." << endl;
                break;
            case 2:
                s.acceptStudentFromConsole();
                break;
            case 3:
                s.printStudentOnConsole();
                break;
            case 4:
                cout << "Exit." << endl;
                break;
            default:
                cout << "wrong choice.." << endl;
        }
    } while (choice != 4);

    return 0;
}