#include<iostream>
#include<stdio.h>
using namespace std;

namespace NStudent 
{
    int rollno=0;
    string name = " ";
    int marks = 0;

    class student
    {
        int rollno;
        char name ;
        float marks;

        void acceptStudent(){
            cout <<"enter rollno,name,marks";
            cin>>rollno>>name>>marks ;
            }
            void displayStudent(){
                cout<<rollno<<name<<marks ;
            }
    };
}
int main (){
   NStudent :: student ;
   
   student.acceptStudent();
   student.displayStudent();
   return 0;
}