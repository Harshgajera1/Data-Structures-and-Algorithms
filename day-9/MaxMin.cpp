#include<iostream>
using namespace std;

int getMin (int num[],int n) {
    int mini = INT32_MAX;

    for(int i=0;i<n;i++){

        mini = min(mini,num[i]);
        // if(num[i] < mini){
        //     mini = num[i];
        // }
    }

    return mini;
}

int getMax (int num[],int n) {
    int maxi = INT32_MIN;

    for(int i=0;i<n;i++){

        maxi = max(maxi,num[i]);
        // if(num[i]>maxi){
        //     max = num[i];
        // }
    }

    return maxi;
}

int main () {
    int size;
    cout <<"Input Array size : ";
    cin >> size;
    
    int num[100];

    for(int i=0;i<size;i++){
        cin >> num[i];
    }
    cout << "Minimum value is "<< getMin(num,size) << endl;
    cout << "Maximum value is "<< getMax(num,size) << endl;
}