//Q71
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	while (a != 0) {
		cout << a << endl;
		cin >> a;
	}
}
*/
//Q72
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	while (a) {
		cout << a << endl;
		a--;
	}
}
*/
//Q73
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	while (a) {
		cout << a - 1 << endl;
		a--;
	}
}
*/
//Q74
/*
#include <iostream>
using namespace std;
int main() {
	char e;
	char start='a';
	cin >> e;
	while (start <= e) {
		cout << start << endl;
		start++;
	}
}
*/
//Q75
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a + 1; i++) {
		cout << i << endl;
	}
}
*/
//Q76
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	int sum = 0;
	cin >> a;
	for (int i = 1; i < a + 1; i++) {
		if (i % 2 == 0)
			sum += i;
	}
	cout << sum << endl;
}
*/
//Q77
/*
#include <iostream>
using namespace std;
int main() {
	char a='a';
	while (a!='q') {
		cin >> a;
		cout << a << endl;
	}
}
*/
//Q78
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	int sum = 0;
	int i = 0;
	cin >> a;
	while (sum < a) {
		i++;
		sum += i;
	}
	cout << i << endl;
}
*/
//Q79
/*
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	for (int i = 1; i < a + 1; i++) {
		for (int j = 1; j < b + 1; j++) {
			cout << i <<' '<< j << endl;
		}
	}
}
*/
//Q80
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a;
	cin >> hex>>a;
	for (int i = 1; i <16; i++) {
		cout <<uppercase<< hex<<a << '*' << uppercase << hex << i << '=';
		cout << hex << a * i<<endl;
	}
}