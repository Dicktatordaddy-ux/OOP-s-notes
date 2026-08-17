#include<iostream>
using namespace std;

class Daycount{
    private: 
        int days;
    public: 
        void getData(int n){
            days=n;
        }
        void count(){
            int months, remaining;
            months = days / 30;
            remaining = days%30;

            cout<<days<<" is equivalent to "<<months<<" months and "<<remaining<<" days.";
        }
};
int main (){
    Daycount d;
    d.getData(63);
    d.count();
    return 0;
}

