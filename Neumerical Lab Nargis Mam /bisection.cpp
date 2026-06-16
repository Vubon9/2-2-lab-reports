#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
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
        c = (a + b) / 2;
        cout << setw(6) << i << setw(12) << a << setw(12) << b << setw(12) << f(a) << setw(12) << f(b) << setw(12) << c << setw(12) << f(c) << endl;

        if(abs(f(c))< total){
            break;
        }
        if(f(a) * f(c) < 0){
            b = c;
        } else {
            a = c;
        }
        
    }
    cout << "The root is: " << c << endl;
    return 0;
}

///decimal to binary
#include<bits/stdc++.h>
using namespace std;
void decimal(int a){
    if(a==0){
        return ;
    }
    decimal(a/2);
    cout<<a%2<<" ";
}
int main()
{
    int a;
    cout<<"Enter the NUmber:";
    cin>>a;
    if(a==0){
        cout<<"0";
    }
    else{
        decimal(a);
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int decimal = 0, base = 1, rem;

    while(n > 0)
    {
        rem = n % 10;

        decimal = decimal + rem * base;

        base = base * 2;

        n = n / 10;
    }

    return decimal;
}
int main()
{
    int n;

    cout << "Enter Binary Number: ";
    cin >> n;

    cout << "Decimal Number = " << binaryToDecimal(n);

    return 0;
}