//Q11
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
	float a;
	cin >> a;
	cout <<fixed<<setprecision(6)<<a;
}
*/
//Q12
/*
#include <iostream>
using namespace std;
int main(void) {
	int a, b;
	cin >> a >> b;
	cout << a <<' '<< b;
}
*/
//Q13
/*
#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	char a, b;
	cin >> a >> b;
	cout << b << ' ' << a;
}
*/
//Q14
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
	float a;
	cin >> a;
	cout << fixed<<setprecision(2) << a;
}
*/
//Q15
/*
#include <iostream>
using namespace std;
int main(void) {
	int a;
	cin >> a;
	cout << a << ' ' << a << ' ' << a;
}
*/
//Q16
/*
#include <iostream>
using namespace std;
int main(void) {
	int h, m;
	char tmp;
	cin >> h >> tmp >> m;
	cout << h << tmp << m;
}
*/
//Q17
/*
#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
int main(void) {
	int y,m,d;
	char tmp;
	cin >> y >> tmp >> m >> tmp >> d;
	
	cout.width(4);
	cout.fill('0');
	cout << y << tmp;
	cout.width(2);
	cout.fill('0');
	cout << m << tmp;
	cout.width(2);
	cout.fill('0');
	cout<<d;
}
*/
//Q18
/*
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string a;
	string x, y;
	cin >> a;
	x=a.substr(0,6);
	y = a.substr(7);
	cout << x << y;
}
*/
//Q19
/*
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string a;
	cin >> a;
	cout << a;
}
*/
//Q20
/*
#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string a;
	getline(cin,a);
	cout<<a;
}
*/