#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string time;
    cin >> time;

    string hours = time.substr(0,2);
    string min = time.substr(3,2);
    string sec = time.substr(6,2);
    string m = time.substr(8,2);

    int myNr = std::stoi(hours);


    if (m=="AM"){
        if(myNr == 12) cout << "00" << ":" << min << ":" << sec;
        else cout << hours << ":" << min << ":" << sec;

    }
    else if(m=="PM"){
        if(myNr == 12) cout << "12" << ":" << min << ":" << sec;
        else cout << myNr+12 << ":" << min << ":" << sec;
    }

    return 0;
}
