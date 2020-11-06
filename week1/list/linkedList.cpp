#include <iostream>
#include <vector>
#include <chrono>
#include <list>
using namespace std;
using namespace std::chrono;
class ListInterface{
    public:
        virtual void set(int position, int value)=0;
        virtual int get(int position)=0;
};

class ArrayExample : public ListInterface{
    vector<int> v;
    public:
    ArrayExample(){
        v.resize(10);
    }
    void set(int position,int value){
        if(position<v.size()){
            v[position]=value;
        }
        else{
            v.push_back(value);
        }
    }
    int get(int position){
        if(position<v.size())
            return v[position];
        else
            return -1;
    }
};

class Node1{
    public:
    int position,value;
    Node1* next=NULL;
    Node1(int p,int val){
        value=val;
        position=p;
    }
};

class List1:public ListInterface{
    Node1* head=NULL;
     public:
     void set(int position,int value){
        if(head==NULL){
            Node1* n=new Node1(position,value);
            n->next=NULL;
            head=n;
            return;
        }
        Node1* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        Node1* n =new Node1(position,value);
        n->next=temp->next;
        temp->next=n;
    }
    
    int get(int position){
        Node1* temp=head;
        while(temp!=NULL ){
            if(temp->position==position)
                break;
            temp=temp->next;
            
        }
        if(temp!=NULL)
            return temp->value;
        else 
            return -1; 
    }

};


void printTime(ListInterface& l, int pos){
    auto start=high_resolution_clock::now(); 
    int a=l.get(pos);
    auto end=high_resolution_clock::now(); 
    auto duration =  duration_cast<nanoseconds>(end-start);
    cout << "Total time taken to access "<<pos<< "th element= "<<duration.count()<< " nano seconds" <<endl;
}

int main(){
    ArrayExample* arr=new ArrayExample();
    auto start = high_resolution_clock::now(); 
    for(int i=0;i<100000000;i++)
        arr->set(i,i*2);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end-start);

    cout << "Total time taken to populate vector of size 100000000 ="<<duration.count()<<" nano seconds\n";
    cout<< "Accessing vector\n";
    printTime(*arr,0);
    printTime(*arr,200);
    printTime(*arr,99995);
    printTime(*arr,99996);
    printTime(*arr,99997);
    printTime(*arr,99998);
    printTime(*arr,9999699);

    List1* l1;
    l1=new List1();
    start = high_resolution_clock::now(); 
    for(int i=0;i<100000;i++)
        l1->set(i,i*2);
    end = high_resolution_clock::now();
    duration = duration_cast<nanoseconds>(end-start);
    cout << "Total time taken to populate list of size 100000 ="<<duration.count()<<" nano seconds\n";

    cout<<"Accessing list\n";
    printTime(*l1,10);
    printTime(*l1,500);
    printTime(*l1,9998);
    printTime(*l1,9999);
}