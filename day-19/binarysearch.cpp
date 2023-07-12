#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);

    cout << binary_search(v.begin(),v.end(),5) << endl;
    cout << "lower bound - " <<  lower_bound(v.begin(),v.end(),5) - v.begin() << endl;
    cout << "upper bound - " <<  upper_bound(v.begin(),v.end(),5) - v.begin() << endl;

    int a = 7;
    int b = 9;
    cout << "Max is " << max(a,b) << endl;
    cout << "Min is " << min(a,b) << endl;

    swap(a,b);
    cout << "a value is " << a << endl;
    cout << "b value is " << b << endl;

    string abc = "harsh";
    reverse(abc.begin(),abc.end());
    cout << abc << endl;

    cout << "------ Before rotate ------" << endl;
    for (auto i : v){
        cout<<i<<" ";
    }

    rotate(v.begin(),v.begin()+3,v.end());
    cout << endl << "------ After rotate ------" << endl;
    for (auto i : v){
        cout<<i<<" ";
    }

    sort(v.begin(),v.end());
    cout << endl << "------ Sort vector ------" << endl;
    for (auto i : v){
        cout<<i<<" ";
    }



}