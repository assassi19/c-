#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
//     int T,B,L,R,dir;
//     T=0;
//     B=A.size()-1;
//     L=0;
//     R=A[0].size()-1;
//     dir=0;
//     int i;
//     vector<int> ans;

//     while(T<=B && L<=R)
//     {
//         if(dir==0)
//         {
//             for(i=L;i<=R;i++)
//                 ans.push_back(A[T][i]);
//             T++;
//         }
//         else if(dir==1)
//         {
//             for(i=T;i<=B;i++)
//                 ans.push_back(A[i][R]);
//             R--;
//         }
//         else if(dir==2)
//         {
//             for(i=R;i>=L;i--)
//                 ans.push_back(A[B][i]);
//             B--;
//         }
//         else if(dir==3)
//         {
//             for(i=B;i>=T;i--)
//                 ans.push_back(A[i][L]);
//             L++;
//         }
//         dir=(dir+1)%4;
//     }
//     return ans;
// }

class Solution{
   public:
      vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) {
        // matrix is made of mxn where m = r & n = c so...
        //making pointers to guide the input 
      int i,k=0,l=0;
      vector<int> ans;
      while(l<c && k<r){
            //#1 for left to write ----->
            for(i=l;i<c;i++){  //k i.e. row is constant and column is chnging
               ans.push_back(matrix[k][i]);
            }   k++;  //removes the previous / done row from the next iteration
            
            
            //#2 from top to bottom 
            for(i=k;i<r;i++){  //for traversing through fixed column while row is changing
               ans.push_back(matrix[i][c-1]); //for four-1 --> we use [3] for col. index
               } c--; //this makes it proper 3...
            
            //#3 from right to left side of the thing....
            
            if(k<r){
               for(i=c-1; i>=l; i--){
                  ans.push_back(matrix[r-1][i]);
               }r--;
            }
            
            // #4 now it's time to go from bottom to up ^^
            if(l<c){
               for(i=r-1; i>=k; i--){
                  ans.push_back(matrix[i][l]);
               }l++;
            }
      }
   return ans;
   }
};


int main(){
   int t;
   cin>>t;
   while(t--){
      int r,c;
      cin>>r>>c;
      vector<vector<int>>matrix(r);
      for(int i=0; i<r; i++){
         matrix[i].assign(c,0);
         for(int j=0; j<c; j++){
            cin>>matrix[i][j];
         }
      }
   Solution ob;
   vector<int> result = ob.spirallyTraverse(matrix,r,c);
   for(int i=0; i<result.size(); ++i){
      cout<<result[i]<<" ";
   
   }
   cout<<endl;
   return 0;
   }
}