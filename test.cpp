#include <iostream>
#include <string>

using namespace std;

int main(){

    string car {"Honda"};

    try {
        cout << car.at(5) << endl;
    } catch (exception& e){
        cout << "Exception occurred: " << e.what() << endl;
    }

    return 0;
}