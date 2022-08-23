#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter Number"<<endl;
    cin>>n;
  int tempPod = n;
  int Pod = 1;

  while(tempPod != 0){
    int num = tempPod%10;
    Pod = Pod*num;
    tempPod /=10;
  }

  int tempSum = n;
  int Pos = 0;

  while(tempSum!=0){
    int num = tempSum%10;
    Pos = Pos + num;
    tempSum /= 10;
  }  


  cout<<"Value"<<Pod-Pos<<endl;
}