#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	long long mn = 1e16, mx = -1e16;
	for (int i = 1; i * i * i <= n; ++i) {
		if (n % i != 0) continue;

		for (int j = i; i * j * j <= n; ++j) {
			if ((n / i) % j != 0) continue;

			mn = min(mn, (long long)(i + 2) * (j + 2) * (n / i / j + 1));
			mx = max(mx, (long long)(i + 2) * (j + 2) * (n / i / j + 1));
			mn = min(mn, (long long)(i + 1) * (j + 2) * (n / i / j + 2));
			mx = max(mx, (long long)(i + 1) * (j + 2) * (n / i / j + 2));
		}
	}
	printf("%lld %lld", mn - n, mx - n);
	return 0;
}