#include <iostream>
using namespace std;

void replace_pi(string s){
   if(s.length()==0){
      return;           //base case to break recursion
   }

   if(s[0]=='p' & s[1]=='i'){
      cout<<"3.14";
         replace_pi(s.substr(2));
   }
   else{
      cout<<s[0];
      replace_pi(s.substr(1));
   }
}

int main(){
   string str;
   cin>>str;
   replace_pi(str);
   return 0;
}