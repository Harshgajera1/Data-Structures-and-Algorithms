#include<iostream>
using namespace std;

int sqr(int x){
    int s = 1,e=x,mid = s +(e-s)/2,ans = -1;
    while(s<=e){
        if(mid==x/mid){
            return mid;
        }else if(mid<x/mid){
            ans = mid;
            s = mid+1;
        }else {
            e = mid-1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            // cout << j<< " " << n << endl;
            ans = j;
        }
    }   
    return ans;
}

int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    int tempSol = sqr(n);
    cout << "TempSol is " << tempSol << endl;
    cout << "MorePrecision is " << morePrecision(n,3,tempSol);
}