#include<iostream>
#include<math.h>
using namespace std;

int main () {
    int n,sum=0,i=0;
    cout << "Enter value : ";
    cin >> n;
    // if(n > pow(-2,31) || n > (pow(2,31)-1)){
    //     cout << "456";
    // } 

    while (n!=0)
    {
        int digit = n%10;
        // cout << digit << endl;
        // sum = (digit * pow(10,i)) + sum;

        if(n > INT32_MAX/10 || n < INT32_MIN / 10 ){
            return 0;
        }
        // cout << INT8_MAX << endl;
        // cout << INT16_MAX << endl;
        // cout << INT32_MAX << endl;

        sum = ( sum * 10 ) + digit;
        i++;
        n = n / 10;
    }
    cout << "Answer is " << sum;
    
}