/*
$$$  All about Stack  $$$


.......$Created By Anilabha Baral$..............

*/
#include<iostream>
using namespace std;

class stack{
    public:
    int top;
    int array[100];
    stack(){
        top=-1;
    }
    void push(int value){
        array[++top]=value;
    }
    void pop(){
        if (top==-1){
            cout<<"stack is empty!";
        }
        else{
            top--;
        }
    }
    void printval(){
        for (int i=0;i<=top;i++){
            cout<<array[i]<<endl;
        }
    }
};


int main(){
    stack sta;
    sta.push(10);//insert data into stack by 'push()'
    sta.push(13);
    sta.push(55);
    sta.push(22);
    sta.push(88);
    sta.push(12);
    cout<<"before using pop for delete data \n";
    sta.printval();
    sta.pop();//delete the last insert data from stack by 'pop()'
    sta.pop();
        cout<<"after using pop for delete data \n";



sta.printval();



    return 0;
}