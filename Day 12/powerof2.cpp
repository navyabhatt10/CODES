/**
Given an integer n, return true if it is a power of two. Otherwise, return false.
**/

class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
      if(n <= 0)
			return false;
	 return (n & (n - 1)) == 0;
	}
};
