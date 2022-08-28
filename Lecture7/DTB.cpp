#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n; 
    int reversed = 0;
    int count = 0;
    while(temp>0){
        int val = temp%2;
        reversed+=pow(10, count);
        count++;
        temp/=2;
    }
    cout<<reversed<<endl;
    return 0;
}