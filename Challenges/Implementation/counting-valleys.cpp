#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cin >> n;
    
    int sea=0, valley=0;
    int sea_old;
    for(int i = 0; i < n; i++){
        char input;
        cin >> input;
        
        if(input=='U') {sea++;}
        else {sea--;}
               
        if(sea_old<0 && sea>=0) {valley++;}
        sea_old = sea;
    }

    cout << valley;    
    return 0;
}
