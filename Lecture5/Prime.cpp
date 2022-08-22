#include <iostream>
using namespace std;
int main() {
   int n; 
   cout<<"Enter Prime Number"<<endl;
   cin>>n;
    int count = 0;
   for(int i = 1; i< n; i++){
        if(n%i == 0){
            count+=1;
        }
   }

   if(count == 1){
    cout<<"Is a prime Number"<<endl;
   }else{
    cout<<"Is not a prime Number"<<endl;
   }
}