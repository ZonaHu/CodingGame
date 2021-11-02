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
    int ans;
    int n; // The numbers of paths the train can take
    cin >> n; cin.ignore();
    vector<int> input;
    int output = 0;
    for (int i = 0; i < n; i++) {
        int q; // The number of persons on the path
        int v; // The individual value of each person on the path
        cin >> q >> v; cin.ignore();
        input.push_back(q);
        input.push_back(v);
    }
    ans = (input[0])*(input[1]);
    for (int i = 2; i < input.size(); i+=2){
        int temp = input[i]*input[i+1];
        if (temp < ans){
            ans = temp;
            output = i/2;
        }
    }
    cout << output+1 << endl;
}
