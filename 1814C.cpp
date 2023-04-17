#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::cerr, std::endl, std::vector, std::pair;

typedef unsigned long long ull;

int
main()
{
    ull _t;
    cin >> _t;
    while (_t-- > 0) {
        ull n, s1, s2;
        cin >> n >> s1 >> s2;
        vector<vector<ull>> lists(2, vector<ull>(0));
        vector<pair<ull, ull>> v(n, pair{ 0, 0 });
        for (int i = 0; i < n; ++i) {
            v[i].first = i + 1;
            cin >> v[i].second;
        }
        std::sort(v.begin(), v.end(),
                  [](const pair<ull, ull> &a, const pair<ull, ull> &b) { return a.second > b.second; });
        for (auto &i: v) {
            lists[s1 * (lists[0].size() + 1) > s2 * (lists[1].size() + 1)].push_back(i.first);
        }

        for (int i = 0; i < 2; ++i) {
            cout << lists[i].size() << ' ';
            for (auto &j: lists[i]) {
                cout << j << ' ';
            }
            cout << endl;
        }
    }
}