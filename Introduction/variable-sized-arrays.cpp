#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,q, input, i, j;
    vector<int> tmp;
    cin >> n >> q;

    vector<vector<int> > a(n);

    for (int i=0; i<n; i++){
        int k;
        cin >> k;
        a[i].resize(k);
        for(int j=0; j<k; j++) cin >> a[i][j] ;
    }

    for (int i=0; i<q; i++){
        int idx, elm;
        cin >> idx >> elm;
        //cout << idx << " " << elm << endl;
        cout << a[idx][elm] << endl;
    }


    return 0;
}
