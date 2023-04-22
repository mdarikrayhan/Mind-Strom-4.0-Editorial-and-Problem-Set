#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p;
    cin >> n;
    unordered_map<string, string> synonyms;
    string word, synonym;
    for (int i = 0; i < n; i++) {
        cin >> word >> synonym;
        synonyms[word] = synonym;
        word[0]=toupper(word[0]);
        synonym[0]=toupper(synonym[0]);
        synonyms[word] = synonym;
    }
    cin.ignore();
    string paragraph;
    getline(cin, paragraph);
    stringstream ss(paragraph);
    string token, updated_paragraph;
    int count = 0;
    while (ss >> token) {
        while (synonyms.find(token) != synonyms.end()) {
            token = synonyms[token];
            count++;
        }
        updated_paragraph += token + " ";
    }
    cout << count << endl << updated_paragraph << endl;
    return 0;
}
