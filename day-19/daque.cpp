#include<iostream>
#include<deque>
using namespace std;

int main(){
    
    deque<int> d;

    d.push_back(54);
    d.push_front(4);
    d.push_front(2);

    for(int i:d){
        cout << i << " ";
    }
    cout << endl << endl;

    cout << "first index value " << d.at(1) << endl << endl;

    d.pop_back();

    for(int i:d){
        cout << i << " ";
    }
    cout << endl << endl;
    // cout << d.size();
    d.erase(d.begin(),d.begin()+1);

    cout << "Empty or not " << d.empty();
}