#include<bits/stdc++.h>
using namespace std;
void printArrow(int n,bool left){
    if (left==false){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n+i-1;j++){
                if(j<=(i-1)*2) cout<<" ";
                else cout<<"*";
            }
            cout<<endl;
        }
        for(int i=1;i<=n-1;i++){
            for(int j=1;j<=n*2-i-1;j++){
                if(j<=(n*2-i*2-2)) cout<<" ";
                else cout<<"*";
            }
            cout<<endl;
        }
    }
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n*2-(i-1)*2-1;j++){
                if(j<=n*2-(n+i)) cout<<" ";
                else cout<<"*";
            }
            cout<<endl;
        }
        for(int i=1;i<=n-1;i++){
            for(int j=1;j<=i*2+1;j++){
                if(j<=(i-1)) cout<<" ";
                else cout<<"*";
            }
            cout<<endl;
        }

    }
}
int main(){

}
