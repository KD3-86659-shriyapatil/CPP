#include <iostream>
using namespace std;
class Employee {
    int id;
    double salary;

    public:
    Employee (){
     }
     Employee (int id,double salary){
        this->id = id;
        this->salary = salary;
     }
     void setId( int id){
      this->id = id;
     }
     int getId(){
      return id;
     }
     void setSalary(int salary){
      this->salary=salary;
     }
     int getSalary(){
      return salary;
     }
     virtual void accept(){
        cout<<"enter empid-"<<endl;
        cin>>id;
        cout<<"enter salary-"<<endl;
        cin>>salary;
     }
     virtual void display(){
        cout<<"empid-"<< id <<endl;;
        cout<<"salary-"<< salary <<endl;;
     }
};
    class Manager :virtual public Employee{
        double bonus;
        protected:
         void acceptManager(){
           cout<<"enter bonus-";
           cin>>bonus;
         }
         void displayManager(){
            cout<<"bonus-"<<bonus; 
         }
        public:
        Manager (){

        }
        Manager(int id,double salary,double bonus):Employee(id,salary){
            this->bonus=bonus;
        }
        void setBonus(double bonus){
            this->bonus=bonus;
        }
        int getBonus(){
              return bonus;
        }
          void accept(){
            Employee::accept();
            acceptManager();
          }
          void display(){
            Employee::display();
            displayManager();
          }
          };
          class Salesman : virtual public Employee {
            double commision;
            protected:
            void acceptSalesman(){
               cout<<"enter commision-";
               cin>>commision;
            }
            void displaySalesman(){
               cout<<"commision-"<<commision;
            }

            public:
            Salesman (){

            }
            Salesman (int id,double salary,double commosion):Employee (id,salary){
               this ->commision =commision;
            }
            void setCommision(double commision){
               this->commision = commision ;
            }
            int getCommision(){
               return commision;
            }
            void accept(){
               Employee ::accept();
               acceptSalesman();
            }
            void display(){
               Employee ::display();
               displaySalesman();
            }
            };

            class SalesManager : public Manager , public Salesman{
              public :
              SalesManager (){

              }
              SalesManager(int id , double salary,double bonus , double commision):Employee(id,salary){

              }
              void accept(){
               Employee :: accept();
               this ->acceptManager();
               this->acceptSalesman();
              }
              void display(){
               Employee::display();
               this->displayManager();
               this->displaySalesman();
              }
            };
            int main(){
               Employee *e = new SalesManager();
               e->accept();
               e->display();
               SalesManager S ;
               return 0;

            }
      
          