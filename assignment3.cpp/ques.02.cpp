#include<iostream>
using namespace std;

class Tollbooth {
  public:
    int totalCars=10;
    double totalMoneyCollected=20;
    int payingCars=2;
    int nonPayingCars=3;


    Tollbooth(){
        totalCars=0;
        totalMoneyCollected=0.0;
        payingCars=0;
        nonPayingCars=0;
    }

      void payingcars() {
        totalCars ++;
        payingCars++;
        totalMoneyCollected += 0.5;
      }
      void nonPayingcar(){
        totalCars++;
        nonPayingCars++;
      }
      void printOnConsole()const{
        cout<<totalCars<<payingCars<<nonPayingCars<<totalMoneyCollected<<endl;

      }
      };
      int main()
        {

        Tollbooth T1;

        T1.payingcars();
        T1.nonPayingcar();
        T1.printOnConsole();
        
        
       return 0;
      }


