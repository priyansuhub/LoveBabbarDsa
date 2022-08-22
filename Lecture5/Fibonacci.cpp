#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter The fibonacci value"<<endl;
   cin>>n;
   if(n == 0){
    cout<< 0;
   }else if(n == 1){
    cout<< 1;
   }else {
    int sum = 0;
    for(int i= 2; i<= n; i++){
        sum = sum +(i-1)+(i-2);
    }
    cout<< sum;
  }
}