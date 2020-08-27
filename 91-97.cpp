//Q91
/*
#include <iostream>
using namespace std;
int main() {
	int n;
	int i;
	int num;
	int ar[23] = { 0, };
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> num;
		ar[num - 1]+=1;
	}
	for (i = 0; i < 23; i++) {
		cout << ar[i] << ' ';
	}
}
*/
//Q92
/*
#include <iostream>
using namespace std;
int main() {
	int n;
	int k;
	int i;
	int ar[10000];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> k;
		ar[i] = k;
	}
	for (i = n - 1; i >= 0; i--) {
		cout << ar[i] << ' ';
	}
}
*/
//Q93
/*
#include <iostream>
using namespace std;
int main() {
	int n,k;
	int i;
	int min=24;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> k;
		if (k < min) {
			min = k;
		}
	}
	cout << min << endl;
}
*/
//Q94
/*
#include <iostream>
using namespace std;
int main() {
	int n;
	int i,j;
	int x, y;
	int ar[19][19] = { 0, };
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x >> y;
		ar[x-1][y-1] = 1;
	}
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			cout << ar[i][j] << ' ';
		}
		cout << "\n";
	}
}
*/
//Q95
/*
#include <iostream>
using namespace std;
int main() {
	int a[19][19];
	int i, j;
	int n;
	int x, y;
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			cin >> a[i][j];
		}
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x >> y;
		for (j = 0; j < 19; j++) {
			if (a[x - 1][j])
				a[x - 1][j] = 0;
			else
				a[x - 1][j] = 1;
			if (a[j][y - 1])
				a[j][y - 1] = 0;
			else
				a[j][y - 1] = 1;
		}
	}
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			cout << a[i][j] << ' ';
		}
		cout << "\n";
	}
}
*/
//Q96
/*
#include <iostream>
using namespace std;
int main() {
	int h, w;
	int n;
	int i,j;
	int l, d, x, y;
	int ar[100][100] = { 0, };
	cin >> h >> w;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> l >> d >> x >> y;
		if (d == 0) {//가로
			for (j = y - 1; j < y + l-1; j++) {
				if (ar[x - 1][j]==0)
					ar[x - 1][j] = 1;
			}
		}
		else if (d == 1) {//세로
			for (j = x - 1; j < x + l-1; j++) {
				if (ar[j][y-1]==0)
					ar[j][y-1] = 1;
			}
		}
	}
	for (i = 0; i < h; i++) {
		for (j = 0; j < w; j++) {
			cout << ar[i][j] << ' ';
		}
		cout << "\n";
	}
}
*/
//Q97
/*
#include <iostream>
using namespace std;
int ar[10][10];
int solve(int x, int y) {
	if (ar[x][y] == 2) {
		ar[x][y] = 9;
		return 0;
	}
	else if (ar[x][y])
		return 0;
	else {
		if (ar[x][y + 1] != 1)
			solve(x, y + 1);
		else if(ar[x+1][y]!=1)
			solve(x + 1, y);
		ar[x][y] = 9;
	}
}
int main() {
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			cin >> ar[i][j];//0:갈 수 있는 곳, 1: 벽 또는 장애물, 2:먹이
		}
	}
	solve(1,1);
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			cout << ar[i][j] << ' ';//0:갈 수 있는 곳, 1: 벽 또는 장애물, 2:먹이
		}
		cout << "\n";
	}
}
*/