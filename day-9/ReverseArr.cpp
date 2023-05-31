#include<iostream>
using namespace std;

int reverse (int arr[],int size) {
    int start = 0;
    int end = size-1;
    while (start <= end){
        // swap(arr[start],arr[end]);

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int swapAlternate (int arr[],int size) {
    for(int i=0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void print (int arr[],int size) {
    for(int i=0;i<size;i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}   

int main() {
    int arr[10] = {2,32,3,54,-32,3,-56,-23,32,8};
    int arr2[5] = {-321,43,897,2,-87};

    // reverse(arr,10);
    // reverse(arr2,5);

    swapAlternate(arr,10);
    swapAlternate(arr2,5);

    print(arr,10);
    print(arr2,5);
}