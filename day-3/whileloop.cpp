#include <iostream>
using namespace std;

int main() {
    // ---------- 1 ------------
    // int n, i = 1;
    // cin >> n;

    // while(i<=n){
    //     cout << i << " ";
    //     i += 1;
    // }

    // --------- 2 ------------- sum on n value
    // int sum = 0, i = 1,n;
    // cin >> n;

    // while(i<=n){
    //     sum += i;
    //     i++;
    // }

    // cout << "sum of " << n << " is : " << sum << " ";

    // ------------ 3 ------------- Even number in n
    // int n,value = 2;
    // cin >> n;

    // while(value <= n){
    //     cout << value <<  " ";
    //     value += 2;
    // }

    //------------- 4 -------------- check prime number 
    int n,value = 2,prime = 0,notPrime = 0;

    cin >> n;
    while(value <= n){
        if(n%value == 0){
            notPrime +=1;
            cout << "Not Prime number " << value << endl;
        }
        else{
            prime += 1;
            cout << "Prime number " << value << endl;
        }
        value += 1;
    }
    cout << "Prime values are : " << prime << endl;
    cout << "Not prime values are : " << notPrime << endl;


}