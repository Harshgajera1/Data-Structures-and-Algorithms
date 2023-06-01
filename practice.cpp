#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Pattern Size: ";
    cin >> n;

    // for(int row=1;row<=n;row++){
    //     int space = n-row;
    //     while(space){
    //         cout << "  ";
    //         space--;
    //     }
    //     for(int col=1;col<row;col++){
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    for(int row = 1; row <= n; row++){
        for(int space1=1;space1<=n-row ; space1++){
            cout << "  ";
        }

        for(int col1=1;col1 <=row;col1++){
            cout << col1 << " ";
        }
        // for(int col2=n-1;col2>n-row;col2--){
        //     cout << col2-(n-row) << " ";
        // }
        for(int col2=1;col2<row;col2++){
            cout << row-col2 << " ";
        }
        cout << endl;
    }
}