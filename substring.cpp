#include <iostream>
using namespace std;

void substring(string s, string ans){
      if(s.length()==0){
         cout<<ans<<endl;
         return;
      }
   
   char ch=s[0];
   string ros = s.substr(1);

   substring(ros,ans); // here answer is empty and doesn't take any value at all 
   substring(ros,ans+ch);  // here answer is always appended by one character of the original string one by one per each recursion
}

int main(){

   substring("cat", "");
   cout<<endl; 
   return 0;
}