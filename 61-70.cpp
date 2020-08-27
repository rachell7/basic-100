//Q61
/*
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout <<( a > b ? a : b);
}
*/
//Q62
/*
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a < b ? a : b) < c ? (a < b ? a : b) : c);
}
*/
//Q63
/*
#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a % 2 == 0)
		cout << a << endl;
	if (b % 2 == 0)
		cout << b << endl;
	if (c % 2 == 0)
		cout << c << endl;
}
*/
//Q64
/*
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
	if (b % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
	if (c % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
}
*/
//Q65
/*
#include <iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a;
	if (a < 0)
		cout << "minus" << endl;
	else 
		cout << "plus" << endl;
	if (a % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
}
*/
//Q66
/*
#include <iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a;
	if (a >= 90 && a <= 100)
		cout << "A" << endl;
	else if (a >= 70)
		cout << "B" << endl;
	else if (a >= 40)
		cout << "C" << endl;
	else
		cout << "D" << endl;
}
*/
//Q67
/*
#include <iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	if (a == 'A')
		cout << "best!!!" << endl;
	else if (a == 'B')
		cout << "good!!" << endl;
	else if (a == 'C')
		cout << "run!" << endl;
	else if (a == 'D')
		cout << "slowly~" << endl;
	else
		cout << "what?" << endl;
}
*/
//Q68
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	switch (a) {
	case 12:
	case 1:
	case 2:
		cout << "winter" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "spring" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "summer" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "fall" << endl;
		break;
	}
}
*/
//Q69
/*
#include <iostream>
using namespace std;
int main() {
	int a;
	while (1) {
		cin >> a;
		if (a == 0)
			break;
		cout << a << endl;
	}
}
*/
//Q70
#include <iostream>
using namespace std;
int main() {
	int n;
	int a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cout << a<<endl;
	}
}