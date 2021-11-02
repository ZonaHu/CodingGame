#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    getline(cin, word);
    int ans = 0;
    for(int i = 0; i<word.length(); i++){
        int temp = (int)word.at(i);
        if (temp%2==1){
            ans+=temp;
        }
    }
    cout << ans << endl;
}
