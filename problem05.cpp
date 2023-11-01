#include<iostream>
#include<climits>
using namespace std;

int main ()
{

  int x;
  cout<<"Number of Student :";
  cin>>x;

 float arr[x];



  for(int i = 0 ; i < x ; i++)
    cin>>arr[i];

  float currentMax = arr[0];
  float secondMax = INT_MIN;


  for(int i = 1; i< x ; i++){

    if( currentMax < arr[i]){
        secondMax = currentMax;
        currentMax = arr[i];
    }
    if(secondMax < arr[i] && arr[i] != currentMax){
      secondMax = arr[i];
    }
  }

cout << "Highest Mark is : " << currentMax<<endl<< "Second Highest Mark is : "<< secondMax <<endl;
  return 0;

}
