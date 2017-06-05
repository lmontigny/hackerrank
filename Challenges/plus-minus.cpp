#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
        double positive, negative, zeroes;

    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if (arr[arr_i]>0) positive++;
        if (arr[arr_i]<0) negative++;
        if (arr[arr_i]==0) zeroes++;

    }

    cout << positive/n << endl;
    cout << negative/n << endl;
    cout << zeroes/n << endl;
    return 0;
}
