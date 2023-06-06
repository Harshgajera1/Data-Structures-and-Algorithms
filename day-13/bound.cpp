#include<iostream>
using namespace std;

int firstOccurrence(int arr[],int n,int key){
    int s = 0,e = n-1,mid = s + (e-s)/2,ans = -1;

    while (s <= e)
    {
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        } 
        else if(key>arr[mid]) s = mid+1;
        else e = mid-1;

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccurrence(int arr[],int n,int key){
    int s = 0,e = n-1,mid = s + (e-s)/2,ans = -1;

    while (s <= e)
    {
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        } 
        else if(key>arr[mid]) s = mid+1;
        else e = mid-1;

        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int even[11] = {-12,-4,2,2,3,3,3,3,3,43,65};
    cout << firstOccurrence(even,11,3) << endl;
    cout << lastOccurrence(even,11,3);
}