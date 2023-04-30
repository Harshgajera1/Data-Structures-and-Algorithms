#include<iostream>
#include<math.h>
using namespace std;

int main(){
    // int n;
    // cin >> n;

    // int ans = 0;
    // int i = 0;
    // while (n != 0) {
    //     // for reminder
    //     int bit = n & 1;
    //     // cout << n  << " " << bit << endl;
    //     if(n<0){
    //         ans = (!bit * pow(10,i)) + ans;
    //     }else{
    //         ans = (bit * pow(10,i)) + ans;
    //     }
    //     n = n >> 1; // n / 2
    //     i++;
    // }
    // cout << "Answer is " << ans << endl;

    int n;
    cin >> n;
    int i=0, ans = 0;
    while (n!=0)
    {
        int bit = n&1;
        int digit = n % 10;
        // cout << bit << endl;
        if(digit == 1){
            ans = ans + pow(2,i);
        }
        i++;
        n = n/10;
    }
    cout << ans << endl;
    
}