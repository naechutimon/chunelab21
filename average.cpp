
#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    
    if (argc < 2) {
        cout << "Please input numbers to find average." << "\n";
        return 0;
    }
    
    vector <double> numbers;
    double sum = 0.0;
    
    for (int i = 1; i < argc; ++i) {
        
        double num = atof(argv[i]);
        numbers.push_back(num);
        sum += num;
    }
    
    double average = sum / numbers.size();
    
    cout << "---------------------------------\n";
    cout << "Average of " << numbers.size() << " numbers = ";
    
    if (floor(average) == average) {
        cout << static_cast<int>(average) << "\n";
    } else {
        cout << fixed << setprecision(3) << average << "\n";
    }
    
    cout << "---------------------------------" << "\n";
    
    return 0;
}
