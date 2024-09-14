#include<iostream>
using namespace std;

class Time {
    int hrs;
    int min;
    int sec;
    public:

    Time (){
        cout<<"inside parameterless cotr"<<endl ;
        int hrs = 0;
        int min=0;
        int sec=0;
    }   
    Time (int h,int m,int s){
        hrs = h;
        min = m;
        sec =s;
    }
    void setHour(int h1){
        hrs=h1;
    }
    int getHour(){
        return hrs ;
         }
     void setMin(int m1){
        min=m1;
     }
     int getMin(){
        return min;
     }
     void setSec(int s1){
        sec =s1;
     }
     int getSec(){
        return sec;
     }
     void acceptTime(){
        cout<<"enter hrs,min,sec"<<endl;
        cin>>hrs>>min>>sec;
     }
     void printTime (){
        cout<<hrs<<"-"<<min<<"-"<<sec<<endl;
     }
     };
     int main(){
        Time **ptr = new Time *[5];
        ptr[0]=new Time (2,15,20);
        ptr[1]=new Time (5,15,45);
        ptr[2]=new Time (3,45,50);
        ptr[3]=new Time (10,35,20);
        ptr[4]=new Time (11,25,45);
        
        for(int i=0;i<5;i++)
        {
          ptr[i] -> printTime();
        }
        for (int i=0;i<5;i++){
         delete ptr[i];
         ptr[i]=NULL;
         

        }
        delete []ptr;
        ptr=NULL;
        return 0;


     };
       int main1(){
         Time *arr[5];
         arr[0]=new Time();
         arr[0]->acceptTime();
         arr[1]=new Time (5,15,45);
         arr[2]=new Time (3,45,50);
         arr[3]=new Time (10,35,20);
         arr[4]=new Time (11,25,45);

         for (int i =0;i<5;i++){
            arr[i]->printTime();
         }
         for(int i=0;i<5;i++){
            delete arr[i];
            arr[i]=NULL;
            
         }
           return 0;
           };
           int main2(){
            Time arr[5];
            for (int i =0;i<5;i++){
               arr[i].printTime();
            }
            return 0;
           }