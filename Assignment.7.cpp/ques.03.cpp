#include<iostream>
using namespace std;

enum EAccountType{
    SAVING=1,
    CURRENT=2,
    DMAT=3
};
class InSufficientFundsException{
   
   string message;
   public:

    InSufficientFundsException(){
       this->message=",";
    }
    InSufficientFundsException(string message){
        this->message=message;
    }
    void display(){
        cout<<"Exception:InSufficientFundsException"<<endl;
        cout<<"Message:"<<message<<endl;
    }
};
 class BankAccount{
    int accno;
    EAccountType type;
    double balance;
    public:

    BankAccount(){

    }
    BankAccount(int accno,EAccountType type,double balance){
        this->accno=accno;
        this->balance=balance;
        this->type=type;
    }
   virtual void accept(){
     cout<<"Accept Account Details-"<<endl;
     cout<<"Enter Account Number-"<<endl;
     cin>>accno;
     cout<<"Enter Account Balance"<<endl;
     cin>>balance;
     cout<<"1.SAVING"<<endl;
     cout<<"2.CURRENT"<<endl;;
     cout<<"3.DMAT"<<endl;
     cout<<"enter choice";
     int choice;
     type = EAccountType(choice);

     }
    void display(){
        cout<<"Display account details"<<endl;
        cout<<"Accno:"<<accno<<endl;
        cout<<"Balance:"<<balance<<endl;
        switch (type){
            case SAVING:
            cout<<"Account Type=SAVING";
            break;
            case CURRENT:
            cout<<"Account Type=CURRENT";
            break;
            case DMAT :
            cout<<"Account Type=DMAT";
            break;
        }
     }
    void deposit(double amount){
         if (amount <0){
        throw  InSufficientFundsException("deposit amount cannot negative");
        } balance =balance + amount;
        cout<<"deposit successful ..Update balace="<<balance<<endl;
    }
    void withdraw(double amount){
        if(amount<0){
            throw InSufficientFundsException("withdraw amount cannot nagative");
        }if(amount >balance){
           throw InSufficientFundsException("insufficient funds"); 
        }balance = balance-amount;
        cout<<"withdraw sucessful..Update balance="<<endl;
    }
    int getAccno(){
        return accno;
    }

   };
    int menu(){
    int choice;
     cout<<"0.EXIT"<<endl;
     cout<<"1.Add account<<endl"<<endl;
     cout<<"2.Deposit amount-"<<endl;
     cout<<"3.withdraw amount-"<<endl;
     cout<<"4.display account"<<endl;
     cout<<"enter choice"<<endl;
     cin>>choice;
     return choice;
   };
   int main(){
    BankAccount*arr[5];
    int choice ;
    int index =0;
    while((choice =menu())!=0){
     switch(choice){
       case 0:
        cout<<"EXIT"<<endl;
          break;
        case 1:{ 
        cout<<"Add Account"<<endl;
        arr[index]=new BankAccount();
        arr[index]->accept();
        index++;
        }
        break;
        case 2:{
         int accno;
          cout<<"Enter accno for add amount"<<endl;
          cin>>accno;
        for(int i=0;i<index;i++){
          double amount;
         if (arr[i]->getAccno()==accno){
            cout<<"enter amount"<<endl;
            cin>>amount;
          }
         try{
         arr[i]->deposit(amount);
          }
        catch (InSufficientFundsException i)
        {
            i.display();
        }
            }
        }
        break;
        case 3:{
        int accno;
         cout<<"enter accno to withdraw amount"<<endl;
         cin>>accno;
         double amount;
         for(int i=0;i<index;i++){
            if (arr[i]->getAccno()==accno){
                cout<<"enter amount"<<endl;
                cin>>amount;
            }
            try{
                arr[i]->withdraw(amount);
            }
            catch (InSufficientFundsException i)
            {
                i.display();
            }
         }
        }
        break;
        case 4: {
            for (int j=0;j<index;j++){
                arr[index]->display();
            }
        }
        break;
        default:
        break;
        }
    }
     return 0;
   }
 