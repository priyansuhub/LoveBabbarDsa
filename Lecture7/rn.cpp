#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n; 
    int reversed = 0;
    while(temp!=0){
        int val = temp%10;
        reversed = (reversed * 10)+val;
        temp = temp/10;
    }
    cout<<reversed<<endl;
    return 0;
}