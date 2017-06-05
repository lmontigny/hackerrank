#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
  string a,b, c, d;
    cin >> a;
    cin >>b;

    c=a;
    c[0] = b[0];

    d=b;
    d[0] = a[0];

    cout << a.size() << " " << b.size() << endl;
    cout << a+b << endl;
    cout << c << " " << d;

    return 0;
}
