/* My real time thought process

=======> Before I begin Coding
	> if its a negative number, we're going to make it positive by using
		math.abs() and then make a flag to tell myself.. hey this number was/wasn't
		negative, do what you need to do at the end
	> the problem also says to return 0 when it overflows.. so that is an edge case..
		that we need to consider...
	> the widely known algorithim that I can think of is using modulo and division
	repeadetly.. no other *faster* algorithim comes to mind at this moment...
	
========> While I am Coding
	> so the first thing I'm going to check for if the number is between -9 <= 9
		because then we can just return that? not sure if this impacts performance at all..
	> need to add checks for int min.. and max
	
=======> After. Thoughts? Improvements? Obstacles?
	> I had to change reversed to long long because it was causing overflow issues..
	



*/

class Solution {
public:
    int reverse(int x) {
		
		if ( x < INT_MIN || x > INT_MAX ) return 0;

		long long reversed;
		while (x != 0)
		{
			int temp = x % 10;
			x /= 10;
			reversed = reversed * 10 + temp;
		}
	
		if (reversed < INT_MIN || reversed > INT_MAX) return 0;
		return reversed;   
    }
};
