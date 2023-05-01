#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // ------------- decimal to binary -------------
    // int n;
    // cin >> n;

    // int ans = 0;
    // int i = 0;
    // while (n != 0) {
    //     // for reminder
    //     int bit = n & 1;

    //     // for reverse
    //     // ans = (bit * pow(10,i)) + ans;
    //     // same flow
    //     ans = (ans * 10) + bit;

    //     n = n >> 1; // n / 2
    //     i++;
    // }
    // cout << "Answer is " << ans << endl;

    // ------------------- binary to decimal -----------------
    int n;
    cin >> n;
    int i=0, ans = 0;
    while (n!=0)
    {
        // enter value last bit
        int digit = n % 10;

        if(digit == 1){
            // with 2 to multiply beacuse decimal to binary we do */2.
            ans = ans + pow(2,i);
        }

        i++;
        n = n/10;
    }
    cout << ans << endl;


    //------------ h.w -ve decimal to binary -------------- 
    // int n,ans = 0,i=0;
    // cin >> n;
    // int value = n>0;
    // if(n<0){
    //     value = n * (-1);
    // }else{ value = n; }

    // while (value != 0)
    // {
    //     int bit = value & 1;
    //     ans = (bit * pow(10,i)) + ans;
    //     value = value >> 1;
    //     i++;
    //     value >> 1;
    // }
    // cout << "Binary number is " << ans;
    
    
}