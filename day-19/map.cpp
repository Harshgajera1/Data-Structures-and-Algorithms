#include<iostream>
#include<map>
using namespace std;

int main() {
    map<int,string> m;

    m[1] = "hello";
    m[4] = "harsh";
    m[9] = "gajera";

    m.insert({6,"howdy"});

    cout << "before erase" << endl;
    for(auto i:m){
        cout << i.first << " - " << i.second << endl;
    }
    cout << endl;

    int n = 2;
    cout << n << " is present " << m.count(n) << endl;

    m.erase(4);
    cout << "after erase" << endl;
    for(auto i:m){
        cout << i.first << " - " << i.second << endl;
    }

    auto it = m.find(6);
    for(auto i=it; i!=m.end() ; i++){
        cout << (*i).first << endl;
    }
}