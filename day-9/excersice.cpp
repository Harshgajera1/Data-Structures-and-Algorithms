#include<iostream>
#include<math.h>
using namespace std;

int arrSum (int arr[],int size) {
    int sum = 0;
    for(int i= 0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}

int main () {
    // int size,arr[100];

    // cout << "Enter size of arr : " << endl;
    // cin >> size;

    // for(int i=0;i<size;i++){
    //     cin >> arr[i];
    // }

    // cout << "Sum of arr is " <<arrSum(arr,size);

    int n,p;
    cout << "Enter value : ";
    cin >> n;
    // cout << "Enter value power : ";
    // cin >> p;

    // int isPower = false;
    // while(n!=0){
    //     int bit = n&1;
    //     if(bit){isPower = true;}
    //     n = n >> 1;
    // }
    
    int isPower = false;
    for(int i=1;i<=32;i++){
        int p = pow(2,i);
        if(p == n) isPower = true;
    }

    cout << "2 power in " << isPower ;
}