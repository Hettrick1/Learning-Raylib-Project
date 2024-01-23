#include <filesystem>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    string question = "";
    do
    {
        cout << "Pose moi une question\n";
        cin >> question;
        
        srand(time(nullptr));
        int proba = rand() % 100 + 1;
        
        if (proba <= 50)
        {
            cout << "Oui.\n";
        }
        else
        {
            cout << "Non.\n";
        }
    }while (question != "partir");

    cout << "Adieu.\n";
    
    return 0;
}

