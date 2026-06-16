#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, a[20], max = 4, top = -1;
    while(true)
    {
        cout << "Enter 1 for insertion"<<endl;
        cout << "Enter 2 for deletion"<<endl;
        cout << "Enter 3 for display"<<endl;

        cin >> n;
        if(n == 1)
        {
            if(top == max)
            {
                cout << "Stack is overflow"<<endl;
            }
            else
            {
                int b;
                cout << "Enter the value"<<endl;
                cin >> b;

                top = top + 1;
                a[top] = b;

                cout << "Data successfully inserted"<<endl;
            }
        }
        else if(n == 2)
        {
            if(top == -1)
            {
                cout << "Stack is underflow"<<endl;
            }
            else
            {
                cout << "Deleted value: " << a[top] << endl;
                top = top - 1;

                cout << "Data successfully deleted"<<endl;
            }
        }
        else if(n == 3)
        {
            if(top == -1)
            {
                cout << "Stack is empty"<<endl;
            }
            else
            {
                cout << "Stack elements are:"<<endl;
                for(i = top; i >= 0; i--)   
                {
                    cout << a[i] << endl;
                }
            }
        }

        else
        {
            break;
        }
    }
    return 0;
}