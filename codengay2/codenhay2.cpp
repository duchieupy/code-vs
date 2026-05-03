#include<iostream>
#include<math.h>
using namespace std;
int n,k;
int a[1000];
bool final=false;
void khoitao(){
    for(int i=1; i<=k; i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while( i>=1 && a[i]==n-k+i){
        --i;
    }
    if(i==0){
        final=true;
    }
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j]=a[j-1]+1;
        }
    }
}
long long C[1005];
void precompute_1c(){
    C[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=k; j>0; j--){

            C[j]=C[j-1]+C[j];
        }
    }
}
int main(){
    cin >> n >> k;
    khoitao();
    while(!final){
        for(int i=1; i<=k; i++){
            cout << a[i] ;
        }
        cout << endl;
        sinh();
    }
    precompute_1c();
    cout << C[k];
}