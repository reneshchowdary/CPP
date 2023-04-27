#include <iostream> 

using namespace std;

class prattern {
public:
    void pattern1(int n) {

        for (int i = 0; i < n; i++) {

            for (int j =0; j < n; j++) {

                cout << "* ";
            }
            cout << endl;
        }
    }

};

int main() {

prattern obj;

obj.pattern1(5);

}