#include <iostream>
#include <vector>

using namespace std;



int main() {
    /**
     * Anonymous function directly invoked
     */
    [](const string & phrase) {
        cout << phrase << endl;
    }("Hello, World!");

    /**
     * Anonymous function as variable
     */
    auto anon = [](const string & phrase) {
        cout << phrase << endl;
    };
    anon("Hello, World!");

    /**
     * Running through vectors
     */
    vector<string> strings { "Hello, ", "World", "!" };
    for (auto & phrase : strings) {
        cout << phrase;
    }
    cout << endl;

    /**
     * String from
     */
    string input;
    getline(cin, input);
    cout << input;

    /**
     * Data types
     */
    char    A = 'A';
    bool    B = true;
    int     C = 10;
    float   F = 10000.0;
    double  G = 10.0;

    return 0;
}
