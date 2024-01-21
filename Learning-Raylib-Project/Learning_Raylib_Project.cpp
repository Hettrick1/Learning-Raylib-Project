#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(nullptr));
    int nombreChoisi = rand() % 100 + 1;
    int proposition = 0;
    int nombreTentatives = 0;
    
    do
    {
        cout << "-------------------\n" << "Quel est le bon nombre ? \nEntrez un nombre entre 1 et 100\n";
        cin >> proposition;
    
        if (proposition < nombreChoisi && proposition >= 1)
        {
            cout << "-------------------\n" << "Le nombre choisi est trop petit \n";
        }

        else if (proposition > nombreChoisi && proposition <= 100)
        {
            cout << "-------------------\n" << "Le nombre choisi est trop grand \n";
        }
        
        else if (proposition != nombreChoisi)
        {
            cout << "-------------------\n" << "Le nombre entre n'est pas valide";
        }

        nombreTentatives += 1;
        
    } while (proposition != nombreChoisi);

    cout << "Vous avez gagne ! \n" << "Cela a necessite : " << nombreTentatives << " tentatives.";
    
    return 0;
}