#include <iostream>
#include <string>
using namespace std;

int main(){
   string str, rev_str;
   cout<<"Enter a string : ";
   getline(cin, str);
   int str_length = str.length();
   for (int i = str_length -1; i!=-1; i--){
      int kar = str[i];
      rev_str.push_back(kar);
   }
   cout<<rev_str<<endl;
   return 0;
}