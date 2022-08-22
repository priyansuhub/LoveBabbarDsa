#include <iostream>
using namespace std;
int main() {
   int row;
   int col;
   cout<<"Enter Row"<<endl;
   cout<<"Enter Column"<<endl;
   cin>>row;
   cin>>col;
   
   for(int i = row; i>0; i--){
    for(int j= col ;j>0; j--){
        if(j>=i){
            char ch = 'A' + i-1+j-1;
            cout<< ch << " ";
        }
    }
    cout<<endl;
   }
}