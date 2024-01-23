#include <filesystem>
#include <iostream>
#include <vector>
#include <string>

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

