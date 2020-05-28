#include <bits/stdc++.h>
using namespace std;

int a[5000005], k, n;
void mysort(int l, int r)
{
    int lmid = l, rmid = r, mid = a[(l + r) / 2];
    while (lmid <= rmid)
    {
        while (a[rmid] > mid)
            rmid--;
        while (a[lmid] < mid)
            lmid++;
        if (lmid <= rmid)
        {
            swap(a[lmid], a[rmid]);
            lmid++; rmid--;
        }
    }
    if (k <= rmid)mysort(l, rmid);
    else if (lmid <= k)mysort(lmid, r);
    else
    {
        cout << a[rmid + 1] << "\n";
        return;
    }
}
int main()
{
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    mysort(0, n - 1);
    return 0;
}