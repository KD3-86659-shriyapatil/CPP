#include<iostream>
using namespace std;

class date {
int day ;
int month ;
int year ;
public :
void initDate (){
    int day = 1;
    int month =1;
    int year = 1990;
}
void printDateOnConsole(){
     cout <<day<<month<<year;
    
}
void acceptDateFromConsole(){
    cout<<"enter day";
    cin>>day;
    cout<<"enter month";
    cin>>month;
    cout<<"enter year";
    cin>>year;
}
bool isLeapYear()const{
    if (year %400==0){
        return true;
    }
    if(year%100==0){
        return false;
    }
    if(year%4==0){
        return true;
    }
    return false;
}
};
int menu (){
    int choice ;
    cout << "0.Exit"<<endl;
    cout << "1.initDate"<<endl;
    cout <<"2.printDateOnConsole"<<endl;
    cout <<"3.acceptDateFromConsole"<<endl;
    cout <<"4.isLeapYear"<<endl; 
    cout <<"enter your choice";
    cin >> choice;
    return choice;
}
int main(){
    int choice ;
    date d1 ;
    while ((choice =menu())!=0)
    {
        switch (choice)
        {
            case 1 : d1.initDate();
            break;
            case 2 : d1.printDateOnConsole();
            break ;
            case 3 : d1.acceptDateFromConsole();
            break;
            case 4: d1.isLeapYear();
            break;
            default:
            cout <<"wrong choice..."<<endl;
            break;
        }
    }
    return 0;
}