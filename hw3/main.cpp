#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> AlinaDict;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        AlinaDict.push_back(word);    //заполняю вектор словами, слов n штук
    }
    for (int j = 0; j < m; j++) {
        int query;
        cin >> query;
        switch (query) {
            case 1: {
                int word_num;
                cin >> word_num;
                for (int i = 0; i < word_num; i++) {
                    string w;
                    cin >> w;
                    AlinaDict.push_back(w);

                }

                break;
            }
            case 2: {
                int word_num;
                cin >> word_num;
                int word_count = 0;
                for (int i = 0; i < word_num; i++) {
                    for (auto &x : AlinaDict) {
                        word_count+=1;
                        char letter;
                        cin >> letter;
                        cout << word_count << endl;
                        if (x.rfind(letter, 0)) {
                            cout << x << endl;
                        }
                    }

                }


            }
            default:
                break;
        }

    }
    return 0;

}
