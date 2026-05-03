#include<iostream>
#include<algorithm>
using namespace std;

int n;
bool final = false;
int a[1000];

void khoitao(){
    for(int i = 1; i <= n; i++) a[i] = i;
}

void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i+1]) --i;

    if(i == 0) {
        final = true;
    } else {
        // SỬA TẠI ĐÂY: j bắt đầu từ n
        int j = n;
        while(a[i] >= a[j]) --j; 
        
        swap(a[i], a[j]);

        int l = i + 1, r = n;
        while(l < r){
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int main(){
    if(!(cin >> n)) return 0;
    khoitao();
    while(!final){
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
        sinh();
    }
    return 0;
}
