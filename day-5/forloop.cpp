#include<iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter count value : " ;
    // cin >> n;
    // int i = 1;
    // for(;;){
    //     if(i<=n){
    //         cout << i << endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }

    // int n;
    // cout << "Enter count value : " ;
    // cin >> n;
    // for(int i=1,j=1,k=0; i>0 && j>=1 && k>=0 ;i--,j--,k--){
    //     cout << i << j << k << endl;
    // }

    // ------------- sum of n value --------------
    // int n,sum=0;
    // cout << "Enter count value : " ;
    // cin >> n;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // cout << sum << endl;

    // ----------- fibonacci series ---------------
    // int n,a=0,b=1;
    // cout << "Enter count value : " ;
    // cin >> n;
    // for(int i=1;i<=n;i++){
    //     int nextNumber = a+b;
    //     cout << nextNumber << " ";
    //     a = b;
    //     b = nextNumber;
    // }

    // ---------- prime number ------------
    int n;
    cout << "Enter count value : " ;
    cin >> n;
    bool isPrime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << n << " is prime number";
    }
    else {
        cout << n << " is not prime number";
    }
    
}