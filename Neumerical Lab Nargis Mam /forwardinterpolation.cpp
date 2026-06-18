#include<bits/stdc++.h>
using namespace std;
int main()
{
    float X[] = {3, 5, 7, 9};
    float y[] = {180, 150, 120, 90};
    float x = 4;

    float d1[3], d2[2], d3[1];

    for(int i = 0; i < 3; i++){
        d1[i] = y[i + 1] - y[i];
    }
    for(int i = 0; i < 2; i++){
        d2[i] = d1[i + 1] - d1[i];
    }
    d3[0] = d2[1] - d2[0];
    cout << "X\tY\td1\td2\td3\n";
    for(int i = 0; i < 4; i++)
    {
        cout<<X[i]<<"\t"<<y[i];
        if(i<3){
            cout <<"\t"<<d1[i];
        }
        else{
            cout<<"\t";
        }
        if(i<2){
            cout<<"\t"<<d2[i];
        }
        else{
            cout<<"\t";
        }
        if(i<1){
            cout<<"\t"<<d3[i];
        }
        cout<<endl;
    }
    float h=X[1] - X[0];
    float p=(x - X[0])/h;

    float result =y[0]+ p*d1[0]+(p*(p-1)/2)*d2[0]+(p*(p-1)*(p-2)/6)*d3[0];

    cout<<"\np=("<<x<< "-"<<X[0]<<")/"<<h<<"="<<p<<endl;
    cout<<"Final Result:"<<result<<endl;

    return 0;
}