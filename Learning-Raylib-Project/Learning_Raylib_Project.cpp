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
        cout << "Pose moi une question";
        cin >> question;
        
    }while (question != "partir");

    cout << "Adieu.";
    
    return 0;
}

