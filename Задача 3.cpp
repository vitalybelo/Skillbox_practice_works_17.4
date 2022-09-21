#include <iostream>
using namespace std;

int getStringSize(const char *s) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

bool subString(const char *checkString, const char *pattern) {

    int pSize = getStringSize(pattern);
    int sSize = getStringSize(checkString);
    int oSize = sSize - pSize + 1;

    for (int i = 0; i < oSize; ++i) {
        if (checkString[i] == pattern[0]) {
            int j = 1;
            for (++i; j < pSize && i < sSize; ++i, ++j)
                if (checkString[i] != pattern[j]) break;
            if (j == pSize) return true;
        }
    }
    return false;
}

int main() {

    const char* text = "We are the champions, my friends";
    const char* look = "ion";
    const char* seek = "champions";
    const char* suck = "freinds";
    const char* dick = "ends";

    cout << endl;
    cout << "look for fragment: \'" << look << "\' in string: \'" << text << "\' ";
    cout << " = " << (subString(text, look) ? "TRUE" : "FALSE") << endl;

    cout << "look for fragment: \'" << seek << "\' in string: \'" << text << "\' ";
    cout << " = " << (subString(text, seek) ? "TRUE" : "FALSE") << endl;

    cout << "look for fragment: \'" << suck << "\' in string: \'" << text << "\' ";
    cout << " = " << (subString(text, suck) ? "TRUE" : "FALSE") << endl;

    cout << "look for fragment: \'" << dick << "\' in string: \'" << text << "\' ";
    cout << " = " << (subString(text, dick) ? "TRUE" : "FALSE") << endl;

    return 0;
}
