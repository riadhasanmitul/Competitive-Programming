#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;
#define FASTIO                       \
    ios_base::sync_with_stdio(NULL); \
    cin.tie(NULL);
void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
}
double circleinasquare(double r) {
    double res;
    res=((2*r)*(2*r))-(2*acos(0.0)*r*r);
    return res;
}

/**
 * Takes care of the problem input and output.
 */
int main() {
    init_code();
    FASTIO
    int cases;
    cin>>cases;
    for (int caseno = 1; caseno <= cases; ++caseno) {
        double n;cin>>n;
        printf("Case %d: %.2lf\n", caseno, circleinasquare(n));
    }
    return 0;
}