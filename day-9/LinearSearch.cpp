#include<iostream>
using namespace std;

bool serch (int arr[],int key) {
    for(int i =0; i<10;i++){
        if(arr[i] == key) return 1;
    }
    return 0;
}

int main () {
    int key;
    int arr[10] = {21,43,4,6,05,-312-432,45,0,3};

    cout << "Enter key : ";
    cin >> key;

    int found = serch(arr,key);

    if(found){
        cout << "Key is found";
    }else{
        cout << "Key is not found";
    }
}