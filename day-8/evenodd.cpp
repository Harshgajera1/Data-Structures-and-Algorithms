#include<iostream>
using namespace std;

// Even = 1
// Odd = 0
bool inEven (int a) {
    if(a & 1){
        return 0;
    }   
    return 1;
}

int main() {
    int ans = inEven(353589);

    if(ans){
        cout << "Number is even" << endl;
    }
    else {
        cout << "Number is odd" << endl;
    }
}