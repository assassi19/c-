#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];
        }
    }
          for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
       swap(arr[i][j],arr[j][i]);
        }
    } 
        for(int i=0;i<n/2;i++){
         for(int j=0;j<n;j++){
        swap(arr[i][j],arr[n-i-1][j]);
         }
     }  
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" ";
    } cout<<endl;
        }
    
    
        
    return 0;
}