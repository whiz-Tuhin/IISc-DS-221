#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> list1;
    cout<<"Populating a list with 10 elements with multiples of 2 from 0 to 18"<<endl;
    for(int i=0;i<10;i++){
        list1.push_back(i*2);
    }
    list<int>::iterator it = list1.begin();
    cout<<"Element at position 0="<<*it<<endl;
    cout<<"Elements before inserting new item"<<endl;
    for(auto iter=list1.begin();iter!=list1.end();iter++){
        cout<<*iter<<"\t";
    }
    cout<<endl;
    advance(it, 2); 
    list1.insert(it, 5); 
    cout<<"Elements after inserting 5 at position 2"<<endl;
    for(auto iter=list1.begin();iter!=list1.end();iter++){
        cout<<*iter<<"\t";
    }
    cout<<endl;
    cout<<"Item iterator pointing to after inserting item = "<<*it<<endl;
    list1.erase(it);
    cout<<"Elements after removing 3rd item"<<endl;
    for(auto iter=list1.begin();iter!=list1.end();iter++){
        cout<<*iter<<"\t";
    }
    cout<<endl;
    cout<<"Sorting the elements of list and reversing it"<<endl;
    list1.sort();
    list1.reverse();
    for(auto iter=list1.begin();iter!=list1.end();iter++){
        cout<<*iter<<"\t";
    }
}