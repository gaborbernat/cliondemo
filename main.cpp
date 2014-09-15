#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    for_each(begin(numbers), end(numbers), [](int &i) {
        i *= 2;
        cout << i << endl;
    });
    return 0;
}
