# Application de Gestion de Transactions Financières

Cette application permet de gérer des transactions financières en utilisant des concepts de la programmation orientée objet (POO) en C++. Elle permet de créer et de gérer des accords financiers (deals), des prêteurs (lenders), des emprunteurs (borrowers) et des facilités (facilities) associées aux accords.

## Compilation et Exécution

Pour compiler et exécuter l'application, suivez les étapes ci-dessous :

1. Assurez-vous que tous les fichiers `.cpp` et `.h` sont dans le même répertoire.
2. Utilisez le `Makefile` fourni pour compiler le programme.

```sh
make
```
3. Exécutez le programme compilé.
```sh
make run
```
## Utilisation du Menu de Commande

Menu Principal
1. Deal
2. Lender
3. Borrower
4. Exit
Entrez le numéro de l'option pour accéder au sous-menu correspondant ou pour quitter l'application.

Sous-menu Deal

1.1 See all deals
Affiche la liste de tous les accords financiers créés.

1.2 Create a deal
Permet de créer un nouvel accord financier en fournissant les informations requises.

1.3 Manage facilities for a deal
Permet de gérer les facilités associées à un accord financier spécifique. Vous devez entrer l'index de l'accord pour lequel vous souhaitez gérer les facilités.

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.3.1 Add Facility

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.3.2 Add Part to Facility
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.3.3 Back to Main Menu

1.4 Back to main menu
Retourne au menu principal.

## Exemples d'Utilisation
Créer un Deal
Sélectionnez l'option 1 dans le menu principal pour accéder au sous-menu Deal.
Sélectionnez l'option 1.2 pour créer un nouvel Deal.
Suivez les instructions pour entrer les informations suivantes :

Nom de l'agent<br>
Nom de l'emprunteur<br>
Montant du projet<br>
Devise<br>
Date de début (YYYY MM DD)<br>
Date de fin (YYYY MM DD)<br>
Statut<br>

## Créer une Facility pour un Deal
Sélectionnez l'option 1 dans le menu principal pour accéder au sous-menu Deal.
Sélectionnez l'option 1.3 pour gérer les facilités d'un accord.
Entrez l'index de l'accord pour lequel vous souhaitez gérer les facilités.
Sélectionnez l'option 1.2 dans le sous-menu Facility pour créer une nouvelle facilité.
Suivez les instructions pour entrer les informations suivantes :
Montant de la facilité<br>
Devise<br>
Date de début (YYYY MM DD)<br>
Date de fin (YYYY MM DD)<br>
Statut <br>


