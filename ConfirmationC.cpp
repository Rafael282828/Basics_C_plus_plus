


#include "iostream"

using namespace std;


int main()
{
    
    string a; //Creating variable string
    
    cout << "Add: (So) to confirm: ";
    cin >> a; //Add input;
    
    if (a == "So"){ //Add conditional
        cout << "confirmed!";  //Print in output if is a correct
    }
    else{
        cout << "Incorrect confirmation"; //If confirmation is a null
    }

 return 0;
}
    
    

    
