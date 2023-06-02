#include<iostream>
using namespace std;

// bool serch (int arr[],int key) {
//     for(int i =0; i<10;i++){
//         if(arr[i] == key) return 1;
//     }
//     return 0;
// }

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }  
    return 0; 
}

int main () {
    // int key;
    // int arr[10] = {21,43,4,6,05,-312-432,45,0,3};

    // cout << "Enter key : ";
    // cin >> key;

    // int found = serch(arr,key);

    // if(found){
    //     cout << "Key is found";
    // }else{
    //     cout << "Key is not found";
    // }

    int arr[10] = {432,2,32,43,32,31,-23,-25,45,-234};
    int key;
    cout << "Enter key value : ";
    cin >> key;

    bool found = search(arr,10,key);
    if(found){
        cout << "Key is present" << endl;
    }else{
        cout << "Key is absent" << endl;
    }



}