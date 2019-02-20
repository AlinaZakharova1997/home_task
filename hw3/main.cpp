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
        AlinaDict.push_back(word);
        for (int j = 0; j < m; j++) {
            int query;
            cin >> query;
            switch (query) {
                case 1: {
                    int word_num;
                    cin >> word_num;
                    while (word_num > 0) {
                        string w;
                        cin >> w;
                        AlinaDict.push_back(w);
                        word_num--;
                        break;
                    }

                }
                case 2: {
                    int word_num;
                    cin >> word_num;
                    while (word_num > 0) {
                        for (int x = 0; x < AlinaDict.size(); x++) {
                            char letter;
                            cin >> letter;
                            cout << word_num << endl;
                            if (AlinaDict[x].rfind(letter, 0)) {
                                cout << AlinaDict[x] << endl;
                            }
                        }

                    }


                }
            }

        }
        return 0;
    }
}
