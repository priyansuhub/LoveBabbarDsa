#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    int stored = 0;
    int count = 0;
    while(temp!= 0){
        int rem = temp%2;
        if(rem == 1){
           stored += pow(2,count);
        }
        count++;
        temp /=10;
    }
    cout<<stored<<endl;
    return 0;
}