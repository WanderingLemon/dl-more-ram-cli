#include <iostream> // for writing to stdio

using namespace std;

int main(int argv, char** args) {
    cout << "Number of arguments input: " << argv << endl;

    // Goes through all arguments
    for(int i = 0; i < argv; args++, i++ ){
        cout <<"["<<i<<"] "<< *args << endl;
    }
    return 0;
}
