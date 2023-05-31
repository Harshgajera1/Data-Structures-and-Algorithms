// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int value;
    value = cin.get();

    if(48 <= value && 57 >= value){
        cout << "This is numeric" << endl;
    }
    else if(97 <= value && value <= 122){
        cout << "This is lowercase" << endl;
    }else if(65 <= value && value <= 90){
        cout << "This is Uppercase" << endl;
    }else {
        cout << "Symbol value";
    }
}