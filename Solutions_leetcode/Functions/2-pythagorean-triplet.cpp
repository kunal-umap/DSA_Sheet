#import <bits/stdc++.h>

class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	unordered_set<int> sqr;
      for(int i=0;i<n;i++){
         sqr.insert(arr[i]*arr[i]);
      }
      
      for(auto i:sqr)
          for(auto j : sqr)
            if(sqr.find(i+j)!=sqr.end()){
              return true;
            }
              
      return false;
      
	}
};