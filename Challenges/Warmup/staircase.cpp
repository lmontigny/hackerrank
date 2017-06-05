#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;


int main(){
    int n;
    cin >> n;
    char c='#';

    int i = 1;
    while (i <= n) {
        for (int j = i+1; j <= n; j++) cout << " ";
        for (int k = n-i; k < n; k++) cout << "#";
        cout << endl;
        i++;
    }

    return 0;
}
