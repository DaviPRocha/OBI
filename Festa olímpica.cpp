#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> t(m);
    for(int i = 0; i < m; i++) {
        cin >> t[i].first;
        t[i].second = 0;
    }

    int sImpressos = 0;

    for(int i = 1; sImpressos < 10000 && i <= n; i++) {
        bool canEnter = true;
        for(int j = 0; j < m; j++) {
            if(t[j].second+1 == t[j].first) {
                t[j].second = 0;
                canEnter = false;
                break;
            } else{t[j].second++;}
        }
        if(canEnter) {
            cout << i << endl;
            sImpressos++;
        }
    }

    return 0;
}
