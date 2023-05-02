#include<iostream>
using namespace std;

int main() {
    // binary value to covertion in comliment and that value decimal return
    int n,mask = 0;
    cout << "Enter Value : ";
    cin >> n;
    int m = n;

    // edge case 
    if(n==0) return 1;

    while (m!=0)
    {
        mask = (mask << 1) | 1;
        // cout << mask << "  " << m << endl;
        m = m >> 1 ;
    }
    // cout << mask << ~n ;
    int ans = (~n) & mask;

    cout << ans;
    
}