void action(t_joueur* J, t_rue* L, t_banque* banque, t_joueur* tab[], int nbJoueur)//je pense qu'il faut utiliser des pointeurs
{
    int choix;
    int choix2;
    if(strcmp(L->proprio,"BANQUE")==0)
    {
        do{//je suppose que l'affichage de la carte est déjà fait
            printf("Voulez vous acheter ce terrain ? (Si oui taper 1 sinon taper 2)\n");
            fflush(stdin);
            scanf("Votre choix : %d", &choix);
        }while(choix<1 || choix>2);
        if(choix==1)
        {
            achatProprio(J, L, banque);
            do{
                do{
                    printf("Continuer (tapez 1)\n");//on relance les dés
                    printf("Gérer une propriété (tapez 2)\n");
                    printf("Revenir au menu (tapez 3)\n");
                    fflush(stdin);
                    scanf("%d", &choix2);
                }while(choix2<1 || choix2>3);

                if(choix2==2)
                {
                    //Gérer une propriété
                }
                else if (choix2==3)
                {
                    //Retour au menu;
                }
            }while(choix2!=1);
        }
        else
        {
            do{
                do{
                    printf("Continuer (tapez 1)\n");
                    printf("Gérer une propriété (tapez 2)\n");
                    printf("Revenir au menu (tapez 3)\n");
                    fflush(stdin);
                    scanf("%d", &choix2);
                }while(choix2<1 || choix2>3);
                if(choix2==2)
                {
                    //Gérer une propriété
                }
                else
                {
                    //Retour au menu; exit(1)??
                }
            }while(choix2!=1);
        }
    }
    else if(strcmp(L->proprio,J->pseudo)==0)
    {
        if(L->etatHypot==0)
        {
            do{
                printf("Vous avez actuellement %d maison et %d hotel sur le terrain\n\n",L->nbMaison, L->nbHotel);
                printf("Améliorer la propriété (taper 1)\n");
                printf("Déméliorer la propriété (taper 2)\n");
                printf("Hypothéquer la propriété (tapez 3)\n");
                printf("Vendre la propriété(tapez 4)\n");
                printf("Gérer un autre terrain (taper 5)\n");//on peut le faire où on veut
                printf("Continuer (taper 6)\n");
                printf("Revenir au menu (taper 7)\n");
                do
                {
                    fflush(stdin);
                    scanf("Votre choix : %d", &choix);
                }while(choix<1 || choix>7);
                switch(choix)
                {
                    case 1:
                        //Améliorer la propriété
                        if(L->nbMaison<4)
                        {
                            achatMaison(J, L, banque);
                        }
                        else if (L->nbMaison==4)
                        {
                            achatHotel(J, L, banque);
                        }
                        else
                        {
                            printf("Vous ne pouvez plus améliorer la propriété");
                        }
                        break;
                    case 2:
                        //Déméliorer la propriété
                        if(L->nbMaison<4 && L->nbMaison>0)
                        {
                            venteMaison(J, L, banque);
                        }
                        else if(L->nbHotel==1)
                        {
                            venteHotel(J, L, banque);
                        }
                        else
                        {
                            printf("Vous ne pouvez plus déméliorer la propriété");
                        }
                        break;
                    case 3:
                        //hypothéquer
                        if(L->nbMaison>0 || L->nbHotel>0)
                        {
                            hypotheque(J, L);
                        }
                        else
                        {
                            printf("Vendez d'abord vos maisons\n");
                        }
                        break;
                    case 4:
                        //vendre la propriété
                        venteProprio(J, L, banque);
                        break;
                    case 5:
                        //sous programme gérer Propriété
                        break;
                    case 6:
                        break;
                    case 7:
                        //retour au menu
                        break;
                }
            }while(choix!=6);
        }
        else if(L->etatHypot==1)
        {
            do{
                printf("Cette propriété est hypothequee\n");
                printf("Deshypothequer votre terrain (taper 1)\n");
                printf("Vendre votre terrain (taper 2)\n");
                printf("Gérer une autre propriété (tapez 3)\n");
                printf("Finir votre tour (taper 4)\n");
                printf("Revenir au menu (taper 5)\n");
                do
                {
                    fflush(stdin);
                    scanf("Votre choix : %d", &choix);
                }while(choix<1 || choix>5);

                switch(choix)
                {
                    case 1:
                        //Déshypothequer votre terrain
                        desHypotheque(J, L);
                        break;
                    case 2:
                        //vendre votre terrain
                        venteProprio(J, L, banque);
                        break;
                    case 3:
                        //gérer un autre terrain
                        break;
                    case 4:
                        //finir le tour
                        break;
                    case 5:
                        //menu
                        break;
                }
            }while(choix != 4);
        }
        // fonction revenir au menu (dans le choix du joueur en train de jouer ou de maniere permanante)

    }
    else
    {
        do{
             printf("!!! vous ne pouvez pas acheter cette carte, elle appartient deja a %s !!!\n",L->proprio);
             calculLoyerPropr(J, L, tab, nbJoueur);//on met le tableau de joueur   A TESTER
             printf("Gérer un terrain (taper 1)\n");
             printf("Finir votre tour (taper 2)\n");
             printf("Revenir au menu (taper 3)\n");
             switch(choix)
             {
                case 1:
                    //Gérer une propriété
                    break;
                case 2:
                    //finir le tour
                    break;
                case 3:
                    //menu
                    break;
            }
        }while(choix!=2);
    }
}


