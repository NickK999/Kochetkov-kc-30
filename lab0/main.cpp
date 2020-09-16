#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int sum = 0, sum2 = 0, gen = 0, a = 0, b = 0, n, m;
cout << "Input n: ";
cin >> n;
cout << "Input m: ";
cin >> m;
srand(time(0));
while (sum <= n) {
gen = rand() % 11;
sum += gen;
sum2 += gen;
b += 1;
if (sum > n && sum % m != 0) {
a += 1;

sum = 0;
}

}
sum2 = sum2/b;
cout << "Attempt = " << a << endl;
cout << "Attempt = " << b << endl;
cout << "Score = " << sum << endl;
cout << "Score1 = " << sum2 << endl;
return 0;
}
