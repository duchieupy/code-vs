/*cho xâu gồm các kí tự 'A' hoặc 'B' hay in tất cả các xâu con có độ dài n */
#include<iostream>
#include<math.h>
#include<string>
#include <chrono>
using namespace std;
using namespace std::chrono;
string s;
bool final;
int n,t,a[1000];
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
    auto start = high_resolution_clock::now();
    cin >> t;
    while(t--){
        cin >> n;
        khoitao();
        final = false;
        while(!final){
            for(int i=1; i<=n; i++){
                if(a[i]==0){
                    cout << 'A' ;
                }
                else{
                    cout << 'B' ;
                }
            }
            cout << endl;
            sinh();
        }
    }


    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}