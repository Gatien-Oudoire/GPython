#include "analyse.h"

using namespace std;

bool erreur(string ligne)
{
    char mauvais[] = {'//', '*', '-', '+', ',', ':', '=', '!'};
    for (int i(0); i < 8; ++i)
    {
        if (mauvais[i] == ligne[0])
            return 2;
    }
}

bool analyserMemoireAlloc(string ligne)
{

    for (int i = 0; i < ligne.size(); ++i)
}