#include <iostream>
using namespace std;

void reverse(string s){
   if(s.length()==0){ //base case purposes   else recursion will go on infinitely 
      return ;
   }

   string rev_str = s.substr(1);  //if instead of 1 it's 0 means recursion will go forever; substr[i] will return the string from ith val
   //ownwards including i
   // cout<<s.substr(2)<<endl;    //this was just to check how recursion is working
   reverse(rev_str); //recursion call
   cout<<s[0];
}

int main(){
   string str;
   cout<< "Enter the string :";
   cin>> str;
   reverse(str);
   return 0;
}
