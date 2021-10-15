#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  year1, year2;
    cin >> year1 >> year2;
    for (year1; year1 <= year2; year1++)
    {
        if (year1 % 4 == 0)
        {
            if (year1 % 100 == 0)
            {
                if (year1 % 400 == 0)
                {
                    cout << "leap year" << year1 << endl;
                }
            }
            else cout<<"leap year"<<year1<<endl;
        }
    }
    return 0;
}