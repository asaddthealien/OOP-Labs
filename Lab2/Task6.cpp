#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct subject{
    string sub;
};

struct outer{
    int id;
    struct subject subs[3];
};

int main() {
    vector<outer> out;

    return 0;
}