#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m = 5, n;
    cin >> n;
    
    int m_like = floor(m/2);
    int total = m_like;
    for(int i=2; i<=n; i++){
        m = m_like*3;
        m_like = floor(m/2);
        total+=m_like;
    }
    cout << total;
    
    return 0;
}
