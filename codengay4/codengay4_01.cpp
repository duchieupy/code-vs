#include<iostream>
#include<math.h>
using namespace std;
int n;
int a[1000];
int cnt;
bool final = false;
void khoitao(){
    a[1]=n;
    cnt=1;
}
void sinh(){
    int i=cnt;
    while( i>=1 && a[i]==1){
        --i;
    }
    if(i==0){
        final=true;
    }
    else{
        --a[i];
        int tmp=cnt-i+1;
        cnt=i;
        int q=tmp/a[i];
        int r=tmp%a[i];
        if(q!=0){
            for(int j=1; j<=q; j++){
                a[i + j] = a[i];
            }
             cnt+=q;
        }
        if(r!=0){
            ++cnt;
            a[cnt]=r;
        }

    }
}
int main(){
    cin >>n;
    khoitao();
    while(!final){
        for(int i = 1; i <= cnt; i++){
            cout << a[i] << ' ';
        }
    cout << endl;
    sinh();
    }
}