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
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }

    int i=0, cnt=0;
    while(true){
        if(i + 2 < n && c[i + 2] == 0) {
            i += 2;
        } else if(i + 1 < n) {
            i++;
        } else {
            break;
        }
        cnt++;
	}
    cout << cnt;
    return 0;
}
