#include<iostream>
#include<queue>
using namespace std;

int main() {

    // max heap
    priority_queue<int> maxi;

    // min heap
    priority_queue<int, vector<int>, greater<int> > mini; 

    maxi.push(6);
    maxi.push(32);
    maxi.push(87);
    maxi.push(23);
    maxi.push(8);

    int n = maxi.size();
    for(int i=0; i<n; i++){
        // cout << maxi.size() << "n";
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl << endl;
    
    mini.push(6);
    mini.push(32);
    mini.push(87);
    mini.push(23);
    mini.push(8);

    int n2 = mini.size();
    for(int i=0; i<n2; i++){
        cout << mini.top() << " ";
        mini.pop();
    }

    cout << endl << "Empty or not " << mini.empty();
}