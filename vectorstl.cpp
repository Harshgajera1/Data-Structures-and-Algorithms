#include<iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<int> v;

    // second way to create vector, 1st parameter - vector size, 2nd default value 
    vector<int> v2(4,2);

    // vector copy
    vector<int> last(v2);

    for(int i:last){
        cout<< i <<" ";
    }
    cout << endl << endl;

    // cout  << "Before size of vector " << v.size() << endl;
    cout  << "Before size of vector " << v.capacity() << endl;

    v.push_back(56);
    cout  << "After size of vector " << v.capacity() << endl;

    v.push_back(32);
    cout  << "After size of vector " << v.capacity() << endl;

    v.push_back(3);
    cout  << "After capacity of vector " << v.capacity() << endl;
    cout  << "After size of vector " << v.size() << endl;

    v.push_back(9);
    cout  << "After capacity of vector " << v.capacity() << endl;
    cout  << "After size of vector " << v.size() << endl;

    v.push_back(5);
    cout  << "After capacity of vector " << v.capacity() << endl;
    cout  << "After size of vector " << v.size() << endl;

    for(int i:v){
        cout << i <<" ";
    }
    cout << "Before pop" << endl;

    v.pop_back();

    for(int i:v){
        cout<< i <<" ";
    }
    cout << "After pop" << endl;

    cout << endl << "Element of 3nd position " << v.at(3) << endl;
    cout << "Empty or not " << v.empty() << endl;
    cout << "First element " << v.front() << endl;
    cout << "Last element " << v.back() << endl;

    v.clear();
    cout << "Size vector " << v.size() << endl;
    cout << "Capacity vector " << v.capacity() << endl;

}