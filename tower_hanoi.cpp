/* remember the recursion function is always stuck in a loop until the base condition arrives so becareful */

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char helper, char dest){
   
   if(n==0){
      return;  //base-case
   }

      towerOfHanoi(n-1, src, dest, helper); //where max number of elements go that is ur destination for that time being...
         cout<<"Move block "<<n<< " from "<<src<<" to "<<dest<<endl;
      towerOfHanoi(n-1, helper,src,dest);
}

int main(){

   towerOfHanoi(3,'A','B','C');
   return 0;
}