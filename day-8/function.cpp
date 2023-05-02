#include<iostream>
using namespace std;

int power () {
    int a,b,ans = 1;
    cout << "Enter value : ";
    cin >> a ;
    cout << "Enter power : ";
    cin >> b;

    for(int i=1;i<=b;i++){
        ans *= a;
    }

    return ans;
}

int main () {

    cout << "Power is " << power() << endl;
    cout << "Power is " << power() << endl;
    cout << "Power is " << power() << endl;
    cout << "Power is " << power() << endl;
}