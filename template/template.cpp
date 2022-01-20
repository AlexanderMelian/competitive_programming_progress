#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define ini(x) scanf("%d", &x)
#define inl(x) scanf("%lld", &x)
#define ins(s) getline(cin, s)
#define pri(x) printf("%d\n", x)
#define prl(x) printf("%lld\n", x)
#define prs(s) printf("%s\n", s)
//#define CALCULATE_TIME

void solve()
{
    int a[10] = {4, 2, 3, 5, 6, 7, 8, 9, 10, 1};
    int pass = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        pass++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
}

#ifdef CALCULATE_TIME
void calculate_time()
{
    auto start = clock();
    solve();
    auto end = clock();
    cout << "Time taken: " << end - start << endl;
}
#endif

int main()
{
    int t;
    ini(t);
#ifdef CALCULATE_TIME
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        calculate_time();
    }
#else
    while (t--)
    {
        solve();
    }
#endif
}
