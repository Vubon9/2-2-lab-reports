#include<bits/stdc++.h>
void funRec(int a){
    if(n==0)
    return;
    funRec(a/2);
    printf("%d ",a%2);
}
int main()
{
    int a;
    cin>>a;
    if(a==0){
        printf("0");
    }
    else{
        funRec(a);
    }
    return 0;   
}