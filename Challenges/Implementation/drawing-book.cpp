#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function

    int val = 0;
    if(p<=(n/2)) val = p/2;
    else if(p>(n/2)){
        if(n%2==0) val = ((n-p)+1)/2;
        else val = (n-p)/2;
    }
    return val;
}


int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
