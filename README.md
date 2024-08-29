# Sorting
## Implementation
```C++

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
   int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());// 0(nlogn)
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
   }
```

## BubbleSort
```C++
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,6,4,3,2,1};
int n=6;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
// bubble sort optimised
    
    for(int i=0;i<n-1;i++){
        bool flag=true;
       for(int j=0;j<=n-1-i;j++){
        if(arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
flag=false;
        }
       }
if(flag==true){
    // swap didn't happen
    break;
}
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
```
## SelectionSort
```C++

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
   
```
## InserationSort
```C++
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,30,1,-4,2};
    int n=5;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //insertion sort
    for(int i=1;i<n;i++){
        int j=i;
       // while(j>=1){
      //      if(arr[j]>=arr[j-1]) break;
      //      else 
    //        swap(arr[j],arr[j-1]);
    //        j--;
while(j>=1&& arr[j]<arr[j-1]){
    swap(arr[j],arr[j-1]);
    j--;
}
        }
    
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
}}
```




