#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto l = vector<int>(3);
	for (int i = 0; i < 3; ++i) {
		cin >> l[i];
	}

	sort(l.begin(), l.end());

	if (l[2] < l[0] + l[1]) {
		cout << l[0] + l[1] + l[2];
	}
	else {
		cout << 2 * (l[0] + l[1]) - 1;
	}

	return 0;
}