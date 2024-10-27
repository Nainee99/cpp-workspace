#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "fscdefgdgajdfafj";

    int feq[26];

    for (int i = 0; i < 26; i++)
    {
        feq[i] = 0;
    }

    for (int i = 0; i < 26; i++)

        feq[s[i] - 'a']++;

    char ans = 'a';
    int maxf = 0;

    for (int i = 0; i < 26; i++)
    {
        if (feq[i] > maxf)
        {
            maxf = feq[i];
            ans = i + 'a';
        }
    }

    cout << maxf << " " << ans << endl;

    return 0;
}