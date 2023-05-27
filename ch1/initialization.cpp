import <iostream>;
import <complex>;

using namespace std;

int main() {
    double d1 = 2.3;
    double d2 {2.3};
    double d3 = {2.3};

    complex<double> z = 1;
    complex<double> z2 = {d1, d2};
    complex<double> z3 = {d1, d2};

    cout << z3 << endl;
}
