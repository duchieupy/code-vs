/*cho số nguyên dương N. Hãy liệt kê tất cả các hoán vị của 1,2,..N */
#include<iostream>
#include<math.h>
#include<algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;
int n,a[1000];
int main(){
    auto start = high_resolution_clock::now();
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            a[i]=n-i;
        }
        do{
            for(int i=0; i<n; i++){
                cout << a[i];
            }
            cout << " ";
        }while(prev_permutation(a,a+n));
        }

    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;

}