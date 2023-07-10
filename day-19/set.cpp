#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;

    s.insert(5);
    s.insert(43);
    s.insert(23);
    s.insert(23);
    s.insert(5);
    s.insert(23);
    s.insert(8);

    for(int i :s){
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(s.begin());

    for(int i :s){
        cout << i << " ";
    }
    cout << endl;

    cout << "8 is present " << s.count(8) << endl;


}