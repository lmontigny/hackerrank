#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, tmp;
    cin >>n;
    vector<int> v;

    int i=0;
    while(i<n){
        cin >> tmp;
        v.push_back(tmp);
        i++;
    }

    int a, b, c;
    cin >> a;
    v.erase(v.begin()+a-1);
    cin >> b >> c;
    v.erase(v.begin()+b-1, v.begin()+c-1);

    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}
