#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
   int arr[] ={-4,-2,9,6,1};
   int n=5;
   for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    cout<<endl;}
    // selection sort
for (int i=0;i<n-1;i++){
    int min=INT_MAX;
    int mindx=-1;
    // minimumm element calculation in the box
    for(int j=i;j<n;j++){

        if(arr[j]<min){
            min=arr[j];
            mindx=j;
        }
    }
    swap(arr[i],arr[mindx]);
}
 for (int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}}
   

