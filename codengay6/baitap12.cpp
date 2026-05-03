#include<iostream>
#include<math.h>
#include<chrono>
#include<string>
#include<algorithm>
using namespace std;
using namespace std::chrono;
int a[1000];
string s;
bool final = false;
void sinh(string &s){
    int i = s.size()-2;
    while(i>=0 && s[i]>=s[i+1]){
        --i;
    }
    if(i==-1){
        final=true;
    }
    else{
        int j=s.size()-1;
        while( s[i]>=s[j]) --j;
        swap(s[i],s[j]);
        int l=i+1;
        int r=s.size()-1;
        while(l<r){
            swap(s[l],s[r]);
            --r;
            ++l;
        
        }
        cout << s << endl;
    }

}
int main(){
    auto start = high_resolution_clock::now();
    int t;
    cin >> t;
    while(t--){
        int tc=t; 
        cin >> s;
        cout << tc << endl;
        sinh(s);
    }
    auto stop = high_resolution_clock::now();
    duration<double> duration_seconds = stop - start;
    cout << "Thoi gian chay: " << duration_seconds.count() << "s" << endl;
}