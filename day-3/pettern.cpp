#include <iostream>
using namespace std;

int main(){
    // ------------ 1--------------
    // int n,i = 0;
    // cin >> n;
    // while(i < n){
        
    //     int j =0;
    //     while(j<n){
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ----------- 2 ---------------
    int n,c = 1;
    cin >> n;

    while (c <= n){
        int r = 1;
        while(r <= n){
            cout << c;
            r++;
        }
        cout << endl;
        c++;
    }
}
    