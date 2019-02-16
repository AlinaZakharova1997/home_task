#include <iostream>
#include<set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m >> endl;
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
                    break;
                }
            }
        }
        case 2: {
            int b, a;
            cin >> b >> a;
            if (s.count(a) > 0) {
                s.erase(a);
                s.insert(b);

            }
        }

    }
}


return 0;

}
}
