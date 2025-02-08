#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, cleanStr;
    int freq[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

   
    for (char ch : str) {
        if (ch != ' ') {
            if (ch >= 'A' && ch <= 'Z')  
                ch += 32;
            cleanStr += ch;
            freq[ch]++;
        }
    }


    string revStr = cleanStr;
    reverse(revStr.begin(), revStr.end());
    cout << (cleanStr == revStr ? "The string is a palindrome." : "The string is not a palindrome.") << endl;

    
    cout << "Character frequencies:\n";
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (freq[ch] > 0) cout << ch << ": " << freq[ch] << endl;
    }

    
    cout << "String after replacing vowels with '*': ";
    for (char ch : str) {
        char lowerCh = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch; 
        cout << ((lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') ? '*' : ch);
    }
    cout << endl;

    return 0;
}