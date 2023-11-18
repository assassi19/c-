// C++ program to count Minimum number
// of jumps to reach end
#include <bits/stdc++.h>
using namespace std;

int max(int x, int y)
{
	return (x > y) ? x : y;
}

// Returns minimum number of jumps
// to reach arr[n-1] from arr[0]
int minJumps(vector<int> v1, int n){
	if (n <= 1)
		return 0;

	if (v1[0] >= n-1)
		return 1;

	if (v1[0] == 0)
		return -1;

	int maxReach = v1[0];

	// stores the number of steps
	// we can still take
	int step = v1[0];

	// stores the number of jumps
	// necessary to reacach that maximal
	// reachable position.
	int jump = 1;

	// Start traversing array
	int i = 1;
	for (i; i < n; i++) {
		// Check if we have reached the end of the array
		if (i == n - 1)  //cuz i'th element is of 1st pos & there are 9 more elements and 9th one is the last element...
			return jump;
		//Check if value at current index guarantees jump to end
		if (v1[i] >= (n-1) - i)
			return jump + 1;
		// updating maxReach
		maxReach = max(maxReach, i + v1[i]);

		// we use a step to get to the current index
		step--;

		// If no further steps left
		if (step == 0) {
			// we must have used a jump
			jump++;

			// Check if the current index/position or lesser index
			// is the maximum reach point from the previous indexes
			if (i >= maxReach)
				return -1;

			// re-initialize the steps to the amount
			// of steps to reach maxReach from position i.
			step = maxReach - i;
		}
	}

	return -1;
}

// Driver program to test above function
int main()
{
	int n;
   vector<int> v1;
   cout<<"Enter the size of arr:\t";
   cin>>n;
   for(int i=0; i<n; i++){
      int temp;
      cin>>temp; 
      v1.push_back(temp);
   }

	// Calling the minJumps function
	cout << ("Minimum number of jumps to reach end is %d ",minJumps(v1, n));
	return 0;
}
// This code is contributed by
// Shashank_Sharma