#include<iostream>
using namespace std;

class Date {
    int day;
    int month;
    int year;
    public:

    Date (){
        cout<<"inside paramereless ctor"<<endl;
        this ->day = 0;
         this->month=0;
         this->year=0;
    }
    Date(int day,int month,int year){
        cout<<"parameterized ctor"<<endl;
        this-> day=day ;
        this->month =month;
        this->year=year; 
      }
      void setDay(int day){
        this->day = day;
      }
      void setMonth(int month){
        this-> month=month;
      }
      void setYear(int year){
        this->year=year;
      }
      void acceptDate (){
        cout<<"enter day,month,year-"<<endl;
        cin>> day>> month>> year;
      }
      void displayDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
      }
};
    class Person{
        string name;
        string address;
        Date birthdate;
        public:
       
       Person(){
        cout<<"inside paramerless ctor";
        this->name="";
        this->address="";
         }

         Person(string name,string address,int day,int month,int year) : birthdate(day,month,year){
           cout<<"inside parameterized ctor-"<<endl;
           this->name=name;
           this->address=address;
           this->birthdate.setDay(day);
           this->birthdate.setMonth(month);
           this->birthdate.setYear(year);

         }
         void acceptPerson(){
            cout<<"enter name-"<<endl;
            cin >> name;
            cout<<"enter address-"<<endl;
            cin >>address;
            cout<<"enter birthdate-"<<endl;
            birthdate.acceptDate();
         }
         void displayPerson(){
            cout<<"name-"<<name<<"/"<<endl;
            cout<<"address-"<<address<<"/"<<endl;
            cout<<"birthdate-"<<endl;
            birthdate.displayDate();

         }

    };
        int main(){
            Person p1;
            p1.acceptPerson();
            Person p2("shriya","galaxy appartment",2,8,2001);
            p1.displayPerson();
            p2.displayPerson();
        
        }
