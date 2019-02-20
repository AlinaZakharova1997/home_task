#include <iostream>
#include<set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num);
    }
    for (int i = 0; i < m; i++) {
        int query;
        cin >> query;
        switch (query) {
            case 1: {
                int a;
                cin >> a;
                if (s.count(a) > 0) {
                    cout << s.count(a) << endl;
                } else {
                    cout << 0 << endl;
                }
                break;
            }

            case 2: {
                int a, b;
                cin >> a >> b;
                for (int c = 0; c < s.count(a); c++) {
                    s.insert(b);
                }
                s.erase(a);

            }
            default:
                break;
        }

    }
    return 0;
}




