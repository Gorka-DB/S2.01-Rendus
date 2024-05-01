#ifndef LECTEUR_H
#define LECTEUR_H
#include "diaporama.h"
#include <string>
#include <vector>
using namespace std;

class Lecteur {
    
    private:
        Diaporama diapoCharge;
        bool modeAuto;
        bool estCharge;
        //string titreDiapoCourant;
    

    public:
        /**
         * @brief Constructeur d'un nouvel objet Lecteur
         * 
         * @param diapoCharge l'objet Diaporama à utiliser pour afficher les diapositives
         * @param modeAuto indique si l'affichage doit se faire automatiquement
         * @param estCharge indique si l'affichage est en cours de chargement d'une diapositive
         */
        Lecteur::Lecteur(Diaporama diapoCharge, bool modeAuto = false, bool estCharge = true);

        /**
        * @brief Destructeur de l'objet Lecteur
        * 
        * Libère les ressources allouées lors de la création de l'objet Lecteur.
        */
        ~Lecteur();

        /**
        * @brief Charges une nouvelle diapositive dans le lecteur
        *
        * Cette fonction permet de charger une nouvelle diapositive dans le lecteur.
        *
        * @param diapoCharge L'objet Diaporama à utiliser pour afficher la nouvelle diapositive
        */
        void chargerDiapo(Diaporama diapoCharge);

        
        void enleverDiapo();

        /**
         * @brief Démarrage l'affichage automatique des diapositives.
         *
         * Cette fonction permet de démarrer l'affichage automatique des diapositives dans le lecteur.
         */
        void demarrer();

        /**
         * @brief Arrête l'affichage automatique des diapositives.
         *
         * Cette fonction arrête l'affichage automatique des diapositives dans le lecteur.
         */
        void arreter();

        
        void setModeAuto(bool);


        void setEstCharge(bool);
        //void setTitreDiapoCourant(string);


        /**
         * @brief Retourne l'état de l'affichage automatique des diapositives.
         *
         * Cette fonction retourne l'état de l'affichage automatique des diapositives dans le lecteur.
         */
        bool getMode();

        /**
         * @brief Retourne l'état de chargement d'une diapositive.
         *
         * Cette fonction retourne l'état de chargement d'une diapositive dans le lecteur.
         */
        bool getEstCharge();
        //string getTitreDiapoCourant();
    

};

#endif // LECTEUR_H