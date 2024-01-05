#include <raylib.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    vector<string> noms {"Annie", "Evann", "Jean", "Michel"};

    for (string nom : noms)
    {
        cout << "Bonjour " + nom << endl;
    }
    return 0;
}