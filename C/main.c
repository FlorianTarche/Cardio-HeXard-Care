#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "GenerationCode.h"

int main()
{
    int choix = menu(); //On r�cup�re la valeur du choix.
    GenCode(choix); //G�n�re le code � partir de ce choix.
    return 0;
}
