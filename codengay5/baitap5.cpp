/*cho hai số nguyên dương N và K.liệt kê tất cả các tập con K phần tử của 1,2,3,..N*/
#include<iostream>
#include<math.h>
#include<string>
#include <chrono>
using namespace std;
using namespace std::chrono;
int n,k,a[1000];
bool final;
void khoitao(){
    for(int i=1; i<=n; i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(i>=1&&a[i]==n-k+i){
        --i;
    }
    if(i==0){
        final=true;
    }
    else{
        a[i]++;
        for(int j=i+1; i<=k; i++){
            a[j]=a[j-1]+1;
        }
    }
}
int main(){
    auto start = high_resolution_clock::now();
    int t;
    cin >>t;
    while(t--){
        cin >> n >> k;
        final=false;
        khoitao();
        while(!final){
            for(int i=1; i<=k; i++){
                cout << a[i] ;
            }
            cout << endl;
            sinh();
        }
    } 
    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}