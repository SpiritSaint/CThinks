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
    vector<string> v { "Hello, ", "World", "!" };
    for (auto & i : v) {
        cout << i;
    }
    cout << endl;

    return 0;
}
