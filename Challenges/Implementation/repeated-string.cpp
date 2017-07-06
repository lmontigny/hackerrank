#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    long long n;
    cin >> n;
    
    long long int count = 0, count_a = 0, i = 0;
    for(char& c : s) {
        if(c == 'a') {
            count_a++;
        }
    }

    long long int l=s.length();
    count += ((n / l) * count_a);
    for(i = 0; i < (n % l); i++) {
        if(s[i] == 'a') {
            count++;
        }
    }
    
    cout << count;
    return 0;
}
