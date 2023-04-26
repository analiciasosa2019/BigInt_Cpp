// Analicia Sosa
// CECS325-02
// Prog6 - 3n+2
//
// I certify that this program is my own original work. I did not copy any part of this program from 
// and other source. I further certify that I typed each and every line of code in this program.

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int evens = 0;
int odds = 0;
int steps = 0;
int start = 0;
int maxim = 0;

void print(int n) {
	cout << "->(" << n << ") ";
}

int threeN(int n) {
	if (n == 1) {
		return 1;

	}
	if (n % 2 == 1) {
		if ((INT_MAX - 1) / 3 < n) {
			maxim = n;
			steps = 3 * n - 1;
			throw (-1);
		}
		n = 3 * n + 1;
		odds++;
	}
	else {
		n = n / 2;
		evens++;
	}
	print(n);
	steps++;
	if (n > maxim) maxim = n;
	return threeN(n);
}

int main(int argc, char* argv[]) {
	int n;

	if (argc == 1) {
		cout << "Enter a 3n+1 candidate number: ";
		cin >> n;
		try {
			threeN(n);
		}
		catch(int i) {
			cout << "->(Overflow)";
		}
	} else {
		int i = 1;
		while (i < argc) {
			steps = 0, maxim = 0, evens = 0, odds = 0;
			n = stoi(argv[i]);
			start = n;
			try {
				threeN(n);
			}
			catch(int b) {
				cout << "->(###overflow###)";
				cout << "\n\nOverflow detected for n: " << maxim;
				cout << "\n3n + 1: " << steps << "\n\n";
				i++;
				continue;
			}
			cout << "\nStart: " << start << "\nSteps: " << steps << "\nMax: " << maxim << 
				"\nEvens: " << evens << "\nOdds: " << odds << "\n\n";
			
			i++;
		}
	}
}
