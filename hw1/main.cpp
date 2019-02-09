#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    float standard;
    int words_in_line;
    double mean_deviation;
    cin >> standard >> words_in_line;
    vector<char> symbols;
    for (int i = 0; i < words_in_line; i++) {
        string word;
        cin >> word;
        for (char w:word) {
            if (isalpha(w)) {
                symbols.push_back(w);
            }
        }
    }

    vector<double> freq;
    //arr[ch - 'a']++;
    //
    for (char ch = 'A'; ch <= 'Z'; ch++) {  // иду по всему алфавиту
        for (int i = 0; i < symbols.size(); i++) {
            int count = 0;
            if (symbols[i] == ch) {
                count++;
            }
        }
        freq.push_back(count);
    } // вектор со всеми частотами
    vector<double> freq_percent; // записываю сюда % каждого символа
    for (double f:freq) {
        freq_percent.push_back((f / symbols.size()) * 100);
    }
    double freq_Alphabet[26] = {8.17, 1.49, 2.78, 4.25, 12.7, 2.23, 2.02, 6.09,
                                6.97, 0.15, 0.77, 4.03, 2.41, 6.75, 7.51, 1.93, 0.1, 5.99, 6.33,
                                9.06, 2.76, 0.98, 2.36, 0.25, 1.97, 0.05};
    double sum = 0;
    for (int i = 0; i < 26; i++) {
        sum += abs(freq_Alphabet[i] - freq_percent[i]);
    }
    mean_deviation = sum / 26;
    if (mean_deviation < standard) {
        cout << "YES" << endl;
    } else { cout << "NO" << endl; }
    return 0;
}