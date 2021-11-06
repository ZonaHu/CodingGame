#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string a;
    getline(cin, a);
    if (a.length() == 1)  cout << "wins" << endl;
    for(int i=0; i<a.length()/2; i++){
        if(a.at(i) != (a.at(a.length()-i-1))){
                cout<<"loses"<<endl;
                return 0;
        }
    }
    cout << "wins" << endl;
    return 0;
}
