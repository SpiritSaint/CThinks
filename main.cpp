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
    cout << input << endl;

    /**
     * Data types
     */
    char    A = 'A';
    bool    B = true;
    int     C = 10;
    float   F = 100.0;
    double  G = 10.0;

    float &R = F;
    cout << R << endl;

    /**
     * Using references
     */
    int number = 500;
    int & referenced_number = number;
    cout << number << endl;

    // When an ampersand exists on function parameter
    // The variable value replacement is stored
    // When is out of scope
    auto referenced = [](int & number) {
        number = 750;
        cout << number << endl;
    };

    // This function should print 750
    referenced(referenced_number);

    // This should print 750
    cout << referenced_number << endl;

    cout << number << endl;

    // When non ampersand exists on function parameter
    // The variable value replacement is ignored
    // When is out of scope
    auto unreferenced = [](int number) {
        number = 950;
        cout << number << endl;
    };

    // This function should print 950
    unreferenced(referenced_number);

    // This should print 750
    cout << referenced_number << endl;

    // This should print 750
    cout << number << endl;

    return 0;
}
