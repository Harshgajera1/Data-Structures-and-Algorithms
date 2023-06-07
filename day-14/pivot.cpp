#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s=0,e=n-1,mid = s+(e-s)/2;
    while(s<e){
        cout << "s-" << s << "e-" << e << "mid-" << mid << endl;
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int main(){
    int arr[6] = {3,8,10,12,8,4 };

    cout << "pivot is " << getPivot(arr,6);
}