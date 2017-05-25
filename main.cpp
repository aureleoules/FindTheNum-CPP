#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {    
    srand(time(NULL));
    const int maxRand = 10;
    int numToGuess = rand() % maxRand + 1;
    string numTry;
    int intNumTry = 0;
    int numTries = 0;
    do {
        cout << "Find the number between 1 and " << maxRand << ": " << endl;
        getline(cin, numTry);
        intNumTry = stoi(numTry);
        numTries++;
    } while(intNumTry != numToGuess);
    cout << "Success! The number was " << numToGuess << endl;
    cout << "You guess in " << numTries << " tries." << endl;

    return 0;
}