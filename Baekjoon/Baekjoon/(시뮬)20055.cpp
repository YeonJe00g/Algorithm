#include <iostream>
#include <deque>

using namespace std;

deque<pair<int, bool>> belt;

int N, K;
int cnt = 0;
int ans = 0;

void turn_belt() {
	belt.push_front(belt.back());
	belt.pop_back();
}

void move_robot() {
	if (belt[N - 1].second)
		belt[N - 1].second = false;
	for (int i = N - 2; i >= 0; --i) {
		if (belt[i].second && !belt[i + 1].second && belt[i + 1].first >= 1) {
			belt[i].second = false;
			if (i + 1 == N - 1) {
				belt[i + 1].second = false;
			}
			else {
				belt[i + 1].second = true;
			}
			belt[i + 1].first--;
			if (belt[i + 1].first == 0)
				cnt++;
		}
	}
}

int main() {
	cin >> N >> K;
	for (int i = 0; i < 2 * N; i++) {
		int x; cin >> x;
		belt.push_back({ x, false });
	}
	while (1) {
		ans++;
		turn_belt();
		move_robot();
		if (belt[0].first >= 1) {
			belt[0].first--;
			if (belt[0].first == 0)
				cnt++;
			belt[0].second = true;
		}
		if (cnt >= K)
			break;
	}

	cout << ans;
}
