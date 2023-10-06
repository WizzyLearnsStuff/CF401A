#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;

	int s = 0;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		s += k;
	}

	s = abs(s);

	cout << (s / x + (s % x > 0)); 
}
