#include<iostream>
using namespace std;

int main() {

char ch = '1';
int num = 1;

cout << endl;
switch( ch ) {
    /* case (codition):what we want it to do*/
    case 1: cout << "First" << endl;
    cout << " First again " << endl;
    break;

    case '1': switch(num) {
        case 1: cout << " Value of num is " << num << endl;
        break;}

    default: cout << " It is default case" << endl;

}
return 0;
}