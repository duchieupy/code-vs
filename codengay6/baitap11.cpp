#include<iostream>
#include<vector>
#include<math.h>
#include<chrono>
using namespace std;
using namespace std::chrono;
int n, k, a[1000];
bool final = false;
void khoitao(){
    for(int i=1; i<=k; i++){
        a[i]=i;
    }
}
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        --i;
    }
    if(i==0){
        final=true;
    }
    else{
        a[i]++;
        for(int j=i+1; j<=k ;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int main(){
    auto start = high_resolution_clock::now();
    vector<vector<int>> v;
    cin >> n >> k;
    khoitao();
    while(!final){
        vector<int> tmp(a+1,a+k+1);
        v.push_back(tmp);
        sinh();
        }
        cout << v.size();
 
    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}