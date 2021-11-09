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
    auto x = [](const string & phrase) {
        cout << phrase << endl;
    };
    x("Hello, World!");

    /**
     * Running through vectors
     */
    vector<int> v { 10, 20, 30};
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }

    return 0;
}
