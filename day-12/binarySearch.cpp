#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }

        // go to right side
        if(key > arr[mid]){
            start = mid + 1;
        }
        // go to left side
        else{ 
            end = mid-1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
    
}

int main(){
    int even[6] = {2,32,54,76,345,563};
    int odd[7] = {-12,5,34,54,65,87,98};

    int index = binarySearch(even,6,760);
    int index1 = binarySearch(odd,7,98);

    cout << index << " " << index1 << endl;
}