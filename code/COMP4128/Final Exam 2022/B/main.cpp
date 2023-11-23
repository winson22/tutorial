#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
typedef long long ll;
typedef unsigned long long ull;

typedef struct edge {
    int u;
    int v;
    int w;

    bool operator>(const edge &y) const {
        return w > y.w;
    }

    bool operator<(const edge &y) const {
        return w < y.w;
    }

    bool operator==(const edge &y) const {
        return w == y.w;
    }
} edge;

int main() {
    std::cin.tie(nullptr);
    std::cin.sync_with_stdio(false);

    j = 1;
}
