# Sorting
##Implementation
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

##BubbleSort
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


