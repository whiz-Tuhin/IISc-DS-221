#include "c3.h"
using namespace std;
void SimpleClass3::privateFunction1(){
    cout << "member value=";
}

int SimpleClass3::publicFunction1(){
    privateFunction1();
}