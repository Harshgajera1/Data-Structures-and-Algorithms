#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sortOne(int arr[],int size){
    int left=0,right=size-1;
    while(left<right){
        // cout << "step " << left << endl;
        // printArr(arr,size);
        // cout << endl;
        while (arr[left] == 0)
        {
            left++;
        }

        while (arr[right] == 1)
        {
            right--;
        }
         
        if(left < right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int shortThree(int arr[],int size){
    int zero = 0,one=0,two=size-1,temp;
    while (one<two)
    {
        // cout <<"Arr working " << endl;
        // printArr(arr,size);
        switch(arr[one]){
                case 0: {
                    // temp = arr[one];
                    // arr[one] = arr[zero];
                    // arr[zero] = temp;
                    swap(arr[zero],arr[one]);
                    zero++;
                    one++;
                    break;
                }
                case 1: {
                    one++;
                    break;
                }
                case 2: {
                    // temp = arr[one];
                    // arr[one] = arr[two];
                    // arr[two] = temp;
                    swap(arr[one],arr[two]);
                    two--;
                    break;
                }
            }
    }
    
}

int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};
    int arr1[9] = {0,2,2,1,0,1,1,0,2};

    sortOne(arr,8);
    shortThree(arr1,9);
    printArr(arr1,9);
}