#include<iostream>
using namespace std; 

class primeNo{
    private: 
        int num;
    public: 
        void getData(int n){
            num = n;
        }
        void isPrime(){
            if(num < 2){
                cout<<"The entered number is NOT prime: ";
                return;
            }
            int flag = 1;
            for (int i = 2; i < num; i++){
                if(num % i == 0){
                    flag = 0;
                    break;
                }
            }
            if (flag == 1){
                cout<<"The entered number is prime: ";
            }
            else {
                cout<<"The entered number is NOT prime: ";
            }
        }
};
int main (){
    primeNo p;
    int n ;
    cout<<"Enter the number: ";
    cin>> n;
    p.getData(n);
    p.isPrime();
    return 0;
}