#include<iostream>
using namespace std;
class Product {
    int id;
    string title;
    public:
    double price;
   
    Product(){
       
    }
    Product(int id,string title,double price){
        this->id=id;
        this->title=title;
        this->price=price;
    }
    void setId(int id){
        this->id=id;
    }
    int getId(){
        return id;
    }
    void setTitle(string title){
        this->title=title;
    }
    string getTitle(){
        return title;
    }
    void setPrice(double Price){
        this->price=price;
    }
    double getPrice(){
        return price;
    }

    virtual void accept(){
        cout<<"enter productId-"<<endl;
        cin>>id;
        cout<<"enter title -"<<endl;
        cin>>title;
        cout<<"enter price-"<<endl;
        cin>>price;
    }
    virtual void display(){
        cout<<"productId-"<<id<<endl;
        cout<<"title -"<<title<<endl;
        cout<<"price-"<<price<<endl;
    }
};

class Book : virtual public Product {
    string author;
    protected:
    void acceptBook(){
        cout<<"enter author-"<<endl;
        cin>>author;
    }
    void displayBook(){
        cout<<"author-"<<author;;
    }
    public:
      Book(){
       this->author=author;
      }
      Book(int id,string title,string author,double price):Product(id,title,price){
        this->author=author;
      }
      void setAuthor(string author){
        this->author=author;
      }
      string getAuthor(){
        return author;
      }
      void accept(){
        Product::accept();
        acceptBook();
      }
      void display(){
        Product::display();
        displayBook();
      }

};
class Tape : virtual public Product {
    
    string artist;
     protected:
     void acceptTape(){
        cout<<"enter Artist-"<<endl;
        cin>>artist;
     }
     void displayTape(){
        cout<<"Artist-"<<artist;
     }
     public:
    Tape (){
      this->artist=artist;
    }
Tape (int id,string title,string artist,double price):Product(id,title,price){
       this->artist=artist;
      
  }
  void setArtist(){
          this->artist=artist;
        }
  string getArtist(){
            return artist;
        }
  void accept(){
    Product::accept();
    acceptTape();
         }
  void display(){
      Product::display();
    displayTape();
      }
   };
  int menu (){
     int ch ;
     cout<<"0.Exit"<<endl;
    cout<<"1.AcceptBookInformation"<<endl;
    cout<<"2.AcceptTapeInformation"<<endl;
    cout<<"3.DisplayBookInformation"<<endl;
    cout<<"4.DisplayTapeInformation"<<endl;
    cout<<"5.CalculateBill"<<endl;
    cout<<"enter choice ";
    cin>>ch;
   cout<<"***********************";
     return ch ;
      } ;
  int main (){
  Product *arr[3];
  int index;
  int ch ;
  int total = 0;

  int X;
   while ((ch)=menu()!=0){
     switch(ch){
   case 0:  cout<<"program exit";
      break;
      
  case 1:
     if (index<3){
     arr[index]=new Book();
     arr[index]->accept();
     index++;
     }
     break;
  case 2:
    for(int i=0;i<index;i++){
    if (typeid(*arr[i])==typeid(Book))
      arr[i]->display();
    }
    break;
  case 3: 
    if (index<3)
    arr[index]=new Tape();
    arr[index]->accept();
    index ++;
    break;
  case 4:
   for (int i =0;i<index;i++){
    if (typeid(*arr[i])==typeid(Tape))
    arr[i]->display();
   } 
   break;
  case 5:
   for (int i=0;i<index;i++){
    if(typeid(*arr[i])==typeid (Book))
    {X = arr[i]->price;
     total += X*0.95;}
     else {total += X*0.9;}
   }
   cout<<"total is "<<total<<endl;
    }
   }
    }