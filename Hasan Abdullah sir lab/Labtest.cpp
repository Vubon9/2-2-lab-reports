#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l;
    cout<<"Enter the Odd Number: ";
    cin>>n;
    if(n%2==0){
        return 0;
    }
    else{
        int square[50][50];  
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                square[i][j]=0;
            }
        }
        int i = 0;        
        int j = n/2;
        square[i][j] = 1;  

        for(int key=2; key<=n*n; key++){
            if(i>0){
                k=i-1;
            }
            else{
                k=n-1;
            }
            if(j>0){
                l=j-1;
            }
            else{
                l=n-1;
            }

            if(square[k][l]>=1){
                i=(i+1)%n;   // move down
            }
            else{
                i=k;
                j=l;
            }

            square[i][j]=key;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<square[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

///stack implementation reverse
#include <iostream>
using namespace std;

int main() {
    char st[100], s[100];
    int top = -1, i;

    cout << "Enter string: ";
    cin >> s;

    // push
    for (i = 0; s[i] != '\0'; i++)
        st[++top] = s[i];

    // pop
    cout << "Reversed: ";
    while (top != -1)
        cout << st[top--];

    cout << endl;
}

///Queue program (Insert, Delete, Display)
#include <iostream>
using namespace std;

int q[5], f = -1, r = -1;

void enqueue(int x) {
    if (r == 4) {
        cout << "OVERFLOW\n";
        return;
    }
    if (f == -1) f = 0;
    q[++r] = x;
    cout << "Inserted: " << x << endl;
}

void dequeue() {
    if (f == -1 || f > r) {
        cout << "UNDERFLOW\n";
        return;
    }
    cout << "Deleted: " << q[f++] << endl;
    if (f > r) f = r = -1;
}

void display() {
    if (f == -1 || f > r) {
        cout << "EMPTY\n";
        return;
    }
    cout << "Queue: ";
    for (int i = f; i <= r; i++)
        cout << q[i] << " ";
    cout << endl;
}

int main() {
    int n, x;

    while (1) {
        cout << "\n1.Insert 2.Delete 3.Display 0.Exit\n";
        cin >> n;

        if (n == 1) {
            cin >> x;
            enqueue(x);
        }
        else if (n == 2) {
            dequeue();
        }
        else if (n == 3) {
            display();
        }
        else {
            break;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int st[5];
int top = -1;
int maxSize = 4;

// Push operation
void push(int x) {
    if (top == maxSize) {
        cout << "OVERFLOW\n";
        return;
    }
    st[++top] = x;
    cout << "Pushed: " << x << endl;
}

// Pop operation
void pop() {
    if (top == -1) {
        cout << "UNDERFLOW\n";
        return;
    }
    cout << "Popped: " << st[top--] << endl;
}

// Display stack
void display() {
    if (top == -1) {
        cout << "EMPTY\n";
        return;
    }

    cout << "Stack: ";
    for (int i = top; i >= 0; i--) {
        cout << st[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}