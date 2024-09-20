#include<iostream>
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
    public:
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
       enum {
       Exit,
       AcceptEmployee,
       AcceptManager,
       AcceptSalesmanager,
       AcceptSalesman,
       DisplayEmployee,
       DisplayManager,
       DisplaySalesman,
       DisplaySalesmanager,
       totalcount
            };
       int menu(){
        int ch;
       cout<<"0.EXIT"<<endl;
       cout<<"1.AcceptEmployee"<<endl;
       cout<<"2.AcceptManager"<<endl;
       cout<<"3.AcceptSalesManager"<<endl;
       cout<<"4.AcceptSalesman"<<endl;
       cout<<"5.DisplayEmployee"<<endl;
       cout<<"6.DisplayManager"<<endl;
       cout<<"7.DisplaySalesman"<<endl;
       cout<<"8.DisplaySalesmanager"<<endl;
       cout<<"9.totalcount"<<endl;
       cout<<"enter ch";
       cin>>ch; 
       return ch;           }
       int main(){
        Employee *e[3];
        int index;
        int totalsalesman=0;
        int totalmanager =0;
        int totalsalesmanager=0;
        index=0;
        int count1,count2,count3;
        int ch;
        while((ch=menu())!=0){
        switch(ch){
         case AcceptEmployee:
         if(index<3)
         e[index]=new Employee;
         e[index]->accept();
         index++;
         break;
         case AcceptManager:
         if(index<3)
         e[index]=new Manager ;
         e[index]->accept();
         index++;
         break;
         case AcceptSalesmanager:
         if(index<3)
         e[index]=new SalesManager();
         e[index]->accept();
         index++;
         break;
         case AcceptSalesman:
         if (index<3)
         e[index]=new Salesman();
         e[index]->accept();
         index++;
         break;
         case DisplayEmployee:
         for (int i=0;i<index;i++)
         {
            if (typeid(*e[i])==typeid(Employee))
            e[i]->display();
         }
         break;
         case DisplayManager:
         for (int i=0;i<index;i++){
            if (typeid(*e[i])==typeid(Manager))
            e[i]->display();
         }
         break;
         case DisplaySalesmanager:
         for (int i=0;i<index;i++){
            if(typeid(*e[i])==typeid(Manager))
            e[i]->display();
         }
         break;
         case DisplaySalesman:
         for(int i=0;i<index;i++){
            if(typeid(*e[i])==typeid(Salesman))
            e[i]->display();
            }
            break;
         case totalcount:
         for(int i=0;i<index;i++){
            if (typeid(*e[i])==typeid(Manager)){
               totalmanager++;
         cout<<"manager count"<<totalmanager;
            }else if (typeid(*e[i])==typeid (SalesManager)){
               totalsalesmanager++;
              cout<<"SalesManager count"<<totalsalesmanager; 
            }else {
               totalsalesman++;
               cout<<"Salesman count"<<totalsalesman;
            }
         }
         default:
         cout<<"wrong choice";

        }
        }

            }
      
           