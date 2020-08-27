//Q81
/*
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n+1; i++) {
		if (i == 3 || i == 6 || i == 9)
			cout << "X" << ' ';
		else
			cout << i << ' ';
	}
}
*/
//Q82
/*
#include <iostream>
using namespace std;
int main() {
	int r,g,b;
	int i, j, k;
	int count = 0;
	cin >> r >> g >> b;
	for (i = 0; i < r; i++) {
		for (j = 0; j < g; j++) {
			for (k = 0; k < b; k++) {
				cout << i <<' '<< j <<' '<< k <<'\n';
				count += 1;
			}
		}
	}
	cout << count << endl;
}
*/
//Q83
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long double h, b, c,s;
	long double r;
	cin >> h >> b >> c >> s;
	r = h * b * c * s;
	r = r / (1024 * 1024 * 8);
	cout <<fixed<<setprecision(1)<< r << ' ' << "MB";
}
*/
//Q84
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double w, h, b;
	double r;
	cin >> w >> h >> b;
	r = (w * h * b) / (1024 * 1024 * 8);
	cout << fixed << setprecision(2) <<r<< " MB"<<endl;
}
*/
//Q85
/*
#include <iostream>
using namespace std;
int main() {
	long a;
	long sum = 0,k=1;
	cin >> a;
	while (sum < a) {
		sum += k;
		k++;
	}
	cout << sum << endl;
}
*/
//Q86
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int i = 1; i < a + 1; i++) {
		if (i % 3 == 0)
			continue;
		else
			cout << i << ' ';
	}
}
*/
//Q87
/*
#include <iostream>
using namespace std;
int main() {
	int a, d, n;
	int i,j;
	cin >> a >> d >> n;
	for (i = a, j = 1; j < n; i += d, j++) {

	}
	cout << i << endl;
}
*/
//Q88
/*
#include <iostream>
using namespace std;
int main() {
	long a, r, n;
	long i, j;
	cin >> a >> r >> n;
	for (i = a, j = 1; j < n; i *= r, j++) {
	}
	cout << i << endl;
}
*/
//Q89
/*
#include <iostream>
using namespace std;
int main() {
	long long a, m, d, n;
	long long num, j;
	cin >> a >> m >> d >> n;
	num = a;
	for (j = 1; j < n; j++) {
		num = num * m + d;
	}
	cout << num << endl;
}
*/
//Q90
/*
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	int day=1;
	cin >> a >> b >> c;
	while (day % a != 0 || day % b != 0 || day % c != 0) {
		day++;
	}
	cout << day << endl;
}
*/