#include <iostream>
#include <chrono>
#include "c1.cpp"
#include "c3.cpp"
using namespace std;
using namespace std::chrono;

void readAndWriteIOStream(){
    int dummyVar1;
    int dummyVar2=5;
    float dummyFloat1=5.5;
    cout << "This is output to console IO. Does not include a new line automatically.\n";
    cout << "We can append variables to out stream " << dummyVar2 << " and " << dummyFloat1<<endl;
    cout << "Enter value via console\n";
    cin >> dummyVar1;
    cout << "Input value = "<< dummyVar1<<endl;
}

void readAndWriteFileStream(){
    ofstream file1;
    file1.open("file1.txt");
    cout << "Writing to file1.txt\n";
    file1 << "Dummy string written using << operator\n";
    file1.close();
    cout << "Closing file1.txt\n";
    ifstream file2;
    string line;
    file2.open("file2.txt");
    cout << "Reading from file2.txt\n";
    while(file2){
        getline(file2,line);
        cout <<" Data from file2 = "<<line<<endl;
    }
}

void longRunningFunction(){
    for(int j=0;j<10;j++){
        vector<int> simpleVector1(100);
        for(int i=0;i<100000000;i++){
            simpleVector1.push_back(rand()%10000);
        }
    }
}

int main(){
    SimpleClass1 sc1;
    // sc1.publicNoReturnFunction();
    // sc1.functionDecalredOutsideClass(2);
    SimpleClass3 sc3;
    // sc3.publicFunction1();


    // readAndWriteIOStream();
    // readAndWriteFileStream();
    cout << "Starting long running function\n";
    auto start = high_resolution_clock::now(); 
    longRunningFunction();
    auto end =high_resolution_clock::now(); 
    auto duration = duration_cast<seconds>(end-start);
    cout << "Total time taken = "<<duration.count()<<endl;
}
