#include<iostream>
using namespace std;

class Address{
    string building;
    string street;
    string city;
    int pin;
    public:

    Address (){
        cout << "inside parameterless ctor";
        building="galaxy";
        street ="gandhi";
        city ="kolhapur";
        pin=416115;
    }
    Address (string b,string s,string c,int p){
        building=b;
        street=s;
        city =c;
        pin =p;
    }
    void setbuilding (string b1){
        building =b1;
    }
    string getbuilding(){
        return building;
    }
    void setstreet(string s1){
        street=s1;
    }
    string getstreet(){
        return street;
    }
    void setcity(string c1){
      city = c1;
    }
    string getcity(){
        return city;
    }
    void setpin(int p1){
        pin =p1;
    }
    int getpin(){
        return pin;
    }
    void acceptAddress(){
        cout<<"enter building,street,city,pin"<<endl;
        cin>>building>>street>>city>>pin ;
    } 
    void displayAddress(){
        cout<<building<<street<<city<<pin;
    }
};
int main(){
    Address addr1 ;
cout<<"enter acceptAddress"<<endl;
addr1.acceptAddress();
cout<<"enter displayAddress"<<endl;
addr1.displayAddress();

Address addr2 ;("sunbeam","datt chowk","karad","413052");
addr2.acceptAddress();
addr2.displayAddress();

addr2.setbuilding("pancshil");
addr2.setstreet("rankala");
addr2.setcity("pune");
addr2.setpin(416115);

cout <<"addr2 detail after modificatin"<<endl;
addr2.displayAddress();
return 0;

}