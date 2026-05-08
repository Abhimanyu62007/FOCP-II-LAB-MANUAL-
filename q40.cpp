#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str, cleaned = "";
    getline(cin, str);

    int i, words = 0, digits = 0, special = 0;
    int valid = 1;

    int start = 0, end = str.length() - 1;

    while(str[start] == ' ')
        start++;

    while(str[end] == ' ')
        end--;

    for(i = start; i <= end; i++) {
        if(str[i] == ' ' && str[i + 1] == ' ')
            continue;

        cleaned += str[i];
    }

    for(i = 0; cleaned[i] != '\0'; i++) {
        cleaned[i] = tolower(cleaned[i]);
    }

    cleaned[0] = toupper(cleaned[0]);

    for(i = 0; cleaned[i] != '\0'; i++) {
        if(isdigit(cleaned[i]))
            digits++;
        else if(!(isalnum(cleaned[i]) || cleaned[i] == ' ')) {
            special++;
            valid = 0;
        }
    }

    for(i = 0; cleaned[i] != '\0'; i++) {
        if((i == 0 && cleaned[i] != ' ') || 
           (cleaned[i] != ' ' && cleaned[i - 1] == ' '))
            words++;
    }

    cout << "Normalized String: " << cleaned << endl;
    cout << "Words = " << words << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special Characters = " << special << endl;

    if(valid)
        cout << "Valid String";
    else
        cout << "Invalid String";

    return 0;
}
