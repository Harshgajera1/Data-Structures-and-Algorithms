#include<iostream>
using namespace std;

int main() {
    // ---------- bitwise operator ---------
    // int a=4,b=5;
    // cout << " a&b " << (a&b) <<  endl; 
    // cout << " a|b " << (a|b) <<  endl; 
    // cout << " ~a " << ~a <<  endl; 
    // cout << " a^b " << (a^b) <<  endl; 

    // ---------- left shift & right shift operator -------right (a>>b) = a/(b*2)  || left (a<<b) = a*(b*2)
    cout << (3534>>1) << endl;
    // cout << (7>>2) << endl;
    // cout << (6>>1) << endl;
    // cout << (18>>1) << endl;
    cout << (32<<1) << endl;

    // cout << (16<<3) << endl;
    // cout << (21<<2) << endl;

    //---------- post | pre increment or decrement --------------
    // post = first statement execute and then increment
    // int a = 4;
    // int b  = 2 + (a++);
    // int c  = 7 + (a--);
    // cout << a << "  " << b << " " << c << endl;

    // pre = first incrementand then statement execute
    // int x = 6;
    // int y = 3 + (++x); 
    // int z = 3 + (--x);
    // cout << x << "  " << y << " " << z << endl;

}