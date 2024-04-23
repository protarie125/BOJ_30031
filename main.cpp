#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

ll n;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;

  auto ans = ll{0};
  while (0 < (n--)) {
    ll x, y;
    cin >> x >> y;

    if (136 == x) {
      ans += 1000;
    } else if (142 == x) {
      ans += 5000;
    } else if (148 == x) {
      ans += 10000;
    } else if (154 == x) {
      ans += 50000;
    }
  }

  cout << ans;

  return 0;
}