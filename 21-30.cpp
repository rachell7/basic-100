//Q21
/*
#include <iostream>
using namespace std;
int main(void) {
	int a,b;
	char tmp;
	cin >> a>>tmp>>b;
	cout << a << endl;
	cout << b << endl;
}
*/
//Q22
/*
#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	char a[21];
	cin >> a;
	for (int i = 0; i < strlen(a); i++) {
		cout << "\'" <<a[i]<< "\'"<< endl;
	}
}
*/
//Q23
/*
#include<iostream>
using namespace std;
int main(void) {
	int a, i;
	int ar[5];
	int p = 10000;
	cin >> a;
	for (i = 4; i >= 0; i--) {
		ar[i] = a % 10;
		a = a / 10;
	}
	for (i = 0; i < 5; i++) {
		cout << "[" << ar[i] * p << "]" << endl;
		p = p / 10;
	}
}
*/
//Q24
/*
#include <iostream>
using namespace std;
int main(void) {
	char tmp;
	int h, m, s;
	cin >> h >> tmp >> m >> tmp >> s;
	cout << m<<endl;
}
*/
//Q25
/*
#include <iostream>
using namespace std;
int main(void) {
	int y, m, d;
	char tmp;
	cin >> y >> tmp >> m >> tmp >> d;
	cout.width(2);
	cout.fill('0');
	cout << d << '-';
	cout.width(2);
	cout.fill('0');
	cout<< m << '-';
	cout.width(4);
	cout.fill('0');
	cout<< y << endl;
}
*/
//Q26
/*
#include <iostream>
using namespace std;
int main(void) {
	unsigned int a;
	cin >> a;
	cout << a;
}
*/
//Q27
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
	double a;
	cin >> a;
	cout << fixed<<setprecision(11)<<a << endl;
}
*/
//Q28
/*
#include <iostream>
using namespace std;
int main(void) {
	long long int a;
	cin >> a;
	cout << a << endl;
}
*/
//Q29
/*
#include <iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a;
	cout << oct << a;
}
*/
//Q30
/*
#include <iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a;
	cout << hex << a;
}
*/