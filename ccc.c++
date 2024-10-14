#include <iostream>
#include <algorithm>

using namespace std;

#define int long long

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int ans = arr[0] + arr[1];
        for (int i = 2; i < n; i++) {
            ans += (arr[i] * 2);
        }
        cout << ans << "\n";
    }
    return 0;
}
