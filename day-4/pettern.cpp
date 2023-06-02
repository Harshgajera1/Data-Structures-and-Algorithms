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
    // int n,row=0;
    // cin >> n;
    // while (row < n)
    // {
    //     int col = 0;
    //     while(col <n){
    //         char value = 'A'+row ;
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
    // int n,row=1;
    // cin >> n;
    // while(row<=n){
    //     int col=1;
    //     while (col<=row)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // ----------- 12 ---------------
    // int n,row=1,temp = 0;
    // cin >> n;
    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         char ch = 'A' + temp;
    //         cout << ch;
    //         temp++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // ----------- 13 ------------
    int n,row =1;
    cin >> n;
    while (row<=n)
    {
        int col = 1;
        char temp = 'A' + n - row;
        while (col<=row)
        {
            // ========= logic 1 ============
            // char ch = 'A' + row + col - 2;
            // cout << ch << " ";
            // ========= logic 2 ============
            char ch = 'A' + n - row + col -1;
            cout << temp << " ";
            temp++;
            col++;
        }
        cout << endl;
        row++;
    }
    
    // ---------------- 14 ---------------
    // int n,row=1;
    // cin >> n;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col<=n)
    //     {
    //         // char ch = 'A' + row + col - 2;
    //         char ch = 'A' + row + col - 2;
    //         cout << ch << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // ------------ 15 ---------------
    // int n,row = 1;
    // cin >> n;
    // while (row <=n)
    // {
    //     int space = n-row,col =1;
    //     // while(col<=space){
    //     //     cout << "  " ;
    //     //     col++;
    //     // }
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
        
    //     int star = 1;
    //     while (star<=row)
    //     {
    //         cout << '*' << ' ';
    //         star++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // ------------- 16 -------------
    // int n,row = 0;
    // cin >> n;
    // while (row<n)
    // {
    //     int col = 0;
    //     while (col<n-row)
    //     {
    //         cout << "* ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
        
    // }
    
    // ----------- 17 -------------
    // int n,row = 1;
    // cin >> n;
    // while (row <= n)
    // {
    //     int space = row-1;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
        

    //     int col=1;
    //     while(col <= n-row+1){
    //         cout << "* ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // ---------- 18 --------------
    // int n,row = 1;
    // cin >> n;
    // while (row <= n)
    // {
    //     int space = row - 1;
    //     while (space)
    //     {
    //         cout << "  " ;
    //         space--;
    //     }

    //     int col=1;
    //     while (col<=n-row+1)
    //     {
    //         cout << row << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // ------------- 19 ---------------
    // int n,row = 1;
    // cin >> n;
    // while (row<=n)
    // {
    //     int space = n-row;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }

    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << row << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    

    // ---------- 20 --------------
    // int n,row =1;
    // cin >> n;
    // while (row <= n)
    // {
    //     int space = row-1;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     int col = 1;
    //     while (col<=n-row+1)
    //     {
    //         cout << row+col-1 << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    

    // -------------- 21 -------------
    // int n,row = 1,temp=1;
    // cin >> n;
    // while (row<=n)
    // {
    //     int space = n-row;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }

    //     int col=1;
    //     while(col<=row){
    //         cout << temp << " ";
    //         temp++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;   
    // }

    //------------- 22 --------------
    // int n,row=1;
    // cin >> n;
    // while (row <= n)
    // {
    //     int space = n-row;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     int col1=1;
    //     while (col1<=row)
    //     {
    //         cout << col1 << " ";
    //         col1++;
    //     }
    //     // ============= logic 1 ===============
    //     // int col2 = 1;
    //     // while (col2<row)
    //     // {
    //     //     cout << row - col2 << " ";
    //     //     col2++;
    //     // }
    //     // ============= logic 2 ===============
    //     int col2 = row-1;
    //     while (col2)
    //     {
    //         cout << col2 << " ";
    //         col2--;
    //     }
    //     cout << endl;
    //     row++;
    // }
    

    // ------------- 23 -------------
    // int n,row=1;
    // cin >> n;
    // while (row<=n)
    // {
    //     int col1 = 1;
    //     while (col1<=n-row+1)
    //     {
    //         cout << col1 << " ";
    //         col1++;
    //     }
    //     // ============= logic 1 =================
    //     // int space1 = row - 1;
    //     // while (space1)
    //     // { 
    //     //     cout << "  ";
    //     //     space1--;
    //     // }
    //     // int space2 = row - 1;
    //     // while (space2)
    //     // {
    //     //     cout << "  ";
    //     //     space2--;
    //     // }

    //     // ============= logic 2 =================
    //     int space = (row-1)*2;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
        
    //     int col2 =1;
    //     while (col2<=n-row+1)
    //     {
    //         cout << n - col2 + 1 << " ";
    //         col2++;
    //     }

    //     cout << endl;
    //     row++;
    // }
    
    
}