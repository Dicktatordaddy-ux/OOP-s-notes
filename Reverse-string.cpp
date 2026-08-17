// write a program to print string in reverse using the pointer
#include<iostream>
#include<string>
using namespace std;
class reverseString{
    private:
        string name;
        int len;
    public:
        void getData(string n){
            name = n;

        }
        // first get length of the string
        void findLength(){
            len = 0;
            for (int i=0; name[i]!='\0'; i++){
                len++;
            }
        }
        // take a loop that goes form length-1 to the zeroth index
        void printReverse(){
            for (int j=len-1; j>=0; j--){
                cout<<name[j];
            }
        }
};
int main (){
    reverseString r;
    string name;
    cout<<" enter name or any string: ";
    cin>>name;
    r.getData(name);
    r.findLength();
    r.printReverse();
    return 0;
}