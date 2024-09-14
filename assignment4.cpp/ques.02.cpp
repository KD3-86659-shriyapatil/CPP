#include<iostream>
using namespace std ;

class Stack{
    int* arr;
    int top;
    int maxSize;
public:
    Stack(int size){
        this->maxSize = size ;
        arr=new int [maxSize];
        top=-1;
    }
    ~Stack(){
        delete[]arr;
    }
    void push(int value){
        if (!isFull()){
            arr[++top] = value;
            
            }
            else {
                cout<<"stack is full"<<endl;
           }
    }

    void pop(){
        if(isEmpty()){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<arr[top--]<<endl;
        }
    }

    void peek(){
        if (isEmpty()){
            cout<<"stack is empty"<<endl;
        }
        
       cout<<arr[top]<<endl;
        
    }
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == maxSize -1;
    }

    void print(){
        for (int i = 0; i < maxSize; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }
};

int main(){
    Stack s1(5);
    s1.push(24);
    s1.push(20);
    s1.push(10);
    s1.push(50);
    s1.push(30);
    s1.print();
    
}