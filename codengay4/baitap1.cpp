/*Cho xâu nhị phân X[]
Nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của x[].*/
#include<iostream>
#include<math.h>
#include<string>
#include <chrono>
using namespace std;
using namespace std::chrono;
string s;
void sinh(){
    int i=s.size()-1;
    while(i>=0 && s[i]=='1'){
        s[i]='0';
        --i;
    }
    if(i!= -1){
        s[i]='1';
    }
}
int main(){
    auto start = high_resolution_clock::now();

    int q;
    cin >> q;
    while(q--){
        cin >> s;
        sinh();
        cout << s << endl;
    }

     auto stop = high_resolution_clock::now();

    // Tính thời gian chênh lệch (đổi sang mili giây hoặc micro giây)
    duration<double> duration_seconds = stop - start;

    cout << "Thoi gian chay: " << duration_seconds.count() << " s" << endl;

    return 0;
}