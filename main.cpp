#include <bits/stdc++.h>
using namespace std;

int main() {

	int S, M, L, happinessScore; // This is where we declare the different sizes of the treats.

	cin >> S >> M >> L; // This is where you input the values of the different sizes of the treats.

	happinessScore = 1 * S + 2 * M + 3 * L; /* <--------- This is the calculation used for the happiness score; 
											as you can see, every small treat (S) is worth 1 point in the happiness score; 
											every medium treat (M) is worth 2 points on the happiness score; 
											and every large treat (L) is worth 3 points in the happiness score. Then, all of these points are summed up.*/
	
	if (happinessScore >= 10) { // This is the statement where it checks if the total points of the happiness score is equal to 10 or more than 10; then 10, it will print out "happy", indicating the dog is now happy.
		
		cout << "happy";

	} else {  // Otherwise, if the total points of happiness score is anything besides the condition previously said, it will print out "sad", indicating the dog is now sad.

		cout << "sad";

	}

	return 0;
	
} // Note: This else in the condition right now is just saying, "if the value of the variable is less than 10, print out 'sad'" if we wanted to be more specific, then we would use an else if instead
