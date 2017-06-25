#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    
    // your code goes here
    sort(a.begin(), a.end());
    
    int val = abs(a[1]-a[0]);
    for(int i = 2; i < n; i++){
       int delta = abs(a[i]-a[i-1]);
       if(delta < val){val = delta;}
    }
    
    cout << val;
    return 0;
}
