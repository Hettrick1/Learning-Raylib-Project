#include <filesystem>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    string question;
    do
    {
        question = "";
        srand(time(nullptr));
        int nombreChoisi = rand() % 100 + 1;
        cout << "Pose moi une question\n";
        cin >> question;
        if (nombreChoisi <= 50)
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

