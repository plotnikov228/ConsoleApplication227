#include <iostream>
using namespace std;


int main() {

    int n;
    cout << "n= ";
    cin >> n;
    double y = 1;
    double c = 1;
    for (int i = 0; i < n; i++)
    {
        y = c / 2;
        c = y;
    }
    cout << y;
    return 0;
}



//15. Вычислить  y(n) = 1/1+1/1+1.., nзадает число ступеней.