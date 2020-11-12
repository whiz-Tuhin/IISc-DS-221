#include <iostream>
#include <queue>
#include <list>

using namespace std;

int main () {

    // Initialising a queue in STL, default container - <deque>
    queue<int> myqueue;
    // Initialising a queue with a different container
    queue<int, list<int> > myListQueue;

    cout<<endl;
    cout<<"----- Initialising Queue -------"<<endl;
    // Check if the queue is currently empty
    cout<<"queue SIZE - "<<myqueue.size()<<endl;
    cout<<"Is queue Empty ? - "<<(myqueue.empty() ? "yes" : "no")<<endl<<endl;

    // Pushing elements onto the queue [This function uses the push_back function of the underlying container]
    cout<<"------ Pushing 10 elments onto the queue ---------"<<endl;
    for(int x = 0; x < 10; x++)  {
        cout<<"Pushing.. value = "<<x+1<<endl;
        myqueue.push(x+1);
    }
    cout<<endl;
    cout<<"Is queue Empty ? - "<<(myqueue.empty() ? "yes" : "no")<<endl;

    // Getting the size of queue in STL
    cout<<"queue SIZE - "<<myqueue.size()<<endl;

    // Getting the top of queue in STL queue object
    cout<<"CURRENT queue front - "<<myqueue.front()<<endl;
    cout<<"CURRENT queue back - "<<myqueue.back()<<endl<<endl;


    // Popping elements from the queue;
    cout<<"------ Popping 5 elements from the queue ---------"<<endl;
    for(int x = 0; x < 5; x++) {
        cout<<"Popping... value = "<<myqueue.front()<<endl;
        myqueue.pop();
    }
    cout<<endl;
    cout<<"Is queue Empty ? - "<<(myqueue.empty() ? "yes" : "no")<<endl;
    cout<<"queue SIZE - "<<myqueue.size()<<endl;
    cout<<"CURRENT queue front - "<<myqueue.front()<<endl;
    cout<<"CURRENT queue back - "<<myqueue.back()<<endl<<endl;


    cout<<"-------------- Clearing the queue -----------------"<<endl;
    while(!myqueue.empty()) {
        cout<<"Popping... value = "<<myqueue.front()<<endl;
        myqueue.pop();
    }
    cout<<endl;
    cout<<"Is queue Empty ? - "<<(myqueue.empty() ? "yes" : "no")<<endl;
    cout<<"queue SIZE - "<<myqueue.size()<<endl;
    cout<<"CURRENT queue front - "<<myqueue.front()<<endl;
    cout<<"CURRENT queue back - "<<myqueue.back()<<endl<<endl;

    return 0;
}