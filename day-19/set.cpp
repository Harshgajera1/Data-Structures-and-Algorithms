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

    int n = 23;

    // count
    cout << n << " is present " << s.count(n) << endl;

    // find
    set<int>::iterator itr = s.find(23);

    cout << "value present -- " << *itr << endl;

    for(auto it = itr;it != s.end();it++){
        cout << *it << " ";
    }
    cout << endl;

}