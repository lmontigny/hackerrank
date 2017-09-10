// Sherlock and Squares Hackerrank Solution 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, A, B;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> A >> B;
        int count = 0;
        for(int j=1; pow(j,2)<=B; j++){
            if(pow(j,2)>=A && pow(j,2)<=B) count++;
        }
        cout << count << endl;
    }
    
    return 0;
}
