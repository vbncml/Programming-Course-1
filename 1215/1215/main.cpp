#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, n ;
    int x[4000], y[4000], r[100];
    double  d;
    cin >> a >> b >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y [i];
    }
    
    for (int i = 0; i < n; i++) {
        r[i] = sqrt((x[i]-a)*(x[i]-a) + (y[i] - b)*(y[i] - b));
    }
                   int m = r[0];
                   for (int i = 0; i < n; i++)
                   {
                       if (r[i] < m){
                       int tmp = r[i];
                       r[i] = m;
                       m = tmp;
                       }
                   }
    
    d = 2 * m ;
    cout.setf(ios_base::fixed);
    cout.precision(3);
    cout << d << endl;
    return 0;
}

