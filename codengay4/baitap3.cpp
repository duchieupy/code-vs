/*Cho số tự nhiên N và một hoán vị X[] của 1,2,3,.. N.
Đưa ra hoán vị tiếp theo của X[]*/
#include<iostream>
#include<math.h>
#include<string>
#include <chrono>
using namespace std;
using namespace std::chrono;
int n,t,a[1000];
void sinh(){
    int i=n-1;
    while(i>=1&&a[i]>=a[i+1]){
        --i;
    }
    if(i==0){
        for(int i=1; i<=n; i++){
            a[i]=i;
        }
        for(int i=1; i<=n; i++){
            cout << a[i] << " ";
        }
        
    }
    else{
        int j=n;
        while(a[i]>a[j]){
            --j;
        }
        swap(a[i],a[j]);
        int l=i+1;
        int r=n;
        while(l<r){
            swap(a[l],a[r]);
            ++l;
            --r;
        }
        for(int i=1; i<=n; i++){
            cout << a[i] << " ";
        }
    }
}
int main(){
    auto start = high_resolution_clock::now();
    cin >> t;
    while(t--){
         cin >> n ;
         for(int i=1; i<=n; i++){
        cin >> a[i];
        }
        sinh();
    }

    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}