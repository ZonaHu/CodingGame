#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>


using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main(){
    int max;
    cin >> max; cin.ignore();
    int temp = max;
    string s_list;
    getline(cin, s_list);
    int n;
    cin >> n; cin.ignore();

    std::vector<string> vect;

    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str); // each item and its price separated by a comma
        std::stringstream ss(str);
         stringstream s_stream(str); //create string stream from the string
         while(s_stream.good()) {
            string substr;
            getline(s_stream, substr, ','); //get first string delimited by comma
            vect.push_back(substr); // parse in lemonade, 2,...
            }
    }

    for (int i = 0; i < vect.size(); i+=2){
        if (s_list.find(vect[i]) != std::string::npos){
        temp -= stoi(vect[i+1]);
        }
    }

    if (temp >= 0){
        std::cout << "true" << endl;
         std::cout << temp << endl;
    }else{
        std::cout << "false" << endl;
         std::cout << 0-temp << endl;
        }
    }