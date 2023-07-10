#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;
    q.push("harsh");
    q.push("gajera");
    q.push("coder");

    cout << "First element - " << q.front() << endl; 
    cout << "Last element - " << q.back() << endl; 

    // harsh remove
    q.pop();

    cout << "First element - " << q.front() << endl; 
    cout << "Last element - " << q.back() << endl; 

    q.pop();
    cout << "First element - " << q.front() << endl; 

    cout << "Size - " << q.size() << endl; 

}