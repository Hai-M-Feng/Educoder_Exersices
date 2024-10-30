#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    string s1;
    cin >> s1;
    int a[26];
    for (int i = 0; i < 26; i++)
        a[i] = 0;
    for (int i = 0; i < s1.length(); i++) {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
            a[s1[i] - 'A']++;
        if(s1[i] >= 'a' && s1[i] <= 'z')
            a[s1[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
        printf("%c&%c %d\n", i + 'A', i + 'a', a[i]);

    return 0;
}