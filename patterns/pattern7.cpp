#include <iostream> 

using namespace std;

class prattern {
public:
    void pattern1(int n) {

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= n - i + 1; j++) {

                cout << " ";
            }
            for (int j = 1; j <= 2 * i - 1; j++) {

                cout << "*";
            }
            cout << endl;
        }
    }

};

int main() {

prattern obj;

obj.pattern1(5);

}