#include<iostream>
#include<stack>
using namespace std;

int main () {
    stack<string> s;

    s.push("harsh");
    s.push("gajera");
    s.push("coder");

    cout << "Top element - " << s.top() << endl;
    s.pop();

    cout << "Top element - " << s.top() << endl;
    cout << "Size of stack - " << s.size() << endl;
    cout << "Empty or not - " << s.empty() << endl;
}