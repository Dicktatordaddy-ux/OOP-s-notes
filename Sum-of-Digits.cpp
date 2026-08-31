#include<iostream>
using namespace std;

class calculaion {
    private: 
        int sum =0;
        int dig;
        int num;
    public: 
        void getData (int n){
            num = n;
        }
        void sumOfDigits(){
            int x = num;
            while(num!=0){
                dig = num%10;
                sum = sum + dig;
                num = num/10;

                
            }
            cout<<"The sum of the digit of number "<<x<<" is "<<sum<<endl;
        }
        
};
int main (){
    calculaion c;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    c.getData(n);
    c.sumOfDigits();
}