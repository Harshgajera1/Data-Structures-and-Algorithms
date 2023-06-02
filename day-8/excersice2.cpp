#include<iostream>
using namespace std;

int AP () {
    int n;
    cout << "Enter AP value : ";
    cin >> n;
    return (3 * n) + 7;
}

int setBit (int a) {
    int ans = 0;
    while (a!=0)
    {
        int bit = a&1;
        if(bit) ans++;
        a = a/2;
    }
    return ans;
}

int fibonacci (int n) {
    int sum = 0,a = 0,b = 1;
    for(int i=1;i<=n;i++){
        sum = a + b;
        a = b;
        b = sum;
    } 
    return sum;
}

int main () {

    // --------------- hw_1 --------------------
    // cout << "AP is " << AP();

    // --------------- hw_2 --------------------
    int a,b;
    cout << "Enter a value : ";
    cin >> a;
    cout << "Enter b value : ";
    cin >> b;

    cout << "Bit is " << setBit(a) + setBit(b);


    // --------------- hw_3 --------------------
    // int n;
    // cout << "Enter number : ";
    // cin >> n;

    // cout << fibonacci(n);



    

}