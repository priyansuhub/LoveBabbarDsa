#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    int stored = 0;
    int count = 0;
    while(temp!= 0){
       if((temp & 1) == 1){
        stored+= pow(2, count);
       }
       count++;
       temp >>1;
    }
    cout<<stored<<endl;
    return 0;
}