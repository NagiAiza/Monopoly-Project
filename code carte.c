typedef struct{
    char pseudo[25];
    char pion;
    int argent;
    int richesseEnPropriete;//tout est dans le nom :)
    int richesseTotale;//on additionne la richesse en propriété et l'argent du joueur lorsqu'on doit vérifier la faillite
    int nbMaison;
    int nbHotel;
    int numeroJ; //permet de savoir quelle propriété lui appartient
    int Case; // case sur laquelle le joueur est
    int faillite; //vérification de la faillite
    int prison;
    int carteSortiePrison;
//sert au mvmt
    int X;
    int Y;
    int Decalage_X;
    int Decalage_Y;
    int Row;

}t_joueur;

void remplirCarte(t_carte C)
{
    position(3,1);
    printf("%s", C.texte1);
    position(5,1);
    printf("%s", C.texte2);
    position(6,1);
    printf("%s", C.texte3);
    position(7,1);
    printf("%s", C.texte4);
    position(8,1);
    printf("%s", C.texte5);
    position(9,1);
    printf("%s", C.texte6);
}

void affichageCarte(t_carte C)
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xDA, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBF);
    printf("%c                              %c\n", 0xB3 , 0xB3);
    printf("%c                              %c\n", 0xB3 , 0xB3);
    printf("%c                              %c\n", 0xB3 , 0xB3);
    printf("%c                              %c\n", 0xB3 , 0xB3);
    printf("%c                              %c\n", 0xB3 , 0xB3);
    printf("%c                              %c\n", 0xB3 , 0xB3);
    printf("%c                              %c\n", 0xB3 , 0xB3);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC0, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xD9);
    remplirCarte(C);
    Color(15, 0);
}

void carteChance(t_joueur* tabJ, int numJ, t_rue* tabRue, t_banque* banque, int nbjoueurs, t_carte* carteCh)
{
    int prixAPayer, i;
    srand(time(NULL));
    int numCarteChance=0;
    numCarteChance=1+rand()%16;
    switch (numCarteChance)
    {
    case 1:
        affichageCarte(carteCh[0]);
        prixAPayer=0;
        prixAPayer=25*tabJ[numJ].nbMaison;
        prixAPayer+=100*tabJ[numJ].nbHotel;
        tabJ[numJ].argent-=prixAPayer;
        break;
    case 2:
        affichageCarte(carteCh[1]);
        tabJ[numJ].argent-=50;
        break;
    case 3:
        affichageCarte(carteCh[2]);
        tabJ[numJ].Row=8;//case prison
        break;
    case 4:
        affichageCarte(carteCh[3]);
        tabJ[numJ].argent+=10;
        break;
    case 5:
        affichageCarte(carteCh[4]);
        tabJ[numJ].Row=0;//case départ
        tabJ[numJ].argent+=200;
        break;
    case 6:
        affichageCarte(carteCh[5]);
        tabJ[numJ].argent-=50;
        break;
    case 7:
        affichageCarte(carteCh[6]);
        tabJ[numJ].argent+=200;
        break;
    case 8:
        affichageCarte(carteCh[7]);
        for(i=0;i<nbjoueurs;i++)
            {
                if(tabJ[i].numeroJ!=tabJ[numJ].numeroJ)
                {
                    tabJ[i].argent+=20;
                    tabJ[numJ].argent-=20;
                }
            }
        break;
    case 9:
        affichageCarte(carteCh[8]);
        tabJ[numJ].argent+=100;
        break;
    case 10:
        affichageCarte(carteCh[9]);
        tabJ[numJ].argent-=200;
        break;
    case 11:
        affichageCarte(carteCh[10]);
        tabJ[numJ].argent+=150;
        break;
    case 12:
        affichageCarte(carteCh[11]);
        tabJ[numJ].argent-=100;
        break;
    case 13:
        affichageCarte(carteCh[12]);
        tabJ[numJ].carteSortiePrison+=1;
        break;
    case 14:
        affichageCarte(carteCh[13]);
        tabJ[numJ].argent+=150;
        break;
    case 15:
        affichageCarte(carteCh[14]);
        tabJ[numJ].Row-=3;
        break;
    case 16:
        affichageCarte(carteCh[15]);
        tabJ[numJ].argent+=200;
        break;
    }
}

void carteCommu(t_joueur* tabJ, int numJ, t_rue* tabRue, t_banque* banque, int nbjoueurs, t_carte* carteCo)
{
    int prixAPayer, i;
    srand(time(NULL));
    int numCarteChance=0;
    numCarteChance=1+rand()%16;
    switch (numCarteChance)
    {
    case 1:
        affichageCarte(carteCo[0]);
        tabJ[numJ].argent+=100;
        break;
    case 2:
        affichageCarte(carteCo[1]);
        tabJ[numJ].Row=16;//carte strationnement gratuit
        break;
    case 3:
        affichageCarte(carteCo[2]);
        tabJ[numJ].argent-=15;
        break;
    case 4:
        affichageCarte(carteCo[3]);
        tabJ[numJ].Row=8;//case prison;
        break;
    case 5:
        affichageCarte(carteCo[4]);
        tabJ[numJ].argent-=50;
        break;
    case 6:
        affichageCarte(carteCo[5]);
         for(i=0;i<nbjoueurs;i++)
            {
                if(tabJ[i].numeroJ!=tabJ[numJ].numeroJ)
                {
                    tabJ[i].argent-=20;
                    tabJ[numJ].argent+=20;
                }
            }
        break;
    case 7:
        affichageCarte(carteCo[6]);
        prixAPayer=0;
            prixAPayer=40*tabJ[numJ].nbMaison;
            prixAPayer+=115*tabJ[numJ].nbHotel;
            tabJ[numJ].argent-=prixAPayer;
        break;
    case 8:
        affichageCarte(carteCo[7]);
        tabJ[numJ].carteSortiePrison+=1;
        break;
    case 9:
        affichageCarte(carteCo[8]);
        tabJ[numJ].argent+=100;
        break;
    case 10:
        affichageCarte(carteCo[9]);
        tabJ[numJ].argent-=10;
        break;
    case 11:
        affichageCarte(carteCo[10]);
        tabJ[numJ].argent+=150;
        break;
    case 12:
        affichageCarte(carteCo[11]);
        tabJ[numJ].argent-=50;
        break;
    case 13:
        affichageCarte(carteCo[12]);
        tabJ[numJ].argent+=50;
        break;
    case 14:
        affichageCarte(carteCo[13]);
        tabJ[numJ].argent-=250;
        break;
    case 15:
        affichageCarte(carteCo[14]);
        tabJ[numJ].argent+=75;
        break;
    case 16:
        affichageCarte(carteCo[15]);
        tabJ[numJ].argent-=130;
        break;
    }
}


///////////////INITIALISATION DANS LE MAIN////////////////////
t_carte carteCh[16];
carteCh[0]=carte1();
carteCh[1]=carte2();
carteCh[2]=carte3();
carteCh[3]=carte4();
carteCh[4]=carte5();
carteCh[5]=carte6();
carteCh[6]=carte7();
carteCh[7]=carte8();
carteCh[8]=carte9();
carteCh[9]=carte10();
carteCh[10]=carte11();
carteCh[11]=carte12();
carteCh[12]=carte13();
carteCh[13]=carte14();
carteCh[14]=carte15();
carteCh[15]=carte16();


t_carte carteCo[16];
carteCo[0]=carte17();
carteCo[1]=carte18();
carteCo[2]=carte19();
carteCo[3]=carte20();
carteCo[4]=carte21();
carteCo[5]=carte22();
carteCo[6]=carte23();
carteCo[7]=carte24();
carteCo[8]=carte25();
carteCo[9]=carte26();
carteCo[10]=carte27();
carteCo[11]=carte28();
carteCo[12]=carte29();
carteCo[13]=carte30();
carteCo[14]=carte31();
carteCo[15]=carte32();


t_carte carte1()
{
    t_carte Carte1;
    Color(12, 15);
    strcpy(Carte1.texte1,"            CHANCE            ");
    strcpy(Carte1.texte2," Faites des reparations dans  ");
    strcpy(Carte1.texte3,"  toutes vos constructions:   ");
    strcpy(Carte1.texte4,"        25$ par maison        ");
    strcpy(Carte1.texte5,"        100$ par hotel        ");
    strcpy(Carte1.texte6,"");
    return Carte1;
}

t_carte carte2()
{
    t_carte Carte2;
    Color(12, 15);
    strcpy(Carte2.texte1,"            CHANCE            ");
    strcpy(Carte2.texte2,"La comete de Halley vous frole");
    strcpy(Carte2.texte3,"  Vous vous ettouffez dans un ");
    strcpy(Carte2.texte4,"     nuage de poussiere.      ");
    strcpy(Carte2.texte5,"Debourssez 50$ pour acheter de");
    strcpy(Carte2.texte6,"           l oxygene          ");
    return Carte2;
}

t_carte carte3()
{
    t_carte Carte3;
    Color(12, 15);
    strcpy(Carte3.texte1,"            CHANCE            ");
    strcpy(Carte3.texte2,"");
    strcpy(Carte3.texte3,"   Un trou noir vous aspire.  ");
    strcpy(Carte3.texte4,"        Allez en prison       ");
    strcpy(Carte3.texte5,"");
    strcpy(Carte3.texte6,"");
    return Carte3;
}

t_carte carte4()
{
    t_carte Carte4;
    Color(12, 15);
    strcpy(Carte4.texte1,"            CHANCE            ");
    strcpy(Carte4.texte2,"Vos planetes s'alignent, c'est");
    strcpy(Carte4.texte3,"     votre jour de chance!    ");
    strcpy(Carte4.texte4,"          Recevez 10$         ");
    strcpy(Carte4.texte5,"");
    strcpy(Carte4.texte6,"");
    return Carte4;
}

t_carte carte5()
{
    t_carte Carte5;
    Color(12, 15);
    strcpy(Carte5.texte1,"            CHANCE            ");
    strcpy(Carte5.texte2,"   Vous atteignez la vitesse  ");
    strcpy(Carte5.texte3,"           lumiere.           ");
    strcpy(Carte5.texte4,"  Rejoignez la case DEPART et ");
    strcpy(Carte5.texte5,"         touchez 200$         ");
    strcpy(Carte5.texte6,"");
    return Carte5;
}

t_carte carte6()
{
    t_carte Carte6;
    Color(12, 15);
    strcpy(Carte6.texte1,"            CHANCE            ");
    strcpy(Carte6.texte2,"  Vous perdez le controle de  ");
    strcpy(Carte6.texte3,"       vaiseau spatial.       ");
    strcpy(Carte6.texte4," Payez 50$ afin de le reparer ");
    strcpy(Carte6.texte5,"  avant que ca ne soit trop   ");
    strcpy(Carte6.texte6,"           tard...            ");
    return Carte6;
}

t_carte carte7()
{
    t_carte Carte7;
    Color(12, 15);
    strcpy(Carte7.texte1,"            CHANCE            ");
    strcpy(Carte7.texte2,"   La Lune de Sang apparait.  ");
    strcpy(Carte7.texte3,"  Cela perturbe votre fusee.  ");
    strcpy(Carte7.texte4,"  Sans vous en rendre compte  ");
    strcpy(Carte7.texte5,"vous venez d'effectuer un tour");
    strcpy(Carte7.texte6,"      Recevez donc 200$       ");
    return Carte7;
}

t_carte carte8()
{
    t_carte Carte8;
    Color(12, 15);
    strcpy(Carte8.texte1,"            CHANCE            ");
    strcpy(Carte8.texte2," Vous perdez un pari avec le  ");
    strcpy(Carte8.texte3,"   reste de votre equipage.   ");
    strcpy(Carte8.texte4,"  Vous leur devez 20$ chacun  ");
    strcpy(Carte8.texte5,"");
    strcpy(Carte8.texte6,"");
    return Carte8;
}

t_carte carte9()
{
    t_carte Carte9;
    Color(12, 15);
    strcpy(Carte9.texte1,"            CHANCE            ");
    strcpy(Carte9.texte2,"Vous assistez a une Supernova ");
    strcpy(Carte9.texte3," et le difusez en direct sur  ");
    strcpy(Carte9.texte4,"          internet.           ");
    strcpy(Carte9.texte5,"  Vous recevez 100$ pour ce   ");
    strcpy(Carte9.texte6,"       magnifique live!       ");
    return Carte9;
}

t_carte carte10()
{
    t_carte Carte10;
    Color(12, 15);
    strcpy(Carte10.texte1,"            CHANCE            ");
    strcpy(Carte10.texte2,"  Vous traversez une ceinture ");
    strcpy(Carte10.texte3,"d asteroides. Les degradations");
    strcpy(Carte10.texte4,"    de votre vehicule sont    ");
    strcpy(Carte10.texte5,"         consequantes.        ");
    strcpy(Carte10.texte6,"          Payez 200$          ");
    return Carte10;
}

t_carte carte11()
{
    t_carte Carte11;
    Color(12, 15);
    strcpy(Carte11.texte1,"            CHANCE            ");
    strcpy(Carte11.texte2,"   Vous etes sous une bonne   ");
    strcpy(Carte11.texte3,"           etoile.            ");
    strcpy(Carte11.texte4,"        Recevez 150$!         ");
    strcpy(Carte11.texte5,"");
    strcpy(Carte11.texte6,"");
    return Carte11;
}

t_carte carte12()
{
    t_carte Carte12;
    Color(12, 15);
    strcpy(Carte12.texte1,"            CHANCE            ");
    strcpy(Carte12.texte2,"     Vous transportez des     ");
    strcpy(Carte12.texte3,"    echantillons illegaux.    ");
    strcpy(Carte12.texte4,"  La douane de l'espace vous  ");
    strcpy(Carte12.texte5,"           arrete.            ");
    strcpy(Carte12.texte6,"          Payez 100$          ");
    return Carte12;
}

t_carte carte13()
{
    t_carte Carte13;
    Color(12, 15);
    strcpy(Carte13.texte1,"            CHANCE            ");
    strcpy(Carte13.texte2,"  Vos barreaux de prison ont  ");
    strcpy(Carte13.texte3,"  fondus en s'approchant du   ");
    strcpy(Carte13.texte4,"  Soleil : vous pouvez enfin  ");
    strcpy(Carte13.texte5,"           sortir!            ");
    strcpy(Carte13.texte6,"");
    return Carte13;
}

t_carte carte14()
{
    t_carte Carte14;
    Color(12, 15);
    strcpy(Carte14.texte1,"            CHANCE            ");
    strcpy(Carte14.texte2," Vous recuperez les images de ");
    strcpy(Carte14.texte3," New Horizons. Vous revendez  ");
    strcpy(Carte14.texte4,"         ces photos.          ");
    strcpy(Carte14.texte5,"         Recevez 150$         ");
    strcpy(Carte14.texte6,"");
    return Carte14;
}

t_carte carte15()
{
    t_carte Carte15;
    Color(12, 15);
    strcpy(Carte15.texte1,"            CHANCE            ");
    strcpy(Carte15.texte2," Deux meteorites rentrent en  ");
    strcpy(Carte15.texte3,"  collision non loin de vous. ");
    strcpy(Carte15.texte4,"Eloignez vous de toute urgence");
    strcpy(Carte15.texte5,"      Reculez de 3 cases      ");
    strcpy(Carte15.texte6,"");
    return Carte15;
}

t_carte carte16()
{
    t_carte Carte16;
    Color(12, 15);
    strcpy(Carte16.texte1,"            CHANCE            ");
    strcpy(Carte16.texte2," Vous revenez de la premiere  ");
    strcpy(Carte16.texte3,"mission humaine sur Mars. Vous");
    strcpy(Carte16.texte4,"rapportez un bout de la roche ");
    strcpy(Carte16.texte5,"   de la surface marsienne.   ");
    strcpy(Carte16.texte6,"         Touchez 200$         ");
    return Carte16;
}

t_carte carte17()
{
    t_carte Carte17;
    Color(1, 15);
    strcpy(Carte17.texte1,"          COMMUNAUTE          ");
    strcpy(Carte17.texte2,"Vous revenez indemne de votre ");
    strcpy(Carte17.texte3,"      mission spatiale.       ");
    strcpy(Carte17.texte4,"    Recevez 100$ de salaire   ");
    strcpy(Carte17.texte5,"");
    strcpy(Carte17.texte6,"");
    return Carte17;
}

t_carte carte18()
{
    t_carte Carte18;
    Color(1, 15);
    strcpy(Carte18.texte1,"          COMMUNAUTE          ");
    strcpy(Carte18.texte2,"");
    strcpy(Carte18.texte3,"Vous trouvez un trou de verre.");
    strcpy(Carte18.texte4,"Allez sur la case Parc Gratuit");
    strcpy(Carte18.texte5,"");
    strcpy(Carte18.texte6,"");
    return Carte18;
}

t_carte carte19()
{
    t_carte Carte19;
    Color(1, 15);
    strcpy(Carte19.texte1,"          COMMUNAUTE          ");
    strcpy(Carte19.texte2,"");
    strcpy(Carte19.texte3,"         Colonisation.        ");
    strcpy(Carte19.texte4,"       Gagnez une maison      ");
    strcpy(Carte19.texte5,"");
    strcpy(Carte19.texte6,"");
    return Carte19;
}

t_carte carte20()
{
    t_carte Carte20;
    Color(1, 15);
    strcpy(Carte20.texte1,"          COMMUNAUTE          ");
    strcpy(Carte20.texte2,"");
    strcpy(Carte20.texte3,"   Un trou noir vous aspire.  ");
    strcpy(Carte20.texte4,"        Allez en prison       ");
    strcpy(Carte20.texte5,"");
    strcpy(Carte20.texte6,"");
    return Carte20;
}

t_carte carte21()
{
    t_carte Carte21;
    Color(1, 15);
    strcpy(Carte21.texte1,"          COMMUNAUTE          ");
    strcpy(Carte21.texte2,"    Vous decouvrez la vie     ");
    strcpy(Carte21.texte3,"extraterrestre et les invitez ");
    strcpy(Carte21.texte4,"        au restaurant.        ");
    strcpy(Carte21.texte5,"          Payez 50$.          ");
    strcpy(Carte21.texte6,"");
    return Carte21;
}

t_carte carte22()
{
    t_carte Carte22;
    Color(1, 15);
    strcpy(Carte22.texte1,"          COMMUNAUTE          ");
    strcpy(Carte22.texte2," Vous gagnez un pari avec les ");
    strcpy(Carte22.texte3," autres membre de l'equipage. ");
    strcpy(Carte22.texte4,"         Recevez 20$          ");
    strcpy(Carte22.texte5,"");
    strcpy(Carte22.texte6,"");
    return Carte22;
}

t_carte carte23()
{
    t_carte Carte23;
    Color(1, 15);
    strcpy(Carte23.texte1,"          COMMUNAUTE          ");
    strcpy(Carte23.texte2," Faites des reparations dans  ");
    strcpy(Carte23.texte3,"  toutes vos constructions:   ");
    strcpy(Carte23.texte4,"        40$ par maison        ");
    strcpy(Carte23.texte5,"        115$ par hotel        ");
    strcpy(Carte23.texte6,"");
    return Carte23;
}

t_carte carte24()
{
    t_carte Carte24;
    Color(1, 15);
    strcpy(Carte24.texte1,"          COMMUNAUTE          ");
    strcpy(Carte24.texte2,"  Vos barreaux de prison ont  ");
    strcpy(Carte24.texte3,"  fondus en s'approchant du   ");
    strcpy(Carte24.texte4,"   Soleil:vous pouvez enfin   ");
    strcpy(Carte24.texte5,"           sortir!            ");
    strcpy(Carte24.texte6,"");
    return Carte24;
}

t_carte carte25()
{
    t_carte Carte25;
    Color(1, 15);
    strcpy(Carte25.texte1,"          COMMUNAUTE          ");
    strcpy(Carte25.texte2," Vous effectuez votre bapteme ");
    strcpy(Carte25.texte3," spatial avec Thomas Pesquet  ");
    strcpy(Carte25.texte4," Cette experience vous coute  ");
    strcpy(Carte25.texte5,"             70$              ");
    strcpy(Carte25.texte6,"");
    return Carte25;
}

t_carte carte26()
{
    t_carte Carte26;
    Color(1, 15);
    strcpy(Carte26.texte1,"          COMMUNAUTE          ");
    strcpy(Carte26.texte2," Les ondes gravitationnelles  ");
    strcpy(Carte26.texte3,"   vous font mal à la tete.   ");
    strcpy(Carte26.texte4,"  Achetez un doliprane (10$)  ");
    strcpy(Carte26.texte5,"");
    strcpy(Carte26.texte6,"");
    return Carte26;
}

t_carte carte27()
{
    t_carte Carte27;
    Color(1, 15);
    strcpy(Carte27.texte1,"          COMMUNAUTE          ");
    strcpy(Carte27.texte2,"Vous realisez le premier film ");
    strcpy(Carte27.texte3,"        dans l'espace.        ");
    strcpy(Carte27.texte4,"         Recevez 150$         ");
    strcpy(Carte27.texte5,"");
    strcpy(Carte27.texte6,"");
    return Carte27;
}

t_carte carte28()
{
    t_carte Carte28;
    Color(1, 15);
    strcpy(Carte28.texte1,"          COMMUNAUTE          ");
    strcpy(Carte28.texte2," Vous assistez a la ceremonie ");
    strcpy(Carte28.texte3,"des astronautes morts lors de ");
    strcpy(Carte28.texte4,"       leurs fonctions.       ");
    strcpy(Carte28.texte5,"Achetez un couronne mortuaire:");
    strcpy(Carte28.texte6,"             50$              ");
    return Carte28;
}

t_carte carte29()
{
    t_carte Carte29;
    Color(1, 15);
    strcpy(Carte29.texte1,"          COMMUNAUTE          ");
    strcpy(Carte29.texte2,"Vous etes le premier a prendre");
    strcpy(Carte29.texte3,"  des cliches de la planete   ");
    strcpy(Carte29.texte4,"           XD-366P            ");
    strcpy(Carte29.texte5,"  Vous recevez un prix et un  ");
    strcpy(Carte29.texte6,"        cheque de 50$.        ");
    return Carte29;
}

t_carte carte30()
{
    t_carte Carte30;
    Color(1, 15);
    strcpy(Carte30.texte1,"          COMMUNAUTE          ");
    strcpy(Carte30.texte2," Vous ratez la deviation d'un ");
    strcpy(Carte30.texte3," asteroide menacant la Terre. ");
    strcpy(Carte30.texte4,"     Vous devez payer des     ");
    strcpy(Carte30.texte5,"         indemnites.          ");
    strcpy(Carte30.texte6,"          Payez 250$          ");
    return Carte30;
}

t_carte carte31()
{
    t_carte Carte31;
    Color(1, 15);
    strcpy(Carte31.texte1,"          COMMUNAUTE          ");
    strcpy(Carte31.texte2," Le temps passe si lentement  ");
    strcpy(Carte31.texte3,"dans l'espace... Vos produits ");
    strcpy(Carte31.texte4,"  Jeunesse ne vous sont plus  ");
    strcpy(Carte31.texte5," utiles et vous les revendez. ");
    strcpy(Carte31.texte6,"         Recevez 75$          ");
    return Carte31;
}

t_carte carte32()
{
    t_carte Carte32;
    Color(1, 15);
    strcpy(Carte32.texte1,"          COMMUNAUTE          ");
    strcpy(Carte32.texte2,"Vous avez achete une etoile au");
    strcpy(Carte32.texte3,"      nom de votre fiance     ");
    strcpy(Carte32.texte4,"       (c'est mignon!)        ");
    strcpy(Carte32.texte5,"Vous devez encore payer 130$ a");
    strcpy(Carte32.texte6,"           la NASA            ");
    return Carte32;
}
