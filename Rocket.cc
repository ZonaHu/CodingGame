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
    int distance;
    cin >> distance; cin.ignore();
    int time;
    cin >> time; cin.ignore();
    int velocity;
    cin >> velocity; cin.ignore();
    int fuel;
    cin >> fuel; cin.ignore();
    int fuel_consumption;
    cin >> fuel_consumption; cin.ignore();
    bool timeTrue;
    bool distanceTrue;
    if (velocity * time < distance){
        timeTrue = true;
        cout << "Failure, Not enough time" <<endl;
    }
    else if (fuel*fuel_consumption<distance){
        distanceTrue = true;
        if (distanceTrue && !timeTrue){
        cout << "Failure, Not enough fuel"<<endl;
        }
    }
    else{  
        cout << "Welcome to Mars"<<endl;
    }
}
