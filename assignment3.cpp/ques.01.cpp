#include<iostream>
using namespace std;

class Volume {
    int lenght;
    int width;
    int height ;
    

    public:
    Volume(){
        cout<<" inside parameterless ctor";
         lenght =0;
         width =0;
         height =0;
    }
    Volume(int value){
        cout<<"inside single parameterized ctor";
         lenght=value;
         width=value;
         height=value;
    }
    Volume(int l,int w,int h){
         lenght =l;
         width=w;
         height=h;
    }
    void calculateVolume(){
        
        cout<<"volume is"<<lenght*width*height;
      
    }
    
};
int main (){
    Volume v;

    Volume v2(2);
    Volume v3(2,6,8);

  //  v.calculateVolume();
    v.calculateVolume();
    v2.calculateVolume();
    v3.calculateVolume();

}