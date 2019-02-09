#include <iostream>
#include<set>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int query;
        cin >> query;
        switch (query) {
            case 1: {
                int a;
                cin >> a;
                for (int el:s) {
                    if (el == a) {
                        cout << s.count(el) << endl;
                        break;
                    }
                }
            }
            case 2: {
                int b, a;
                cin >> b >> a;
                for (int el:s) {
                    if (el == a) {
                        s.erase(a);
                        s.insert(b);

                    }
                }

            }
        }


        return 0;

    }
}