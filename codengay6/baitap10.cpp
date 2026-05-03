 #include<iostream>
#include<math.h>
#include<algorithm>
#include <chrono>
#include<set>
using namespace std;
using namespace std::chrono;
int n,k,cnt=0,a[1000];
bool final;
set<int>se;
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        --i;    
    }
    if(i==0){
        cout << k << endl;
    }
    else{
        a[i]++;
        for(int j=i+1;j<=k; j++){
            a[j]= a[j-1]+1;
        }
        for(int i=1; i<=k; i++ ){
            if(se.find(a[i])==se.end()){
                ++cnt;
            }
        }
        cout << cnt  << endl;
        cnt =0;
    }
}
int main(){
    auto start = high_resolution_clock::now();
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        final=false;
        for(int i=1;i<=k ;i++){
                cin >> a[i];
                se.insert(a[i]);
            }
            sinh();
        se.clear();
    }

    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}