#include <iostream>
#include <cstring>
using namespace std;
const int MAX_WORDS = 100;
const int MAX_LENGTH = 50;
void toLowerCase(char* word) {
    for (int i = 0; word[i]; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = word[i] - 'A' + 'a';}}}
int main() {
    char sentence[1000];
    char words[MAX_WORDS][MAX_LENGTH];
    int count[MAX_WORDS] = {0};
    int wordCount = 0;
    cout << "Enter a sentence: ";
    cin.getline(sentence, 1000);
    char* token = strtok(sentence, " \t\n");
    while (token != NULL && wordCount < MAX_WORDS) {
        toLowerCase(token);
        bool found = false;
        for (int i = 0; i < wordCount; i++) {
            if (strcmp(words[i], token) == 0) {
                count[i]++;
                found = true;
                break;}}
if (!found) {
            strncpy(words[wordCount], token, MAX_LENGTH - 1);
            words[wordCount][MAX_LENGTH - 1] = '\0';
            count[wordCount] = 1;
            wordCount++;}
token = strtok(NULL, " \t\n");}
    cout << "Duplicate words:\n";
    bool hasDuplicates = false;
    for (int i = 0; i < wordCount; i++) {
        if (count[i] > 1) {
            cout << words[i] << " (" << count[i] << " times)\n";
            hasDuplicates = true;}}
    if (!hasDuplicates) {
        cout << "No duplicate words found.\n";}
    return 0;}
