#include <iostream>
#include <map>
#include <utility>

using namespace std;

typedef map<char,int> Map;

void print_map(Map mp) {
    cout<<endl;
    cout<<"- MAP -"<<endl;
    // Using begin() and end() function to traverse the map
    for(Map::iterator it = mp.begin(); it != mp.end(); it++) {
        cout<<it->first<<" --> "<<it->second<<endl;
    }
    cout<<"Map Size - "<<mp.size()<<endl<<endl;;
}

int main() {

    map<char, int> mymap;

    cout<<"------ Initialising Map ---------"<<endl;
    // checking the map size
    cout<<"MAP SIZE - "<<mymap.size()<<endl;
    // checking if the map is empty
    cout<<"Is Map empty ? - "<<(mymap.empty() ? "yes" : "no")<<endl<<endl;

    cout<<"------ Inserting values into map --------"<<endl;
    cout<<"Inserting.."<<endl<<endl;
    mymap.insert(pair<char, int>('a', 10));
    mymap.insert(pair<char, int>('b', 20));
    
    mymap.insert(make_pair('c', 30));
    mymap.insert(make_pair('d', 40));

    print_map(mymap);

    cout<<"------ Erasing values from map --------"<<endl;
    cout<<"Erasing entry with key (a).."<<endl;
    // erasing values from the map
    mymap.erase('a');
    cout<<"Erasing entry with key (c).."<<endl;
    mymap.erase('c');

    print_map(mymap);

    cout<<"------ Clearing Map --------"<<endl;
    cout<<"Clearing.."<<endl;
    // clearing all entries
    mymap.clear();

    print_map(mymap);
    cout<<endl;

    return 0;
}