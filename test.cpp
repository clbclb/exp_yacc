#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <sstream>
#include <iostream>
using namespace std;

vector<unique_ptr<int>> a, b;

int main() {
    for (int i = 1; i <= 5; i++) {
        unique_ptr<int> now = make_unique<int>(i);
        a.push_back(std::move(now));
    }
    for (auto &now : a) {
        b.push_back(std::move(now));
    }
    cout << "\\n";
}