/*cho hai số N,K và một tập con có K phần tử X[]=(1,2,3,..,k) của cac số từ 1 tới N
hãy đưa ra tập con tiếp theo của X[]*/
#include<iostream>
#include<math.h>
#include<string>
#include <chrono>
using namespace std;
using namespace std::chrono;
int n,k,t,a[1000];
void sinh(){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        --i;
    }
    if(i==0){
        for(int i=1; i<=k; i++){
            a[i]=i;
            cout << a[i];
        }
    }
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j]=a[j-1]+1;
        }
        for(int i=1; i<=k; i++){
            cout << a[i] << " ";
        }
    }
}
int main(){
    auto start = high_resolution_clock::now();
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=k; i++){
            cin >> a[i];
        }
        sinh();
    }
    
    auto stop = high_resolution_clock::now();

    // Tính thời gian chênh lệch (đổi sang mili giây hoặc micro giây)
    duration<double> duration_seconds = stop - start;

    cout << "Thoi gian chay: " << duration_seconds.count() << " s" << endl;

    return 0;
}