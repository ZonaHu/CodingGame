#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int l,h;
    cin >> l >> h; cin.ignore();
    vector<string> inp;
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        inp.push_back(row); // input as strings
    }
    // print inp[2].at[0], inp[1].at[0], inp[0].at[0], ....
    int count = 0;
    while(count!=l){
        for (int i = h - 1; i >= 0; i--){
            cout<<inp[i].at(count);
        }
        count ++;
        cout << endl;
    }
}
