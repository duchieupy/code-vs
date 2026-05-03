#include<iostream>
#include<math.h>
using namespace std;
int n;
int a[10000];
bool final = false;
void khoitao(){
    for(int i=1; i<=n; i++){
        a[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if(i==0){
        final=true;
    }
    else{
        a[i]=1;
    }
}
int main(){
    cin >> n;
    khoitao();
    while(!final){
        for (int i=1; i <=n; i++){
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
}