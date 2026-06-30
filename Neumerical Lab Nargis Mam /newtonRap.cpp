#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
    return 3*x - cos(x) - 1;
}
double df(double x)
{
    return 3 + sin(x);
}
int main()
{
    double x0 = 0, x1;
    cout << fixed << setprecision(3);
    cout << "n\tXn\t\tf(Xn)\t\tf'(Xn)\t\tXn+1\n";

    for(int i = 0; i < 6; i++)
    {
        x1 = x0 - f(x0)/df(x0);

        cout<< i << "\t"<< x0 << "\t"<<f(x0)<< "\t"<<df(x0)<<"\t"<<x1<<endl;

        x0 = x1;
    }

    cout << "\nApproximate Root = " << x1 << endl;

    return 0;
}