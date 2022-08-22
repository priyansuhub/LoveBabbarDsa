#include <iostream>
using namespace std;
int main() {
   int row;
   int col;
   cout<<"Enter Row"<<endl;
   cout<<"Enter Column"<<endl;
   cin>>row;
   cin>>col;
   int value = 1;
   for(int i = 1; i<=row; i++){
    for(int j= 1 ;j<=col; j++){
        cout<<" "<<value++<<" ";
    }
    cout<<endl;
   }
}