#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string& filename) {
    ofstream outFile(filename); // Open the file in write mode
    if (!outFile) {
        cerr << "Error: Could not open the file for writing." << endl;
        return;
    }

    cout << "Enter data to write to the file (type END to stop):" << endl;
    string line;
    while (getline(cin, line)) {
        if (line == "END") break;
        outFile << line << endl;
    }
    outFile.close();
    cout << "Data written to " << filename << " successfully." << endl;
}

void readFromFile(const string& filename) {
    ifstream inFile(filename); // Open the file in read mode
    if (!inFile) {
        cerr << "Error: Could not open the file for reading." << endl;
        return;
    }

    cout << "Contents of the file " << filename << ":" << endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
}

void appendToFile(const string& filename) {
    ofstream outFile(filename, ios::app); // Open the file in append mode
    if (!outFile) {
        cerr << "Error: Could not open the file for appending." << endl;
        return;
    }

    cout << "Enter data to append to the file (type END to stop):" << endl;
    string line;
    while (getline(cin, line)) {
        if (line == "END") break;
        outFile << line << endl;
    }
    outFile.close();
    cout << "Data appended to " << filename << " successfully." << endl;
}

int main() {
    string filename;
    cout << "Enter the filename to work with: ";
    cin >> filename;
    cin.ignore(); // Clear the input buffer

    int choice;
    do {
        cout << "\nFile Handling Menu:" << endl;
        cout << "1. Write to file" << endl;
        cout << "2. Read from file" << endl;
        cout << "3. Append to file" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the input buffer

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                readFromFile(filename);
                break;
            case 3:
                appendToFile(filename);
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
