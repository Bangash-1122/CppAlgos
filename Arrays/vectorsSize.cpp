#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; //0

    cout << "size = " << vec.size() << endl;
    vec.push_back(25);
    cout << "after push back size =" << vec.size() endl;

    for(int val : vec) {
        cout << val << endl;
    }
    return 0;
}

//size = 0
//After push back size = 1
// then 25
