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
    int height;
    cin >> height; cin.ignore();
    int width;
    cin >> width; cin.ignore();
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    for (int i = 0; i < height ; i++){
        for (int i = 0; i < width; i++){
         cout <<"O";
        }
        cout << endl;
    }
}
