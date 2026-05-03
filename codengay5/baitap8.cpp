
#include<iostream>
#include<math.h>
#include<algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;
int n,cnt,a[1000];
bool final;
void khoitao(){
        a[1]=n;
        cnt=1;
}
void sinh(){
    int i=cnt;
    while(i>=1&&a[i]==1){
        --i;
    }
    if(i==0){
        final=true;
    }
    else{
        a[i]--;
        int tmp=cnt-i+1;
        cnt=i;
        int q=tmp/a[i];
        int r=tmp%a[i];
        if(q!=0){
            for(int j=1; j<=q; j++){
                ++cnt;
                a[cnt]=a[i];
            }
        }
        if(r!=0){
            ++cnt;
            a[cnt]=r;
        }
    }
}
int main(){
    auto start = high_resolution_clock::now();
    int t;
    cin >> t;
    while(t--){
     cin >> n;
    khoitao();
    final=false;
    while(!final){
        cout << "(";
        for(int i=1; i<=cnt ;i++){
            cout<< " " << a[i] ;
        }
        cout << " "<< ")" << " ";
        sinh();
    }
        cout << endl;
    }
    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}