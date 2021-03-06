#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int>> q;
int N, K;
int check[100001];
int bfs(int x, int y) {
	q.push({ x, y });
	while (!q.empty()) {
		int location = q.front().first;
		int time = q.front().second;
		q.pop();
		if (location == K)
			return time;
		if (location - 1 >= 0 && check[location - 1] != 1)
		{
			q.push({ location - 1,time + 1 });
			check[location - 1] = 1;
		}
		if (location + 1 <= 100000 && check[location + 1] != 1)
		{
			q.push({ location + 1,time + 1 });
			check[location + 1] = 1;
		}
		if (location * 2 <= 100000 && check[location * 2] != 1)
		{
			q.push({ location * 2,time + 1 });
			check[location * 2] = 1;
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N >> K;
	cout << bfs(N, 0);
}