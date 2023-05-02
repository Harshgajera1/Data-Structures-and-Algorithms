#include<iostream>
#include<math.h>
using namespace std;

int main() {
    // input value include in 2 power of 30 between
    int n;
    cout << "Enter Value : ";
    cin >> n;
    int ans = 1;

    //  ------------  1  ----------------
    // for(int i=0;i<=30;i++){6
    //     int sum = pow(2,i);
    //     if(sum == n){
    //         return true;
    //     }
    // }

    //  ------------  2  ----------------
    for(int i=0;i<=30;i++){
        if(ans == n){
            return true;
        }
        cout << ans << endl;
        if(ans < INT32_MAX)
        ans *= 2; 
    }
    
}