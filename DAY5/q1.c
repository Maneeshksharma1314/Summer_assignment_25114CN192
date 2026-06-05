//Write a program to Check perfect number:
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,s=0;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=1;i<=num/2;i++){
        if(num%i==0){
            s+=i;
        }
    }
    if(s==num){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a perfect number";
    }
    return 0;

}
