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

        cout << setw(5)  << i<< setw(15) << x0<< setw(15) << x1 << endl;

        x0 = x1;
    }

    cout << "Approximate Root = " << x1 << endl;

    return 0;
}