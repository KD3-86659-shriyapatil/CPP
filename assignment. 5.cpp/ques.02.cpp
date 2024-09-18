#include <iostream>
using namespace std;

class Student {
    string name;
    string gender;
     const int rollno;
     static int auto_generated;
     double marks[3];

     public:
     Student ():rollno(auto_generated++){
        name="";
        gender="";
        for (int i=0;i<3;i++){
            marks [i]=0;
        }
     }
     void accept(){
        cout<<"enter name -";
        cin >>name;
        cout <<"enter gender-";
        cin>>gender;
        cout<<"marks-";
        for(int i=0;i<3;i++){
            cin>>marks[i];
        }
     }
     void display()const{
        cout<<"name-"<<name;
        cout<<"gender-"<<gender;
        cout<<"rollno-"<<rollno;
        cout<<"marks-";
        for(int i=0;i<3;i++){
            cout<<marks[i]<<"";
             }
             cout<<endl;
             cout<<"percentage:"<<calculatepercentage()<<"%"<<endl;
     }
     int getrollno()const{
        return rollno;
     }
     float calculatepercentage()const{
        int totalmarks =0;
        for (int i=0;i<3;i++){
            totalmarks += marks [i];
        }
        return (totalmarks /3);
     }
     };
     int Student::auto_generated =1000;
     int searchStudent(Student *arr[],int size,int rollno){
        for(int i=0;i<size;i++){
            if(arr[i]->getrollno()==rollno){
                return i;
            }

        }
        return -1;
     }
     int main(){
        Student *arr[5];
        int index =0;
        int choice ;
        while(choice !=0){
            cout<<"0.exit"<<endl;
            cout<<"1.accept Student"<<endl;
            cout<<"2.print Student"<<endl;
            cout<<"3.search Student"<<endl;
            cout<<"enter your choice-";
            cin>>choice;

            switch (choice){
                case 1: for (int i =0;i<1;i++){
                    arr[i]=new Student();
                    cout<<"enter the details of student:";
                    arr[i]->accept();
                }
                break;
                case 2: for(int i=0;i<1;i++){
                 cout<<"accept Student details";
                 arr[i]->display();
                }
                break;
                case 3 : int rollno;
                cout<<"enter roll number to search";
                cin>>rollno;
                
                int index = searchStudent(arr,1,rollno);
                if (index != -1){
                    cout<<"Student at index-"<<index<<endl;
                    arr[index]->display();
                }
                else{
                    cout<<"Student not found"<<endl;
                }
                break;

             case 4: 
              cout<<"wrong choice";
              break;
            }
         } 
         return 0;
     }