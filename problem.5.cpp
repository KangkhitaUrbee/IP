#include<iostream>
#include<climits>
using namespace std;

int main ()
{
int n;
  cout<<"Number of Student :";
  cin>>n;

 float arr[n];

for(int i = 0 ; i < n ; i++)
    cin>>arr[i];

  float currentMax = arr[0];
  float secondMax = INT_MIN;

for(int i = 1; i< n ; i++){

    if( currentMax < arr[i]){
        secondMax = currentMax;
        currentMax = arr[i];
    }
    if(secondMax < arr[i] && arr[i] != currentMax){
      secondMax = arr[i];}
  }

cout << "Highest Mark is : " << currentMax<<endl<< "Second Highest Mark is : "<< secondMax <<endl;
  return 0;

}
