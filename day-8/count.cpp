#include<iostream>
using namespace std;

// whenever function not return anything, then we should use void
void counter (int n) {
    for(int i=1;i<=n;i++){
        cout << i <<endl;
    }
    // it is optional
    // return ;
}

int main () {
    int num;
    cout << "Enter count value : ";
    cin >> num;
    counter(num);
}