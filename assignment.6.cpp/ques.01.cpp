#include <iostream>
using namespace std;
class Date {
    int day;
    int month;
    int year;
    public:

    Date(){
        cout<<"inside prameterless ctor";
        this->day=1;
        this->month=1;
        this->year=2001;
    }
    Date(int day,int month,int year){
        cout<<"inside parameterized ctor";
        this->day=day;
        this->month= month;
        this->year=year;
    }
    void setDay(int day){
    this->day = day;
    }
    void setMonth(int month){
        this->month=month;
    }
    void setYear(int year){
        this->year=year;
    }
    void acceptDate(){
        cout<<"enter day,month,year-"<<endl;
        cin >> day >> month >>year;
    }
    void displayDate(){
        cout<<day<<"/"<<month<<"/"<<year;
    }
    };
    class Person {
        
        string name;
        string address;
        Date birthdate;
        protected:
       Person(){
        
        this->name="";
        this->address="";
       }
       Person(string name,string address,int day,int month,int year):birthdate(day,month,year){
        
        this->name=name;
        this->address=address;
        this->birthdate.setDay(day);
        this->birthdate.setMonth(month);
        this->birthdate.setYear(year);

       }
       void setName(string name){
        this->name=name;
       }
       void serAddress(string address){
        this->address=address;
       }
       public:

       void acceptPerson(){
        cout<<"enter name-"<<endl;
        cin>>name;
        cout<<"enter address-"<<endl;
        cin>>address;
        cout<<"enter birthdate-"<<endl;
        birthdate.acceptDate();
       }
       void displayPerson(){
        cout<<"name-"<<name<<endl;
        cout<<"address-"<<address<<endl;
        cout<<"birthdate-";
        birthdate.displayDate();

       }
       };
     class Employee : public Person {
        int id;
        double salary;
        string dept;
        Date doj;
        public: 
        Employee(){
            cout<<"Employee()";
        }
        Employee(int id,double salary,string dept,string name,string address,int day,int month,int year,Date birthdate): doj(day,month,year){
            this->id=id;
            this->salary=salary;
            this->dept=dept;
            this->doj.setDay(day);
            this->doj.setMonth(month);
            this->doj.setYear(year);

        }
     
        
        void acceptEmployee(){
            cout<<"enter id-"<<endl;
            cin>>id;
            Person::acceptPerson();
            cout<<"enter salary-"<<endl;
            cin>>salary;
            cout<<"enter dept-"<<endl;
            cin>>dept;
            cout<<"doj-";
            doj.acceptDate();
             }
             void displayEmployee(){
                cout<<"id-"<<id;
                cin>>id;
                cout<<"dept-"<<dept;
                cin>>dept;
                cout<<"salary-"<<salary;
                cin>>salary;
                Person::displayPerson();
                cout<<"doj-";
                doj.displayDate();

             }

             };
             int main(){
              Person *p = new Employee;
              p->acceptPerson();
            p->displayPerson(); 
              
              Employee *e = new Employee;
              e->acceptEmployee();
              e->displayEmployee();
            return 0;

                
                
                


             }

    