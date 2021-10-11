#include <iostream>
#include <fstream>
#include <string>

// Les autres fichiers

#include "analyse.h"
#include "boucles.h"
#include "conditions.h"
#include "memoire.h"
#include "operation.h"

using namespace std;

/**
 * @brief La fonction principale
 * 
 * @param argc le nombre de valeur dans argv
 * @param argv ligne d'éxécution du programme
 * @return int 
 */
int main(int argc, char *argv[])
{
    if (argc > 1)
        cout << "Ouverture: " << argv[1];

    else
        return -1;

    ifstream fichier(argv[1]);


    // test si le fichier a été ouvert ou non
    if (!fichier)
        return 1;

    string ligne;

    int l = 1;

    while (getline(fichier, ligne))
    {
        if (erreur(ligne))
            {
                cout << "Erreur à la ligne: " << l << endl;
            return 2;
            }
        l++;
    }

    
    

}
