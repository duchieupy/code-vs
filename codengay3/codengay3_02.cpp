#include<iostream>
#include<math.h>
#include<string>
using namespace std; 
int n;
string s;
int a[1000];
void khoitao(){
    for(int i=0; i<s.size(); i++){
        a[i+1]=s[i]-'0';
    }
}
void sinh(){
    int i=s.size();
    while(i>=1 && a[i]==1){
        a[i]=0;
        --i;
    }
    if(i==0){
        for(int j=1; j<=s.size(); j++){
            a[j]=0;
        }
    }
    else{
        a[i]=1;
    }
}
int main(){
    cin >> s;
    khoitao();
    sinh();
        for(int i=1; i<=s.size(); i++){
            cout << a[i];
        }
}