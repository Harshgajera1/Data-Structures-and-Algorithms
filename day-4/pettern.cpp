#include <iostream>
using namespace std;

int main() {
    // ------------ 1 -------------
    // int n,i=1;
    // cin >> n;

    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << j;
    //         // cout << n - j +1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // ------------- 2 -------------
    // int n,i=1,value =1;
    // cin >> n;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while(j<=n){
    //         cout << value << ' ';
    //         value++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ----------- 3 --------------
    int n,i=1;
    cin >> n;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
    
}