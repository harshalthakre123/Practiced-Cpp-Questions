// C++ Program to toggle string
#include <iostream>
using namespace std;

int main()
{
    string str = "HarshalThakre";

    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    cout << "Toggled string:-" << str << endl;

}
