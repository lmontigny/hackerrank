#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

std::vector<int> seperate_into_digits( unsigned int value )
{
    std::vector<int> digits ;
    for( ; value > 0 ; value /= 10 ) digits.push_back( value%10 ) ;
    std::reverse( digits.begin(), digits.end() ) ;
    return digits ;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        int count = 0;
        vector<int> val = seperate_into_digits(n);
        for(int i=0; i<val.size(); i++){
            if(val[i]!=0){
                if(n%val[i]==0) count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
