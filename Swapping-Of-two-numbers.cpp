#include<iostream>
using namespace std;

class swapping {
    private: 
           
           int num1,num2;
    public:
        void getData(int a, int b){
            num1 = a;
            num2 = b;

        }
        void swap(){
            cout<<"before swapping number 1 is : "<<num1<<" number 2 is :"<<num2<<endl;
            num1 = num1^num2;
            num2= num1^num2;
            num1=num1^num2;
            cout<<"afer swapping number 1 is : "<<num1<<" number 2 is : "<<num2<<endl;

        }
    
};
int main(){
    swapping s1;
    s1.getData(1,2);
    s1.swap();
    return 0;
}