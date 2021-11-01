#include <iostream>
using namespace std;

int main() {
  int arr[]={12,34,23,22,35,0,-12};
  int n=sizeof(arr)/sizeof(arr[0]);
  int key;
  for(int i=1;i<n;i++)
  {  key=arr[i];
    int j=i-1;
    /* comparing with previous value and changing
    position until lesser value is found*/
    while(j>=0 && key<arr[j])
    {
     arr[j+1]=arr[j];
     j--;
    }
    arr[j+1]=key;
  }
  for(int i=0;i<n;i++)
  {cout<<arr[i]<<" ";}
  return 0 ;
}
