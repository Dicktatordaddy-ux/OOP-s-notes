// largest amongst all
#include<iostream>
using namespace std;

class largest{
    private:
        int num1,num2,num3;
    public: 
        void getData(int a, int b, int c){
            num1= a;
            num2 =b;
            num3 =c;
        }
        void large(){
            if(num1>num2){
                if(num1>num3){
                    cout<<num1<<" is gratest amongs all"<<endl;

                }
                else{
                    cout<<num3<<" is gratest amongst all"<<endl;
                }
            }
            else if (num2>num3){
                cout<<num2<<" is gratest amongst all"<<endl;
            }
            else{
                cout<<num3<<" is gratest amongst all"<<endl;
            }
        }
};
int main (){
    largest l1;
    l1.getData(-99,0,99);
    l1.large();
    return 0;
}
