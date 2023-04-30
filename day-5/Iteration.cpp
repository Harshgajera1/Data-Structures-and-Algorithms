#include<iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter count value : " ;
    // cin >> n;

    // for(int i=1;i<=n;i++){
    //     cout << "hyy " << endl;
    //     cout << "How are you? harsh" << endl;
    //     continue;
    //     cout << "I'm fine." << endl;
    // }

    // -------- hw-2 -----------
    // int n;
    // cout << "Enter count value : " ;
    // cin >> n;
    // for(int i=0;i<=n;i--){
    //     cout << i << " ";
    //     i++;
    // }
    // infinity

    // ----------- hw-3 -------------
    // int n;
    // cout << "Enter count value : " ;
    // cin >> n;
    // for(int i=0; i<=n; i+=2)
    // {
    //     cout << i << endl;
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }
    
    //------------- hw -4 ---------------
    // int n;
    // cout << "Enter count value : " ;
    // cin >> n;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<=n;j++){
    //         // cout << i << " " << j << endl;

    //         if(i+j == 10){
    //             break;
    //         }
    //         cout << i << " " << j << endl;
    //     }
    // }

    // --------------------------------
    int n;
    cout << "Enter Product value : " ;
    cin >> n;
    // cout << n/10 << endl;
    // cout << n%10 << endl;
    int product = 1;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        cout << digit << endl;
        product *= digit;
        sum += digit; 
        n = n/10;
    }
    int ans = product - sum;
    cout << ans;
}