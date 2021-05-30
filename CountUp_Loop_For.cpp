

#include <iostream>

using namespace std;

int main()
{
    int q,a;

    cout << "Add number, please: ";
    
    cin >> a;
    
    cout << "Add a number greater than the previous one: ";
    
    cin >> q;
    
    for (int i = a; i<=q; i++){
        cout << i << endl;
    }

    return 0;
}

