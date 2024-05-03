#include <iostream>
#include <iomanip>
#include <list>
#include <array>
#include <queue>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

template <typename T> void printVector(const vector<T> &v);
template <typename T> void printList(const list<T> &list1);


ostream& doubletab(ostream& COUT){
    return COUT << "\t\t";
}

ostream& newLine(ostream& COUT){
    return COUT << "\n" << flush;
}


int main(){

    char name[10];
    cin.get(name,10);
    cout << name;



    return 0;
}



template <typename T> void printVector(const vector<T> &v){
    for (auto i = v.cbegin(); i != v.cend(); i++){
        cout << *i << " ";
    }
    cout << endl;
}
