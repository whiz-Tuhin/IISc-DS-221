#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main () {

    // Initialising a stack in STL, default container - <deque>
    stack<int> mystack;
    // Initialising a stack with a different container
    stack<int, vector<int> > myVectorStack;

    cout<<endl;
    cout<<"----- Initialising Stack -------"<<endl;
    // Check if the stack is currently empty
    cout<<"STACK SIZE - "<<mystack.size()<<endl;
    cout<<"Is Stack Empty ? - "<<(mystack.empty() ? "yes" : "no")<<endl<<endl;

    // Pushing elements onto the stack [This function uses the push_back function of the underlying container]
    cout<<"------ Pushing 10 elments onto the stack ---------"<<endl;
    for(int x = 0; x < 10; x++)  {
        cout<<"Pushing.. value = "<<x+1<<endl;
        mystack.push(x+1);
    }
    cout<<endl;
    cout<<"Is Stack Empty ? - "<<(mystack.empty() ? "yes" : "no")<<endl;

    // Getting the size of stack in STL
    cout<<"STACK SIZE - "<<mystack.size()<<endl;

    // Getting the top of stack in STL Stack object
    cout<<"CURRENT STACK TOP - "<<mystack.top()<<endl<<endl;


    // Popping elements from the stack;
    cout<<"------ Popping 5 elements from the stack ---------"<<endl;
    for(int x = 0; x < 5; x++) {
        cout<<"Popping... value = "<<mystack.top()<<endl;
        mystack.pop();
    }
    cout<<endl;
    cout<<"Is Stack Empty ? - "<<(mystack.empty() ? "yes" : "no")<<endl;
    cout<<"STACK SIZE - "<<mystack.size()<<endl;
    cout<<"CURRENT STACK TOP - "<<mystack.top()<<endl<<endl;


    cout<<"-------------- Clearing the Stack -----------------"<<endl;
    while(!mystack.empty()) {
        cout<<"Popping... value = "<<mystack.top()<<endl;
        mystack.pop();
    }
    cout<<endl;
    cout<<"Is Stack Empty ? - "<<(mystack.empty() ? "yes" : "no")<<endl;
    cout<<"STACK SIZE - "<<mystack.size()<<endl;
    cerr<<"CURRENT STACK TOP (Will give a segmentation fault since stack is empty) - "<<mystack.top()<<endl;

    return 0;
}