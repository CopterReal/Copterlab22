#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int calAverage(vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        cout << "Please input numbers to find average." << endl;
    } else {
        vector<int> numbers;
        for (int i = 1; i < argc; ++i) {
            stringstream ss(argv[i]);
            int num;
            if (ss >> num) {
                numbers.push_back(num);
            }
        }

        if (!numbers.empty()) {
            int average = calAverage(numbers);
            cout << "---------------------------------" << endl;
            cout << "Average of " << numbers.size() << " numbers = ";
            cout << average << endl;
            cout << "---------------------------------" << endl;
        } else {
            cout << "No valid numbers provided." << endl;
        }
    }

    return 0;
}

