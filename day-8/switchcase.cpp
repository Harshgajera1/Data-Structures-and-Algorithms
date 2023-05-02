#include<iostream>
using namespace std;

int main () {
    char n;
    int a,b;

    cout << "Enter a value : ";
    cin >> a; 
    cout << "Enter b value : ";
    cin >> b;

    cout << "What you want to do : ";
    cin >> n;

    int change = 2;

    switch(n){
        case '+' :
            {
                cout << "Addition is : " << a+b;
                break;
            }

        case '-' :
            // nested switch case
            // switch (change){
            //     case 1: 
            //         cout << "Substration is : " << a-b;
            //         break;
            //     case 2: 
            //         cout << "Substration is : " << b-a;
            //         break;
            // }
            cout << "Substration is : " << a-b;
            break;

        case '*' :
            cout << "Multiplication is : " << a*b;
            break;

        case '/' :
            cout << "Division is : " << a/b;
            break;

        case '%' :
            cout << "Modules is : " << a%b;
            break;

        default : 
            cout << "Enter valid input.";
    }

    // int a = 2;
    // ----------- HW -----------
    // while(1){
    //     switch (a)
    //     {
    //         case 1:
    //             cout << "This is first";
    //             break;
    //         case 2:
    //             cout << "This is second";
    //             exit(0);
    //             break;
    //         default:
    //             break;
    //     }
    // }
}