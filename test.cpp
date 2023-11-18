#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, tables;
    cin>>t;
    int super_arr1[2*t], ppl[t], investment[t];
    for(int i = 0; i<t*2; i++){
        if (i%2==0 && i!=1)
        {
         cin>>ppl[i];
        }
        else
        {
         cin>>investment[i];
        }
        
        
    }
    
    cin>> tables;
    
    int arr2[tables];
    
    for(int i=0; i<tables; i++){
        cin>>arr2[i];
    }
   int req_accepted=0, profit =0, team, table_no;
   for (int i = 0; i <tables; i++)
   {
      for (int j = 0; j < t; j++)
      {
         if (arr2[i]>= ppl[j])
         {
            req_accepted += 1;
            profit += investment[j];
            table_no = i;
            team = j;
         }
         
      }
      
      
   }
   cout<<req_accepted<<profit<<endl;
   cout<<team<<table_no<<endl;
      

    
    return 0;
   }
   
   

