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
    int i=0;
    string s;
    cin >> s;
    char c;
    
    int counter=1;
    while (s[i]){
        c=s[i];
        if (isupper(c)) counter++;
        i++;
    }
    cout << counter;
    
    return 0;
}
