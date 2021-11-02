#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int m;
    cin >> m; cin.ignore();
    int n;
    cin >> n; cin.ignore();
   
    int ans =  (m+n)%7;
    if (ans == 0){
        ans = 7;
    }
    cout << ans << endl;
}
