#include<iostream>
using namespace std;

void printArray(char arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int sumArray(int arr[],int size){
    int sum = 0,i=0;
    while(i<size){
        sum += arr[i];
        i++;
    }
    return sum;
}

int main() {
    int n;
    // cout << "Enter Pattern Size: ";
    // cin >> n;

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

    // for(int row = 1; row <= n; row++){
    //     for(int space1=1;space1<=n-row ; space1++){
    //         cout << "  ";
    //     }

    //     for(int col1=1;col1 <=row;col1++){
    //         cout << col1 << " ";
    //     }
    //     // for(int col2=n-1;col2>n-row;col2--){
    //     //     cout << col2-(n-row) << " ";
    //     // }
    //     for(int col2=1;col2<row;col2++){
    //         cout << row-col2 << " ";
    //     }
    //     cout << endl;
    // }

    // F 
    // E F
    // D E F
    // C D E F
    // B C D E F
    // A B C D E F

    // int row = 1,temp=0;
    // while(row <= n){
    //     int col=1;
    //     while(col<=row){
    //         char ch = 'A' + n-col;
    //         cout << ch;
    //         temp++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int array[100];
    // cout << array[76];

    int first[7] = {1,2,3};

    int i=0;
    // while(i< sizeof(first)/sizeof(int)){
    //     cout << first[i] << endl;
    //     i++;
    // }
    // cout << first[5];

    // char second[4] = {'A','b'};
    // printArray(second,4);

    int getArr[34],size;
    cout << "Enter array size : ";
    cin >> size;

    for(int i =0;i<size; i++){
        cin >> getArr[i];
    }

    cout << "Sum Of Array " << sumArray(getArr,size);
}