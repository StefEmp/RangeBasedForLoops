#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int scores[] {10, 20, 30};
    
    for (auto score: scores)
        cout << score << endl;
        
    vector<double> Temperatures {10.5, 25.2, 35.9, 55.7};
    double AverageTemp {};
    double Total {};
    
    for (auto Temp: Temperatures)
        Total += Temp;
        
        if (Temperatures.size() != 0)
        AverageTemp = Total / Temperatures.size();
        cout << fixed << setprecision(1); //round up to first decimal point
        cout << "Average Temperature is: " << AverageTemp << endl;
        
        for (auto val: {1, 2, 3, 4, 5})
            cout << val << endl;
            
            for (auto c: "This is a test")
                if(c != ' ')
                cout << c;
            for (auto c: "This is a test")
                if(c == ' ')
                    cout << "\t"; // put a space if a space is found
                    else
                        cout << c;
        cout << endl;
    return 0;
}
