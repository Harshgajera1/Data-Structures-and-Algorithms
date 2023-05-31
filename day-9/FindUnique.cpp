#include<iostream>
#include<vector>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for(int i=0;i<size; i++){
        // cout << ans << endl;
        // ans = ans ^ arr[i];
        for(int j=0;j<=size;j++){
            if(arr[i]==arr[j]){
                
            }
        }
    }
    return ans;
}

int uniqueFromArr(int *arr, int n)
{
   int ans = 0;
    // Xor ing all array element
   for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
        cout << ans << " " << i<< endl;
   }

    // Xor [1,n-1]
   for(int i =1;i<n; i++){
    ans = ans ^ i;
    cout << ans << endl;
   }
   return ans;
}


int findDuplicate (int *arr,int n) {
    vector<int> ans;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout << i << " "<< arr[j] << endl;
            if(arr[i]==arr[j]){
                ans.push_back(arr[i]);
                
            }
        }
    }
    return false;
}

int main () {
    int arr[6] = {1,2,2,1,1,3};
    // cout << findUnique(arr,6);
    cout << uniqueFromArr(arr,6);

    // int arr2[5] = {2,4,1,3,2};
    // cout << findDuplicate(arr2,5);
}


// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         vector<int>ans;
//         int n = sizeof(num1) / sizeof(int);
//         int m = sizeof(num2) / sizeof(int);
//         for(int 1=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(num1[i] == num2[j]){
//                     ans.push_back(num1[i]);
//                     num2[j] = INT_MIN;
//                     break;
//                 }
//             }   
//         }
//     }
// };