#include <iostream>
#include <cmath>
using namespace std;

int main() {
        const float eps = 0.001;
        double x0, x1;

        x0 = 1;
        x1 = x0-(x0*tan(x0)-0.3)/(tan(x0)+x0/pow(cos(x0),2));
        while (fabs(x0-x1)>eps) {
            x0=x1;
            x1=x0-(x0*tan(x0)-0.3)/(tan(x0)+x0/pow(cos(x0),2));
        }
        cout << "Корень равен " << x1;
    return 0;
}
