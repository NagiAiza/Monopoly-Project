int lancementDuJeu()//on retourrne le fait que le jeu vient dêtre lancé pour l'affichage du menu de démarrage
{
    position(1,25);
    Color(0,15);
    printf("LE MONOSPACE");
    Color(15,0);
    Sleep(1000);
    system("cls");
    return 1;
}

void menu(int type)
{
    int choix;
    
    if(type==1)
    {
    
      while(1)
      {
          do
          {

              affichageMenu();
              position(11,7);
              printf("Choix : ");
              fflush(stdin);
              scanf("%d", &choix);
              Color(15,0);
              system("cls");
          }while(choix<=0 || choix>7);


          switch(choix){
              case 1: ;//lancement d'une nouvelle partie
                  //verifier si une partie est déjà en cours
                  //si partie actuellement en cours on demande si on veut sauvegarder la partie en cours avant de passer à la nouvelle
                  t_joueur* liste_joueurs = NULL;
                  creationJoueur(liste_joueurs);
                  break;//le choix du joueur permettra de revenir au menu
             
              case 3:// cas de chargement d'un ancien fichier
                  //lire un fichier
                  //si partie actuellement en cours on demande si on veut sauvegarder la partie en cours avant de passer à l'ancienne
                  //sinon on passe directement à l'ancienne partie sans sauvegarder
                  break;
              case 4:
                  //vérifier qu'une partie est en cours au moment de la sélection de ce choix sinon mettre un message d'erreur
                  //écrire la partie en cours dans un fichier de sauvegarde (on va dire que le fichier comporte 3 places dont une de sauvegarde auto si jamais on quitte le prgm);
                  //possibilité de choisir la place sur laquelle on va va écrire le fichier
                  //vérifier si une partie est déjà sauvergardé à cette emplacement, si il y en a une il faut demander si l'on veut écraser cette partie
                  break;
              case 5://afficher les règles (ss prgm cécile)
                  break;
              case 6://afficher les crédits (ss prgrm cécile)
                  break;
              case 7://quitter
                  quitter(liste_joueurs);
                  break;
          }
      }
    }
    else if (type==2)//on est en partie et on revient au menu
    {
      do{

           affichageMenuDansUnePartie();//sous programme à chager pour avoir les choix
           position(11,7);
           printf("Choix : ");
           fflush(stdin);
           scanf("%d", &choix);
           Color(15,0);
           system("cls");
       }while(choix<=0 || choix>7);
    
          switch(choix){
              case 1: ;//lancement d'une nouvelle partie
                  //verifier si une partie est déjà en cours
                  //si partie actuellement en cours on demande si on veut sauvegarder la partie en cours avant de passer à la nouvelle
                  t_joueur* liste_joueurs = NULL;
                  creationJoueur(liste_joueurs);
                  break;//le choix du joueur permettra de revenir au menu
              case 2://reprendre la partie en cours
                  //actuellement je ne vois pas comment faire mais on peut faire un truc du style ça sauvegarde la partie en auto à chaque fois qu'on revient au menu et on la recharge à chaque fois

              case 3:// cas de chargement d'un ancien fichier
                  //lire un fichier
                  //si partie actuellement en cours on demande si on veut sauvegarder la partie en cours avant de passer à l'ancienne
                  //sinon on passe directement à l'ancienne partie sans sauvegarder
                  break;
              case 4:
                  //vérifier qu'une partie est en cours au moment de la sélection de ce choix sinon mettre un message d'erreur
                  //écrire la partie en cours dans un fichier de sauvegarde (on va dire que le fichier comporte 3 places dont une de sauvegarde auto si jamais on quitte le prgm);
                  //possibilité de choisir la place sur laquelle on va va écrire le fichier
                  //vérifier si une partie est déjà sauvergardé à cette emplacement, si il y en a une il faut demander si l'on veut écraser cette partie
                  break;
              case 5://afficher les règles (ss prgm cécile)
                  break;
              case 6://afficher les crédits (ss prgrm cécile)
                  break;
              case 7://quitter
                  quitter(liste_joueurs);
                  break;
          }
      }
    }    
    
    }
}
