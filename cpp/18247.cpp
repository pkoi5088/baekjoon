#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		if (M < 4 || N < 12) {
			cout << "-1\n";
		}
		else {
			cout << M * 11 + 4 << "\n";
		}
	}
	return 0;
}