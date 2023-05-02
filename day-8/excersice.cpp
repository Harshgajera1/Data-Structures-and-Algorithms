#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter amount : " ;
    cin >> n;

    int n100=0,n50=0,n20=0,n1=0;

    switch (n>100){
        case 1:
            n100 = n/100;
            n = n - (100*n100);
            break;
        
        default:
            break;
    }
    switch (n>50){
        case 1:
            n50 = n/50;
            n = n - (50*n50);
            break;
        
        default:
            break;
    }
    switch (n>20){
        case 1:
            n20 = n/20;
            n = n - (20*n20);
            break;
        
        default:
            break;
    }
    switch (n>1){
        case 1:
            n1 = n/1;
            n = n - (1*n1);
            break;
        
        default:
            break;
    }

    cout << "100 note : " << n100 << endl;
    cout << "50 note : " << n50 << endl;
    cout << "20 note : " << n20 << endl;
    cout << "1 note : " << n1 << endl;
}
