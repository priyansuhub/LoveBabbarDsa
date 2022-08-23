#include <iostream>
#include <string>
using namespace std;
int main() {
   int n;
   cout<<"Enter Binary value"<<endl;
    cin>>n;
    string num = to_string(n);
    cout<<num<<endl;
   int count = 0;
   
   for(int i = 0; i< num.size(); i++){
    if(num[i] == '1'){
        count+=1;
    }
    cout<< count <<"    Value hai count of 1 ka"<<i<<endl;
   }
   cout<< count <<"    Value hai count of 1 ka"<<endl;
}