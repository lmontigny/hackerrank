#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) {
    // Complete this function
    int sum = (accumulate(ar.begin(), ar.end(), 0) - ar[k])/2;
    return abs(sum-b);    
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int b;
    cin >> b;
    int result = bonAppetit(n, k, b, ar);
    if(result==0) cout << "Bon Appetit" << endl;
    else cout << result << endl;
    return 0;
}
