#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    
    int fine=0;
    if(y1==y2 && m1==m2 && d1>d2){
        fine=15*abs(d1-d2);
    }
    else if(y1==y2 && m1>m2){
        fine=500*abs(m1-m2);
    }
    else if(y1>y2){
        fine=10000;
    }
    cout << fine;
    return 0;
}
