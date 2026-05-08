#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string username;
    int valid = 1;

    getline(cin, username);

    for(int i = 0; username[i] != '\0'; i++) {
        if(!(isalnum(username[i]) || username[i] == '_')) {
            valid = 0;
            break;
        }
    }

    if(valid)
        cout << "Valid Username";
    else
        cout << "Invalid Username";

    return 0;
}
