#include <bits/stdc++.h>
using namespace std;

int main() {

	int S, M, L, happinessScore;

	cin >> S >> M >> L;

	happinessScore = 1 * S + 2 * M + 3 * L;

	if (happinessScore >= 10) {

		cout << "happy";

	} else {

		cout << "sad";

	}

	return 0;
	
}