#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll func1(ll* array, int n) {
	ll best = 0LL;
	for (int a = 0; a < n; a++) {
		for (int b = a; b < n; b++) {
			ll sum = 0;
			for (int k = a; k <= b; k++) {
				sum += array[k];
			}
			best = max(best, sum);
		}
	}
	return best;
}

ll func2(ll* array, int n) {
	ll best = 0LL;
	for (int a = 0; a < n; a++) {
		ll sum = 0;
		for (int b = a; b < n; b++) {
			sum += array[b];
			best = max(best, sum);
		}
	}
	return best;
}	


ll func3(ll* array, int n) {
	ll best {0LL}, sum{0LL};
	for (int k = 0; k < n; k++) {
		sum = max(array[k], sum + array[k]);
		best = max(best, sum);
	}
	return best;
}	

int main()
{
	ll a[] {-1, 2, 4, -3, 5, 2, -5, 2};
	int sz = sizeof(a) / sizeof(ll);

	cout << func1(a, sz) << endl;
	cout << func2(a, sz) << endl;
	cout << func3(a, sz) << endl;
}
