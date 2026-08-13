#include<iostream>
using namespace std;

class feboSeries{
    private:
        int term; 
    public:
        void getData(int n){
            term = n;

        }
        int findSeries(int term){
            if (term<=1){
                return term;
            }
            return findSeries(term-1)+findSeries(term-2);
        }
        void printSeries(){
            for (int i =0; i <term; i++){
                cout<<findSeries(i)<<" ";
            }
        }
};
int main (){
    feboSeries s1;
    int input;
    cout<<"input the number of term: ";
    cin>>input;
    s1.getData(input);
    s1.printSeries();
    
}