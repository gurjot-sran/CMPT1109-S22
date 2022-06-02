// this is the program for solving quardratic equations

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int a;
    int b;
    int c;
    int d;
    double x1, x2;
    cin >> a >> b >> c;
    // case 1
    if (a == 0) {
        cout << " This equation is not quadratic \n";
        if (b == 0) {
            cout << "a = 0 \n";
            cout << "b = 0\n";
            cout << "Bye. Have a good day!\n";
        }
        //case 2
        else {
            x1 = -c / b;

            cout << "x1 = " << x1 << endl;
        }
    }
    //case 3
    else {
        d = b * b - 4 * a * c;

        if (d < 0) {
            cout << "No real roots exists for these numbers";
        }
        else {
            x1 = (-1 * b + sqrt(d)) / (2 * a);

            x2 = (-1 * b - sqrt(d)) / (2 * a);

            cout << "x1 " << x1 << endl;
            cout << "x2 " << x2 << endl;
        }
    }
// this is the end of prgram and it is working fine
return 0;
}