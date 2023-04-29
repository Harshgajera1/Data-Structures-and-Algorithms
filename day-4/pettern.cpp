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
    // int n,i=1;
    // cin >> n;
    // while (i<=n)
    // {
    //     int j=1;
    //     while (j<=i)
    //     {
    //         cout << "*";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    
    // ------------- 4 ------------
    // int i=1,n,count =1;
    // cin >> n;
    
    // while (i <= n)
    // {
    //     int j=1;
    //     while(j<=i){
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // ------------- 5 ---------------
    // int n,row=1;
    // cin >> n;
    // while (row <=n)
    // {
    //     int col = 1,count = row;
    //     while (col <= row)
    //     {
    //         //============== logic 1 ================
    //         // cout << count << " ";
    //         //============== logic 2 ================
    //         cout << row+col-1 << " ";
    //         count++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }


    // ------------ 6 -------------
    // int n,row=1;
    // cin >> n;
    // while (row <= n)
    // {
    //     int col=0;
    //     while (col < row)
    //     {
    //         cout << row - col << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // ----------- 7 -------------
    // int n,row=1;
    // cin >> n;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while(col <=n){
    //         char value = 'A'+row-1 ;
    //         cout << value;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // ---------- 8 ---------------
    // int n,row = 1;
    // cin >> n;
    // while (row<=n){
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char value = 'A'+col-1;
    //         cout << value;
    //         col ++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // ----------- 9 ----------
    // int n,row=1,temp=0;
    // cin >> n;
    // while (row<=n)
    // {
    //     int col = 1;
    //     while(col <= n){
    //         char value = 'A'+temp;
    //         cout << value;
    //         temp++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    

    // ---------- 10 --------------
    // int n,row=1;
    // cin >> n;
    // while (row<=n)
    // {
    //     int col = 1;
    //     while(col <= n){
    //         char value = 'A'+row+col-2;
    //         cout << value;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // ---------- 11 -------------
    int n,row=1;
    cin >> n;
    while(row<=n){
        int col=1;
        while (col<=row)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    
    
    
    
    
}