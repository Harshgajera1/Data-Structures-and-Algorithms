#include<iostream>
#include<list>
using namespace std;

int main() {

    list<int> l;

    list<int> n(5,54);
    for(int i:n){
        cout << i << " ";
    }
    cout << endl;

    l.push_back(43);
    l.push_front(67);

    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "After erase ";
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

}