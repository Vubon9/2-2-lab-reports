#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, x, a[20], rear = -1, front = -1, count = -1, max = 4;
    for(i = 0; i <= max; i++)
        a[i] = 0;
    while(true)
    {
        cout << "Enter 1 for insert"<<endl;
        cout << "Enter 2 for delete"<<endl;
        cout << "Enter 3 for display"<<endl;

        cin >> n;
        if(n == 1)
        {
            int k;
            cout << "How many values you want to insert: ";
            cin >> k;
            for(int t = 0; t < k; t++)
            {
                if(count == max)
                {
                    cout << "Queue is overflow"<<endl;
                    break;
                }
                if(count == -1)
                {
                    rear = 0;
                    front = 0;
                }
                else if(rear == max)
                {
                    rear = 0;
                }
                else
                {
                    rear++;
                }
                cout << "Enter value: ";
                cin >> x;

                a[rear] = x;
                count++;
            }

            cout << "Data successfully inserted"<<endl;
        }
        else if(n == 2)
        {
            if(count == -1)
            {
                cout << "Queue is underflow"<<endl;
            }
            else
            {
                cout << "Deleted value:" << a[front] << endl;
                a[front] = 0;
                count--;
                if(count == -1)
                {
                    rear = -1;
                    front = -1;
                }
                else if(front == max)
                {
                    front = 0;
                }
                else
                {
                    front++;
                }
            }
        }
        else if(n == 3)
        {
            if(count == -1)
            {
                cout << "Queue is empty"<<endl;
            }
            else
            {
                cout << "Queue elements:"<<endl;
                int temp = front;
                for(int c = 0; c <= count; c++)
                {
                    cout << a[temp] << " ";
                    temp = (temp == max) ? 0 : temp + 1;
                }
                cout << endl;
            }
        }

        else
        {
            exit(0);
        }
    }
    return 0;
}