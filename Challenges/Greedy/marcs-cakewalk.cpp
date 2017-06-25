#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    // your code goes here
    
    long int miles = 0;
    sort(calories.begin(), calories.end(), greater<int>());
    
     for(int i = 0; i < n; i++){
         miles += calories[i]*pow(2,i);
    }
    cout << miles;
    return 0;
}
