///False Position 
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

///Fixed Position 
#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (cos(x) + 1) / 3;
}

int main()
{
    double x0, x1;

    x0 = 0;

    cout << fixed << setprecision(6);

    cout << setw(5)  << "n"
         << setw(15) << "Xn"
         << setw(15) << "Xn+1" << endl;

    for(int i = 0; i < 6; i++)
    {
        x1 = f(x0);

        cout << setw(5)  << i
             << setw(15) << x0
             << setw(15) << x1 << endl;

        x0 = x1;
    }

    cout << "Approximate Root = " << x1 << endl;

    return 0;
}

///Bisection Method
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
///bianry to decimal
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

///New ton Raphson
#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return 3 * x - cos(x) - 1;
}

double g(double x)
{
    return 3 + sin(x);
}

int main()
{
    double x0, x1;

    x0 = 0;

    cout << fixed << setprecision(6);

    cout << setw(5)  << "n"
         << setw(15) << "Xn"
         << setw(15) << "f(Xn)"
         << setw(15) << "Xn+1" << endl;

    for(int i = 0; i < 10; i++)
    {
        x1 = x0 - (f(x0) / g(x0));

        cout << setw(5)  << i
             << setw(15) << x0
             << setw(15) << f(x0)
             << setw(15) << x1 << endl;

        if(fabs(x1 - x0) < 0.000001)
        {
            break;
        }

        x0 = x1;
    }

    cout << "\nApproximate Root = " << x1 << endl;

    return 0;
}