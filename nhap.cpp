#include<bits/stdc++.h>
using namespace std;
double calculate(double num1,char operat, double num2){
    if (operat=='+') return num1+num2;
    if(operat=='-') return num1-num2;
    if(operat=='*') return num1*num2;
    if(operat=='/') return num1/num2;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n*2-(i-1)*2-1;j++){
                if(j<=n*2-(n+i)) cout<<" ";
                else cout<<"*";
            }
            cout<<endl;
        }
        for(int i=2;i<=n;i++){
            for(int j=1;j<=(i-1)*2+1;j++){
                if(j<=(i-1)) cout<<" ";
                else cout<<"*";
            }
            cout<<endl;
        }
}
