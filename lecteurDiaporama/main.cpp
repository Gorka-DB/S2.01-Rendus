#include "image.h"
#include "diaporama.h"
#include "lecteur.h"
#include <vector>

int main(){
// Création des images

// pos -> position de l'image dans le vecteur
    std::vector<Image> images = {
        Image("objet", "Tapis", "C:\\cartesDisney\\Disney_tapis.gif"),
        Image("personnage", "Blanche Neige", "C:\\cartesDisney\\Disney_4.gif"),
        Image("personnage", "Alice", "C:\\cartesDisney\\Disney_2.gif"),
        Image("animal", "Mickey", "C:\\cartesDisney\\Disney_19.gif"),
        Image("personnage", "Pinnochio", "C:\\cartesDisney\\Disney_29.gif"),
        Image("objet", "chateau", "C:\\cartesDisney\\Disney_0.gif"),
        Image("personnage", "Minnie", "C:\\cartesDisney\\Disney_14.gif"),
        Image("animal", "Bambi", "C:\\cartesDisney\\Disney_3.gif")
    };

// rang -> position de l'image dans le diaporama
    // Création des diaporamas
    std::vector<Diaporama> diaporamas = {
        Diaporama("Diaporama par defaut", 1),
        Diaporama("Diaporama Pantxika", 1),
        Diaporama("Diaporama Thierry", 1),
    };

    
    Diaporama efsfesfesf = Diaporama("Diaporama sefgesfesg", 1);
    
    // Ajout des images aux diaporamas


    diaporamas[0].ajouterImage(images[0]);
    diaporamas[0].ajouterImage(images[0]);
    diaporamas[0].ajouterImage(images[2]);
    diaporamas[0].ajouterImage(images[3]);

    diaporamas[1].ajouterImage(images[5]);
    diaporamas[1].ajouterImage(images[3]);
    diaporamas[1].ajouterImage(images[6]);
    diaporamas[1].ajouterImage(images[2]);

    diaporamas[2].ajouterImage(images[6]);
    diaporamas[2].ajouterImage(images[4]);
    diaporamas[2].ajouterImage(images[2]);
    diaporamas[2].ajouterImage(images[1]);


    Lecteur lecteur0 = Lecteur(diaporamas[0]);




    unsigned int choixDiaporama = 0;
    char choixAction;

    while (true)
    {
        /* Affichage à l'écran des infos de l'image courante dans son diaporama   */
    
        system("cls");  // effacer l'écran

        cout << "Diaporama actuel : " << std::endl;

        std::cout << diaporamas[choixDiaporama].getTitreDiaporama() << std::endl;

        cout << std::endl;

        cout << "Image actuelle : " << std::endl;


        cout << "rang :" << diaporamas[choixDiaporama].getPosImageCourante() + 1 << "/" << diaporamas[choixDiaporama].getTailleDiaporama() << " ";
        diaporamas[choixDiaporama].afficherImageCouranteDiaporama();

        cout << std::endl;
        
        cout << std::endl;



        /* Menu des actions possibles (saisie choix utilisateur) :
         * A-vancer, R-eculer, C-hanger de diaporama, Q-uitter */
        
        std::cout << "Choisissez une action :" << std::endl;
        std::cout << "A-avancer, R-reculer, C-changer de diaporama, Q-quitter, E-enlever diapo du lecteur" << std::endl;
        std::cin >> choixAction;
        choixAction = toupper(choixAction);

        if (choixAction == 'Q')
        {
            break;
        }
        else if (choixAction == 'A')
        {
            diaporamas[choixDiaporama].avancerImageDiaporama();
        }
        else if (choixAction == 'R')
        {
            diaporamas[choixDiaporama].reculerImageDiaporama();
        }
        else if (choixAction == 'C')
        {
            cout << "Changer de diaporama : " << endl;

            // Afficher la liste des diaporamas disponibles
            for (unsigned int i = 0; i < diaporamas.size(); i++)
            {
                cout << i << ": " << diaporamas[i].getTitreDiaporama() << endl;
            }

            // Demander à l'utilisateur de choisir un diaporama
            cout << "Votre choix ? ";
            cin >> choixDiaporama;

            // Changer de diaporama
            if (choixDiaporama >= 0 && choixDiaporama < static_cast<unsigned int>(diaporamas.size()))
            {
                // Changer le diaporama actuel en le diaporama choisi
                lecteur0.chargerDiapo(diaporamas[choixDiaporama]);
            }
            else
            {
                cout << "Choix invalide. Veuillez réessayer." << endl;
            }
        }
        else if (choixAction == 'E'){
            lecteur0.enleverDiapo();
        }

    }

}
