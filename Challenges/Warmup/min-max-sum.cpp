#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long a[5];
    long long sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a+5);
    cout << sum - a[4] << " " << sum - a[0] << endl;
    return 0;
}


//int main() {
//    vector<long int> arr(5), sum(5), bsum;
//    for(int arr_i = 0; arr_i < 5; arr_i++){
//       cin >> arr[arr_i];
//    }
//
//    for(int i=0; i<5; i++){
//        sum = arr;
//        sum.erase(sum.begin()+i);
//        bsum.push_back(accumulate(sum.begin(), sum.end(),0));
//    }
//
//    cout << *min_element(bsum.begin(), bsum.end()) << " ";
//    cout << *max_element(bsum.begin(), bsum.end());
//
//
//    return 0;
//}
