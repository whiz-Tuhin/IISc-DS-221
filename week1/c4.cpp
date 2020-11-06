#include<iostream>
using namespace std;
class SimpleClass{
    private:
        int variable1=10;
    public:
        void simpleFunction(int a){
            cout<<"variable1 = "<<variable1<<endl;
            variable1=a;
            cout<<"variable1 = "<<variable1<<endl;
        }
};
int main(){
    SimpleClass sc;
    sc.simpleFunction(1);
    }