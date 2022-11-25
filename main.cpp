#include <iostream>
using namespace std;
int main() {
    int n, a=1, b=1;
    int s;
    cin >> n;
    cout << a << endl << b << endl;
    for (int i=3; i<=n; i++){
        s=a+b;
        a=b;
        b=s;
        cout << s << endl;

    }
    return 0;
}
