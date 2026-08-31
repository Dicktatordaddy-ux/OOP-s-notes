#include<iostream>
using namespace std;

class calculation {
    private: 
        int num;
    public:
        void getData(int n){
            num = n;

        }
        int fectorial ( int num){
            if(num == 0 || num == 1 ){
                return 1;
            }
            return num * fectorial(num-1);
        }
};
int main (){
    calculation c;
    int n;
    cout<<"Enter the number for fectorial : ";
    cin>>n;
    if(n>=0){
        c.getData(n);
        cout<<"Answer is : "<<c.fectorial(n);

    }
    else{
        cout<<"invalid input...";
    }
}
