#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b, c, d;
        cin >> b >> c >> d;
        string s;
        cin >> s;
        int point = 0;
        if (d >= 0)
        {
            point = b * c;
            point += b * d;
        }
        else
        {
            int cnt = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if (j == 0)
                {
                }
                else if (s[j] != s[j - 1])
                {
                    cnt++;
                }
            }
            if (cnt % 2 == 1)
            {
                cnt /= 2;
                cnt += 2;
            }
            else
            {
                cnt /= 2;
                cnt++;
            }

            point = b * c;
            point += cnt * d;
        }
        cout << point << endl;
    }
}
