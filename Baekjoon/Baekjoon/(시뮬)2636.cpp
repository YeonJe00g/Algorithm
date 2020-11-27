
#include <iostream>
using namespace std;

int cheese[101][101];
int visit[101][101];
int n, m;

int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };

int pre_cheese = 0;
int save = 0;
int hour = 0;

void check(int x, int y, int h) {
	
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> cheese[i][j];
		}
	}
	while (1) {
		hour++;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (cheese[i][j] == 1)
					check(i, j, hour);
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << cheese[i][j];
			}
			cout << '\n';
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (cheese[i][j] >= 1) {
					pre_cheese++;
					if (cheese[i][j] == hour + 1)
						cheese[i][j] = 0;
				}

			}
		}
		if (pre_cheese != 0) {
			save = pre_cheese;
			pre_cheese = 0;
		}
		else
			break;
	}
	cout << hour << '\n' << save;
}


sk
 나 
방ㄷ금 그걸로 날라간듯ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
지워질까바
