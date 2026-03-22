#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int n = 0, i = 1, ans = 0;

    while(n < b) {
        n = i*i*i*i*i*i;
        if(a <= n && n <= b) {ans++;}
        i++;
    }

    cout << ans;

    return 0;
}
