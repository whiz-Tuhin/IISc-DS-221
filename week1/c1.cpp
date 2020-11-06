#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class SimpleClass1{
    private:
        int simpleInteger1; //member variables. this is a line comment. Anything after // is ignored by compiler 
        double simpleDouble1;
        /*
        member functions
        This is a block comment
        */
        void noReturnFunction(){
            cout<<"This is a function that returns nothing\n";
        }
        public:
        void publicNoReturnFunction(){
            noReturnFunction();
        }
       inline double functionDecalredOutsideClass(int a);


};

double SimpleClass1::functionDecalredOutsideClass(int a){
    cout<<"Function that is declared outside of class by making use of scope resolution operator(::) and takes an integer input\n";
    simpleInteger1=a;
    simpleDouble1=simpleInteger1*10.0;
    cout<<"Member variable simpleInteger1="<<simpleInteger1<<" simpleDouble1="<< simpleDouble1 << "\n";
    return double(a);
}