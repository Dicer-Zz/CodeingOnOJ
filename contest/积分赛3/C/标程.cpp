#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3 + 10;
double a[MAXN], b[MAXN];

int main() {
//	freopen("in.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
	int T, n;
	scanf("%d", &T);
	while(T--) {
		scanf("%d", &n);
		for(int i = 1; i <= n; ++i) scanf("%lf", &a[i]);
		int p = 0;
		for(int i = 3; i <= n - 1; ++i) {
			double ans = 0.0;
			for(int j = i + 1; j <= n; ++j) {
				ans = max(ans, a[i] / a[j]);
			}
			b[i] = ans;
		}
		for(int i = n - 2; i >= 3; --i) {
			b[i] = max(b[i], b[i + 1]);
		}
		double y = -1e20;
		for(int i = 1; i <= n - 3; ++i) {
			for(int j = i + 1; j <= n - 2; ++j) {
				y = max(y, (a[j] * b[j + 1] - a[i]) / (a[i] + a[j]));
			}
		}
		printf("%.3lf\n", y);
	}
	return 0;
}
