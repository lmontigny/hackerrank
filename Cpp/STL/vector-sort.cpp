#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n, tmp;
    vector<int> vec;

    cin >> n;
    while(cin >> tmp){
        vec.push_back(tmp);
    }
    sort(vec.begin(),vec.end());

    for (int i=0; i<n; i++){
        cout << vec[i] << " ";
    }
    return 0;
}
