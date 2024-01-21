#include <iostream>
#include <vector>

using namespace std;

int Somme(vector<int>);

int main()
{
    vector<int> nombres {5, 15, 14, 91, 2};
    
    int sommeNombre = Somme(nombres);

    cout << sommeNombre;
    
    return 0;
}

int Somme(vector<int> nombres)
{
    int accumulateur = 0;
    
    for (int nombre : nombres)
    {
        accumulateur += nombre;
    }
    
    return accumulateur;
}
