//n=8   5+3 4+2+2 3+3+2....
#include<bits/stdc++.h>
using namespace std;
int n, a[100],ok, cnt;
void ktao(){
    cnt=1;
    a[1]=n;
}
void sinh(){
    int i=cnt;
    while(i>=1 && a[i]==1){
        --i;
    }
    if(i==0){
        ok=0;
    }
    else{
        a[i]--;
        int d=cnt-i+1;//dem bo qua bn so 1
        cnt=i;
        int q=d/a[i];
        int r=d%a[i];
        if(q){
        for(int j=1;j<=q;j++){
            ++cnt;
            a[cnt]=a[i];
        }
        }
        if(r){
            ++cnt;
            a[cnt]=r;
        }
    }
}
int main(){
    n;ok=1;
    cin>>n;
    ktao();
    while(ok){
        for (int i=1;i<=cnt;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sinh();
    }
}