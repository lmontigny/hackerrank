#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector < int > a, vector < int > b){
    // Complete this function
    int cnt=0;
    for(int x = 1; x <= 100; x++){
        bool a_val = false, b_val = false;
        int sum_a=0, sum_b=0;

        // Check if (x mod a_i=0) for each element
        for(int i = 0; i < a.size(); i++){
            if(x%a[i]==0) sum_a++;
        }
        if(sum_a==a.size()) a_val = true;;
        
        // Check if (b_i mod x=0) for each element
        for(int i = 0; i < b.size(); i++){
            if(b[i]%x==0) sum_b++;
        }
        if(sum_b==b.size()) b_val = true;;

        // If x is between A and B, increment counter by 1
        if(a_val==true && b_val==true) cnt++;
    }
    return cnt;
}


int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
