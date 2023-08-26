#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWordsInFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error : Cannot Open File " << filename <<endl;
        return -1;
    }

    string line;
    int wordCount = 0;

    while (getline(file, line)) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            wordCount++;
        }
    }

    return wordCount;
}

int main() {
    string filename;
    cout << "Enter File Name : ";
    cin >> filename;

    int wordCount = countWordsInFile(filename);

    if (wordCount >= 0) {
        cout << "Total Words Count : " << wordCount << endl;
    }

    return 0;
}
