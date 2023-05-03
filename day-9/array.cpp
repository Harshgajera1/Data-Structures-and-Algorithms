#include<iostream>
using namespace std;

void printArr (int arr[],int size) {
    for(int i=0;i<size;i++){
        cout << arr[i] << " size " << sizeof(arr[i]) << endl;
    }
}

int main () {

    // int frinds[12] = {32,5,85};
    int friends[12] = {9};

    // cout << "value of 2 index " << second[8];
    // }

    cout << sizeof(int);

    printArr(friends,8);

    char ch[5] = {'a','b','c','d','e'};
    for(int i=0;i<5;i++){
        cout << ch[i] << " ";
    }


    double doubleArr[7];
    float floatArr[8];
    bool boolArr[4];
}