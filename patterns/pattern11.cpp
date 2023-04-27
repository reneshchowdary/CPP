#include <iostream> 

using namespace std;

class prattern {
public:
    void pattern1(int n) {
        int p = 1;
        for (int i = 0; i <n; i++) {
            if (i % 2 == 0) {p = 1;} else {p =0;}
            for (int j = 0; j <= i; j++) {
                cout << p << " ";
                p = 1 - p;
            }
            cout << endl;
        }
    }

};

int main() {

prattern obj;

obj.pattern1(5);

}