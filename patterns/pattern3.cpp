#include <iostream> 

using namespace std;

class prattern {
public:
    void pattern1(int n) {

        for (int i = 1; i <= n; i++) {

            for (int j =1; j <= i; j++) {

                cout << j << " ";
            }
            cout << endl;
        }
    }

};

int main() {

prattern obj;

obj.pattern1(5);

}