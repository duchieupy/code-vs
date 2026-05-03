/*in tất cả các xâu nhị phân có độ dài n, có K bit 1 theo thứ tự từ điển tăng dần*/

#include<iostream>
#include<math.h>
#include<algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;
int n ,k;
int cnt=0;
bool final;
int a[1000];
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
void dem(){

    for(int i=1;i<=n;i++){
        if(a[i]==1){
            ++cnt;
        } 
    }
}
int main(){
    auto start = high_resolution_clock::now();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        final=false;
        khoitao();
        while(!final){
            dem();
            if(cnt==k){
                for(int i=1; i<=n; i++){
                    cout << a[i];
                }
                cout << endl;
            }
            cnt=0;
            sinh();
        }
    }

    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}