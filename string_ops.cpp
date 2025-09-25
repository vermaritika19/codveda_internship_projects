
// string_ops.cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    // 1) Reverse
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << "Reversed string: " << rev << endl;

    // 2) Vowel count
    int vowels = 0;
    for(char c : s) if(isalpha(c) && isVowel(c)) vowels++;
    cout << "Vowel count: " << vowels << endl;

    // 3) Palindrome check
    string filtered;
    for(char c : s) {
        if(isalnum((unsigned char)c)) filtered.push_back(tolower(c));
    }
    string revf = filtered;
    reverse(revf.begin(), revf.end());
    if(filtered == revf) {
        cout << "Palindrome ✅" << endl;
    } else {
        cout << "Not a palindrome ❌" << endl;
    }

    return 0;
}
