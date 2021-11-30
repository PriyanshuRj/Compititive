#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int it = 0; it < t; it++)
    {
        int n, p, q;
        cin >> n >> p >> q;
        string s;
        cin >> s;
        int disd1 = 0;
        int disd2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                disd1++;
            if (s[i] == '0')
            {
                disd2++;
                int temp = disd2;
                disd2 = disd1;
                disd1 = temp;
            }
        }
        int output = 0;
        if ((disd1 - p) >= 0 && (disd1 - p) % 2 == 0)
        {
            if ((disd2 - q) >= 0 && (disd2 - q) % 2 == 0)
                output = 1;
        }
        if ((disd1 - q) >= 0 && (disd1 - q) % 2 == 0)
        {
            if ((disd2 - p) >= 0 && (disd2 - p) % 2 == 0)
                output = 1;
        }
        if (output == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}