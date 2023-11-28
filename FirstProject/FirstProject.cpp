// FirstProject.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <random>
#include <vector>

int main()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, 100);

    int random_val;
    std::cout << "bonjour c++\n test de generation val random :\n";

    std::cout << "test for loop and fix table :\n";
    int size_used_val = 10;
    int used_val[10];
    int place_in_used_val = 0;
    for (int i = 0; i < 30; i++) {
        random_val = distribution(gen);
        int j = 0;
        bool val_exist = false;
        while (j < size_used_val && !val_exist) {
            if (used_val[j] == random_val) {
                val_exist = true;
            }
            j++;
        }
        if (!val_exist) {
            std::cout << "random_val = " << random_val << std::endl;
            if (place_in_used_val < size_used_val) {
                used_val[place_in_used_val] = random_val;
                place_in_used_val++;
            }
            else {
                std::cout << "used_val full\n";
            }
        }
    }

    std::cout << "\ntest while loop and vectors :\n";
    std::vector<int> vector_used_value;
    int i = 0;
    while (i < 30) {
        random_val = distribution(gen);

        auto it = std::find(vector_used_value.begin(), vector_used_value.end(), random_val);
        if (it == vector_used_value.end()) {
            std::cout << "random_val = " << random_val << std::endl;
            vector_used_value.push_back(random_val);
            i++;
        }
    }

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
