#include <iostream>

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
    auto x = [](const string & phrase) {
        cout << phrase << endl;
    };

    x("Hello, World!");

    return 0;
}
