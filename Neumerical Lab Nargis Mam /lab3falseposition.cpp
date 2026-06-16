#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return 3*x - cos(x) - 1;
}
int main()
{
    double a, b, c, total = 0.0001;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    if(f(a) * f(b) > 0){
        cout << "Invalid interval!" << endl;
        return 0;
    }
    cout << setw(6) << "Step" << setw(12) << "a" << setw(12) << "b" << setw(12) << "f(a)" << setw(12) << "f(b)" << setw(12) << "c" << setw(12) << "f(c)" << endl;

    int i = 1;
    while(true){
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));
        cout << setw(6) << i << setw(12) << a << setw(12) << b << setw(12) << f(a) << setw(12) << f(b) << setw(12) << c << setw(12) << f(c) << endl;

        if(abs(f(c))< total){
            break;
        }
        if(f(a) * f(c) < 0){
            b = c;
        } else {
            a = c;
        }
        i++;
    }
    cout << "The root is: " << c << endl;
    return 0;
}