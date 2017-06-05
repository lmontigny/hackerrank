#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
   // Complete this function
    vector<int> vec;
    stringstream ss(str);
    char ch;
    int tmp;

    while(ss>>tmp){
        vec.push_back(tmp);
        ss >> ch;
    }

    //int a, b, c;
    //ss >> a >> ch >> b >> ch >> c;
    //vec.push_back(a);
    //vec.push_back(b);
    //vec.push_back(c);


    return vec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
