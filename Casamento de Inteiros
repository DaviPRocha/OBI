#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    string maiorS = a.size()>b.size() ? a : b;
    string menorS = a.size()>b.size() ? b : a;

    while(menorS.size() < maiorS.size()) {
        menorS = "0" + menorS;
    }

    a = ""; b = a;

    for(int i=0; i<maiorS.size(); i++) {
        if (maiorS[i] > menorS[i]) {a+=maiorS[i];}
        else if (maiorS[i] < menorS[i]) {b+=menorS[i];}
        else {a+=maiorS[i]; b+=menorS[i];}
    }

    if(a.size()==0) {a="-1";}
    if(b.size()==0) {b="-1";}

    cout << min(stoi(a), stoi(b)) << " " << max(stoi(a), stoi(b));

    return 0;
}
