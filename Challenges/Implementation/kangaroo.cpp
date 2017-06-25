#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    string location = "NO";
    for(int i=0; i<1e4; i++){
        int kangaroo1, kangaroo2;
        kangaroo1 = x1 + i*v1;
        kangaroo2 = x2 + i*v2;  
              
        if(kangaroo1 == kangaroo2){
            location = "YES";
            break;
        }
    }
    return location;
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
