#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vector1;
    list<int> list1;
    for(int i=0;i<10;i++){
        vector1.push_back(i);
        list1.push_back(i*2);
    }
    vector1[5]=50;
    for(auto iter = vector1.begin();iter!=vector1.end();iter++){
        cout<<*iter<<"\t";
    }
    cout<<endl;

    list<int>::iterator it = list1.begin(); 
    advance(it, 2); 
    list1.insert(it, 5); 

    
    for(auto iter=list1.begin();iter!=list1.end();iter++){
        cout<<*iter<<"\t";
    }
    cout<<endl;
    cout<<"Vector element at pos 1 using at() method="<<vector1.at(1)<<" which is same as accessing using [] operator "<<vector1[1]<<endl;
    sort(vector1.begin(),vector1.end(),greater<int>());
    for(auto iter = vector1.begin();iter!=vector1.end();iter++){
        cout<<*iter<<"\t";
    }
    cout<<endl;
    list1.sort();
    list1.reverse();
    for(auto iter=list1.begin();iter!=list1.end();iter++){
        cout<<*iter<<"\t";
    }
}