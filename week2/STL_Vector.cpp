#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> vector1;
    cout<<"Populating a vector with 10 elements from 0 to 9"<<endl;
    for(int i=0;i<10;i++){
        vector1.push_back(i);
    }
    cout<<"Changing element at 1st position to 50"<<endl;
    vector1[5]=50;
    for(auto iter = vector1.begin();iter!=vector1.end();iter++){
        cout<<*iter<<"\t";
    }
    cout<<endl;

    cout<<"Vector element at pos 1 using at() method="<<vector1.at(1)<<"\
     which is same as accessing using [] operator "<<vector1[1]<<endl;
    
    cout<<"Vector size = "<<vector1.size()<<endl;
    
    cout<<"Inseting 25 to 2nd position"<<endl;
    vector1.insert(vector1.begin()+2,25);
    
    cout<<"New vector size = "<<vector1.size()<<endl;
    vector1.pop_back();
    for(int i=0;i<vector1.size();i++){
        cout<<vector1[i]<<"\t";
    }
    cout<<endl;

    cout<<"Sorting vector"<<endl;
    sort(vector1.begin(),vector1.end(),greater<int>());
    for(auto iter = vector1.begin();iter!=vector1.end();iter++){
        cout<<*iter<<"\t";
    }

}