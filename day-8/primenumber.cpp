#include<iostream>
using namespace std;

bool isPrime (int num) {
    // int prime = true;
    // for(int i=2; i<num;i++){
    //     if(!(num%i)){
    //         prime = false;
    //         break;
    //     }
    // }
    // return prime;

    for(int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;

}

int main() {
    int n;
    cout << "Enter number : ";
    cin >> n;

    if(isPrime(n)){
        cout << n << " is prime.";
    }
    else {
        cout << n << " is not prime.";
    }
}