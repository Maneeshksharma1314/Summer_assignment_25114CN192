//a program to Check strong number:
#include <bits/stdc++.h>
using namespace std; 
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int num,s=0,r,temp;
    cout<<"Enter the Number:";
    cin>>num;
    temp=num;
    while(num!=0){
        r=num%10;
        s+=fact(r);
        num/=10;
    }
    if(s==temp)
        cout<<temp<<" is a strong number";
    else
        cout<<temp<<" is not a strong number";
    return 0;
}
