/*cho xau AB co do dai n nhap vao so K hay liet ke tat ca cac xau AB co do dai N chua duy nhat 1 day K ki tu A lien tiep*/
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include <chrono>
using namespace std;
using namespace std::chrono;
int n,k,a[1000];
bool final;
void khoitao(){
    for(int i=1;i<=n; i++){
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
bool check(){
    int res=0, dem=0;
    for(int i=1; i<=n; i++){
        if(a[i]==0) ++dem;
        else dem =0;
        if(dem>k){
            return false;
        }
        if(dem==k){
            ++res;
        }
    }
    return  res==1;
}
int main(){ 
    auto start = high_resolution_clock::now();
    cin >> n >> k;
    vector<vector<int >> v;
    final =false;
    khoitao();
    while(!final){
        if(check()){
            vector<int> tmp(a+1, a+n+1);
            v.push_back(tmp);
            }
         sinh();
    }
    cout << v.size() << endl;
    for(vector<int> it : v){
        for(int t:it){
            if(t==1)cout << 'B';
            else cout << 'A';
        }
        cout << endl;
    }

    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}