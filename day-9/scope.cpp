#include<iostream>
using namespace std;

void update(int arr[],int n) {
    cout << "Inside the function" << endl;

    arr[0] = 43;

    for(int i=0;i<3;i++){
        cout << arr[i] << "  ";
    }

    cout << "\nOutside the function\n\n" ;
}   

int main () {
    int arr[3] = {3,32,-23};

    update(arr,3);

    for(int i=0;i<3;i++){
        cout << arr[i] << "  ";
    }
}