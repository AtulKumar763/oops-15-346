// write a program to crete a class for time having hh,mm,ss.create...

#include <iostream>
using namespace std;

class Time {
public:
    int hh, mm, ss;

    void input(int h, int m, int s) {
        hh = h;
        mm = m;
        ss = s;
    }
    void correctTime() {
        if (ss >= 60) {
            mm = mm + ss / 60;
            ss = ss % 60;
        }

        if (mm >= 60) {
            hh = hh + mm / 60;
            mm = mm % 60;
        }
        if (hh >= 24) {
            hh = hh % 24;
        }
    }
    void show() {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {

    Time t1, t2;

    int h, m, s;

    cout << "Enter first time (hh mm ss): ";
    cin >> h >> m >> s;

    t1.input(h, m, s);
    t1.correctTime();

    cout << "Enter second time (hh mm ss): ";
    cin >> h >> m >> s;

    t2.input(h, m, s);
    t2.correctTime();

    t1.show();

    t2.show();

    return 0;
}