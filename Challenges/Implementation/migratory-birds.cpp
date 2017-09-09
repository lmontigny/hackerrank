// Migratory Birds Hackerrank solution

#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    vector<int> counter;
    for(int i = 0; i < 5; i++){
        counter.push_back(std::count(ar.begin(),ar.end(), i+1));
        //cout << std::count(ar.begin(),ar.end(), i+1) << endl;
    }
    
    int max_id = max_element(counter.begin(), counter.end()) - counter.begin();
    return max_id+1;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
