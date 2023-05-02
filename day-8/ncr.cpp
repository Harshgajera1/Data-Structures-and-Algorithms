#include<iostream>
using namespace std;

int fectorial (int a) {
    int ans =1;
    for(int i=1;i<=a;i++){
        ans *= i;
    }
    return ans;
}

int nCr () {
    int n,r;
    cout << "Enter n value : ";
    cin >> n;
    cout << "Enter r value : ";
    cin >> r;
    int ncr = fectorial(n) / (fectorial(r) * fectorial(n-r));
    // return ncr;
}

int main() {
    cout << nCr();
}