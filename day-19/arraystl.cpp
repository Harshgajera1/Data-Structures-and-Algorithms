#include <iostream>
#include <array>
using namespace std;

int main () {
    // normal way arr define
    int basic[3] = {43,2,4};

    array<int,4> arr = {32,12,32,3};
    int size = arr.size();

    cout << endl << "Size of Array " << size;

    for(int i=0; i<size;i++){
        cout << endl << arr[i];
    }

    cout << endl << "Element of 2nd position " << arr.at(2) << endl;
    cout << "Empty or not " << arr.empty() << endl;
    cout << "First element " << arr.front() << endl;
    cout << "Last element " << arr.back() << endl;
}