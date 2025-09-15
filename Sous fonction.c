// les sous fonction

                                                                    // sous fonction alice
                                                                    
                                                                    
 void CarteDisplay(int R)
{
    t_rue carte[33];
    carte[1]=lune();
    carte[3]=europe();
    carte[4]=baikonour();
    carte[5]=titan();
    carte[7]=triton();
    carte[9]=jupiter();
    carte[11]=saturne();
    carte[12]=cape();
    carte[13]=neptune();
    carte[15]=uranus();
    carte[17]=betelgeuse();
    carte[19]=proxima();
    carte[20]=kourou();
    carte[21]=sirius();
    carte[23]=stephenson();
    carte[25]=voixLacte();
    carte[27]=andromede();
    carte[28]=xichang();
    carte[29]=sombrero();
    carte[31]=oeuilNoir();

    affichagecarte(carte[R]);
}
 
void affichagecarte(t_rue L)
{
    gotoligcol(11,153);
    printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━┳┳┳┳┳┓");
    gotoligcol(12,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(13,153);
    printf("┣━━━━━━━━━━━━━━━━━━━━━━━━━┫┃┃┃┃┃");
    gotoligcol(14,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(15,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(16,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(17,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(18,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(19,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(20,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(21,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(22,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(23,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(24,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(25,153);
    printf("┃                         ┃┃┃┃┃┃");
    gotoligcol(26,153);
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━┻┻┻┻┻┛");
    remplircarte(L);
}

void remplircarte(t_rue L)
{
    gotoligcol(12,154);
    Color(0,L.couleur);
    printf(" %s", L.nom);
    Color(0, 15);
    gotoligcol(14,157);
    printf("Achat terrain : %d$", L.prixAchat);
    gotoligcol(15,157);
    printf("Loyer terrain : %d$", L.loyer);
    gotoligcol(17,159);
    printf("1ere Base : %d$", L.loyerMaison);
    gotoligcol(18,159);
    printf("2eme Base : %d$", L.loyerMaison2);
    gotoligcol(19,159);
    printf("3eme Base : %d$", L.loyerMaison3);
    gotoligcol(20,159);
    printf("4eme Base : %d$", L.loyerMaison4);
    gotoligcol(21,159);
    printf("Mega Base : %d$", L.loyerHotel);
    gotoligcol(23,159);
    printf("Achat Base : %d$", L.prixMaison);
    gotoligcol(24,156);
    printf("Achat Mega Base : %d$\n\n\n\n\n\n", L.prixHotel);

    gotoligcol(27,155);
    printf("Proprietaire= %s\n",L.proprio);
    gotoligcol(28,155);
    if(L.hypot==0){printf("hypotheque= NON\n");}else{printf("hypotheque= OUI\n");}
    gotoligcol(29,155);
    printf("Nombre de maison= %d\n", L.nbMaison);
    gotoligcol(30,155);
    printf("Nombre d'Hotel= %d\n", L.nbHotel);
}


void affichagecarte(t_rue L)
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xDA, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBF);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC3 , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xB4);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c                         %c\n", 0xB3 , 0xB3);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC0, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xD9);
    remplircarte(L);
}

// les positions doivent se changer selon le plateau
void remplircarte(t_rue L)  // structure type rue
{
    position(1,1);
    Color(0,L.couleur);
    printf(" %s", L.nom);
    Color(15, 0);
    position(3,4);
    printf("Achat terrain : %d$", L.prixAchat);
    position(4,4);
    printf("Loyer terrain : %d$", L.loyer);
    position(6,6);
    printf("1ere Base : %d$", L.loyerMaison);
    position(7,6);
    printf("2eme Base : %d$", L.loyerMaison2);
    position(8,6);
    printf("3eme Base : %d$", L.loyerMaison3);
    position(9,6);
    printf("4eme Base : %d$", L.loyerMaison4);
    position(10,6);
    printf("Mega Base : %d$", L.loyerHotel);
    position(12,6);
    printf("Achat Base : %d$", L.prixMaison);
    position(13,3);
    printf("Achat Mega Base : %d$\n\n\n\n\n\n", L.prixHotel);

    position(0,30);
    printf("Proprietaire= %s\n",L.proprio);
    position(1,30);
    if(L.hypot==0){printf("hypotheque= NON\n");}else{printf("hypotheque= OUI\n");}
    position(2,30);
    printf("Nombre de maison= %d\n", L.nbMaison);
    position(3,30);
    printf("Nombre d'Hotel= %d\n", L.nbHotel);
    position(17,0);
}

void remplircarteg(t_rue G)
{
    position(1,1);
    printf(" %s", G.nom);
    position(4,9);
    printf("Achat du");
    position(5,1);
    printf("Site de lancement : %d$", G.prixAchatg);
    position(7,4);
    printf("Loyer du site : %d$", G.loyerg);
    position(9,4);
    printf("Loyer 2 sites : %d$", G.loyer2g);
    position(10,4);
    printf("Loyer 3 sites : %d$", G.loyer3g);
    position(11,4);
    printf("Loyer 4 sites : %d$", G.loyer4g);
    position(20,0);
}


// meme fonction de remy
void position( int lig, int col )
{
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}



                                                                    
                                                                    // sous fonction cec

void position( int lig, int col )
{
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

void Color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}


//CARTES CHANCES ET COMMUNAUTES

typedef struct Carte
{
    char texte1[50];
    char texte2[50];
    char texte3[50];
    char texte4[50];
    char texte5[50];
    char texte6[50];
}t_carte;

t_carte carte1();
t_carte carte2();
t_carte carte3();
t_carte carte4();
t_carte carte5();
t_carte carte6();
t_carte carte7();
t_carte carte8();
t_carte carte9();
t_carte carte10();
t_carte carte11();
t_carte carte12();
t_carte carte13();
t_carte carte14();
t_carte carte15();
t_carte carte16();
t_carte carte17();
t_carte carte18();
t_carte carte19();
t_carte carte20();
t_carte carte21();
t_carte carte22();
t_carte carte23();
t_carte carte24();
t_carte carte25();
t_carte carte26();
t_carte carte27();
t_carte carte28();
t_carte carte29();
t_carte carte30();
t_carte carte31();
t_carte carte32();


void affichageCarte();
void remplirCarte();
void Color(int couleurDuTexte,int couleurDeFond);


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

void position( int lig, int col )
{
    COORD mycoord;
    mycoord.X = col;
    mycoord.Y = lig;
    SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), mycoord );
}

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

void Color(int couleurDuTexte,int couleurDeFond)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

int main()
{
    int Case=0;
    printf("1 pour chance et 2 pour commu\n");
    scanf("%d",&Case);
    if (Case==1)
    {
       srand(time(NULL));
        int numCarteChance=0;
        numCarteChance=1+rand()%16;
        if(numCarteChance==1)
            affichageCarte(carte1());
        if(numCarteChance==2)
            affichageCarte(carte2());
        if(numCarteChance==3)
            affichageCarte(carte3());
        if(numCarteChance==4)
            affichageCarte(carte4());
        if(numCarteChance==5)
            affichageCarte(carte5());
        if(numCarteChance==6)
            affichageCarte(carte6());
        if(numCarteChance==7)
            affichageCarte(carte7());
        if(numCarteChance==8)
            affichageCarte(carte8());
        if(numCarteChance==9)
            affichageCarte(carte9());
        if(numCarteChance==10)
            affichageCarte(carte10());
        if(numCarteChance==11)
            affichageCarte(carte11());
        if(numCarteChance==12)
            affichageCarte(carte12());
        if(numCarteChance==13)
            affichageCarte(carte13());
        if(numCarteChance==14)
            affichageCarte(carte14());
        if(numCarteChance==15)
            affichageCarte(carte15());
        if(numCarteChance==16)
            affichageCarte(carte16());
    }

    else
    {
        srand(time(NULL));
        int numCarteCommu=0;
        numCarteCommu=17+rand()%32;
        if(numCarteCommu==17)
            affichageCarte(carte17());
        if(numCarteCommu==18)
            affichageCarte(carte18());
        if(numCarteCommu==19)
            affichageCarte(carte19());
        if(numCarteCommu==20)
            affichageCarte(carte20());
        if(numCarteCommu==21)
            affichageCarte(carte21());
        if(numCarteCommu==22)
            affichageCarte(carte22());
        if(numCarteCommu==23)
            affichageCarte(carte23());
        if(numCarteCommu==24)
            affichageCarte(carte24());
        if(numCarteCommu==25)
            affichageCarte(carte25());
        if(numCarteCommu==26)
            affichageCarte(carte26());
        if(numCarteCommu==27)
            affichageCarte(carte27());
        if(numCarteCommu==28)
            affichageCarte(carte28());
        if(numCarteCommu==29)
            affichageCarte(carte29());
        if(numCarteCommu==30)
            affichageCarte(carte30());
        if(numCarteCommu==31)
            affichageCarte(carte31());
        if(numCarteCommu==32)
            affichageCarte(carte32());
    }


    position(15,1);
    return 0;
}

//CREDITS

void affichageNoms()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC9, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBB);
    printf("%c                                        %c\n", 0xBA , 0xBA);
    printf("%c                                        %c\n", 0xBA , 0xBA);
    printf("%c                                        %c\n", 0xBA , 0xBA);
    printf("%c                                        %c\n", 0xBA , 0xBA);
    printf("%c                                        %c\n", 0xBA , 0xBA);
    printf("%c                                        %c\n", 0xBA , 0xBA);
    printf("%c                                        %c\n", 0xBA , 0xBA);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC8, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBC);
    remplirNoms();
}

void remplirNoms()
{
    position(1,1);
    printf("      ");
    Color(0,10);
    printf("Membres d'equipe du projet:");
    Color(15,0);
    printf("       ");
    position(3,1);
    printf("             Alexis BOULIC              ");
    position(4,1);
    printf("               Remy CHEN                ");
    position(5,1);
    printf("            Cecile DELAPORTE            ");
    position(6,1);
    printf("             Alice TOSELLO              ");
}


//AFFICHER LES REGLES

void affichageRegles()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC9, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBB);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                                              %c\n", 0xBA , 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c                                                                                                                                                      %c\n", 0xBA , 0xBA);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",  0xC8, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBC);
    remplirRegles();
}

void remplirRegles()
{
    position(1,1);
    printf("                                                                  ");
    Color(0,14);
    printf("REGLES DU MONOSPACE");
    Color(15,0);
    printf("                                                                 ");

    position(3,1);
    printf("  %c L'objectif ? Devenez le joueur le plus riche en achetant, louant ou vendant des proprietes du Monospace. Amenez vos adversaires a la faillite !   ", 0x10);


    position(6,1);
    printf("              %c Lors de votre tour, lancez les des et deplacez-vous sur la case correspondante. Si vous avez fait un double, rejouez.                 ", 0x10);
    position(7,1);
    printf("                                       %c ATTENTION ! Si vous faites 3 doubles d'affiles, vous allez en prison.                                        ", 0x10);

    position(11,1);
    printf("                                                                     ");
    Color(0,15);
    printf("Proprietes:");
    Color(15,0);
    printf("                                                                      ");
    position(12,1);
    printf("              %c Si vous vous arretez sur une propriete non possedee, vous pouvez l'acheter en versant le montant indique a la Banque.                 ", 0x10);
    position(13,1);
    printf("%c Si vous vous arretez sur une propriete possedee, vous devez payer le loyer indique au joueur proprietaire. Si ce dernier possede les 2 cartes de la ", 0x10);
    position(14,1);
    printf("                                             meme couleur, vous devez payer le double du loyer initial.                                               ");
    position(15,1);
    printf("                   %c Vous avez les deux cartes de la meme couleur? Construisez des maisons ou des hotels, ca rapporte bien plus !                     ", 0x10);
    position(16,1);
    printf("                                            %c Si une propriete est hypothequee, aucun loyer n'est percu.                                              ", 0x10);

    position(20,1);
    printf("                                                                   ");
    Color(0,15);
    printf("Cases speciales:");
    Color(15,0);
    printf("                                                                   ");
    position(21,1);
    printf("                                        %c Chaque fois que vous passez par la case DEPART, vous touchez 200$.                                          ", 0x10);
    position(22,1);
    printf("      %c Les cartes Chances et Communautes changent le cours du jeu, en vous faisant payer ou gagner de l'argent, deplacer sur le plateau, etc.        ", 0x10);
    position(23,1);
    printf("                        %c Si vous tombez sur la case Impots sur le revenu ou sur une Taxe, vous devez payer 200$ a la Banque                          ", 0x10);

    position(27,1);
    printf("                                                                       ");
    Color(0,15);
    printf("Prison:");
    Color(15,0);
    printf("                                                                       ");
    position(28,1);
    printf("                                                         %c Raisons vous amenant en prison :                                                           ", 0x10);
    position(29,1);
    printf("                     %c%c%c%c%c%c%c%c%c%c%c%c                             1. 3 doubles a la suite                                                                 ", 0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5);
    position(30,1);
    printf("                     %c%c%c%c%c%c%c%c%c%c%c%c                     2. Vous tombez sur la case Allez en prison                                                      ", 0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3);
    position(31,1);
    printf("                     %c%c%c%c%c%c%c%c%c%c%c%c             3. Vous piochez la carte Chance/Communaute Allez en prison                                              ", 0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3);
    position(32,1);
    printf("                     %c%c%c%c%c%c%c%c%c%c%c%c                  %c Comment sortir de prison (3 tours maximum) :                                                     ", 0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3, 0x10);
    position(33,1);
    printf("                     %c%c%c%c%c%c%c%c%c%c%c%c                               1. Lancez un double                                                                   ",0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3,0xB3);
    position(34,1);
    printf("                     %c%c%c%c%c%c%c%c%c%c%c%c            2. Utilisez votre carte Sortir de prison si vous en avez une                                            ",0xC5,0xC5,0xC5,0xC5, 0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5,0xC5);
    position(35,1);
    printf("                                        3. Achetez la carte Sortir de prison a un autre joueur et utilisez-la                                         ");
    position(36,1);
    printf("                                                  4. Payez une amende de 50$ avant de lancer les des                                                  ");
    position(37,1);
    printf("            5. Si vous ne jouez pas de double au troisieme tour en prison, vous devez payer 50$ et allez a la case correspondante aux des             ");
    position(38,1);
    printf(" %c Vous avez le droit de continuer vos achats et ventes de proprietes, de maisons, d'hotels meme en prison, et vous continuez de toucher vos loyers   ", 0x10);


    position(42,1);
    printf("                                                                    ");
    Color(0,15);
    printf("Constructions:");
    Color(15,0);
    printf("                                                                    ");
    position(43,1);
    printf("                                     %c Les prix des maisons et des hotels sont differents selon les proprietes.                                       ", 0x10);
    position(44,1);
    printf("%c Vous pouvez poser jusqu'a 4 maisons sur une meme propriete. Ensuite vous pouvez acheter un hotel A la Banque et rendre vos maisons. Un hotel maximum", 0x10);
    position(45,1);
    printf("                                                                      par case.                                                                       ");
    position(46,1);
    printf("           %c Si la Banque n'a plus de stock de batiments, vous devez attendre qu'un autre joueur revende ses maisons avant de construire.             ", 0x10);
    position(47,1);
    printf("                      %c Vous pouvez vendre vos constructions  a n'importe quel moment a la Banque pour la moitie du prix paye.                        ", 0x10);
    position(48,1);
    printf("                    %c Pour revendre un hotel, soit vous le faites en une seule fois, soit maison par maison (1 hotel=5 maisons)                       ", 0x10);

    position(52,1);
    printf("                                                                     ");
    Color(0,15);
    printf("Hypotheque:");
    Color(15,0);
    printf("                                                                     ");
    position(53,1);
    printf("                                %c Si vous manquez d'argent, vous pouvez hypothequer vos proprietes non construites.                                   ", 0x10);
    position(54,1);
    printf("     %c Avant d'hypothequer une propriete amelioree, il faut revendre toutes les constructions de son groupe de couleur a la Banque moitie prix.       ", 0x10);
    position(55,1);
    printf("                                     %c Si votre propriete est hypothequee, vous ne pouvez pas toucher de loyer.                                       ", 0x10);
    position(56,1);
    printf("          %c Pour lever l'hypotheque de votre terrain, vous devez payer a la Banque le montant de l'hypotheque majore d'un interet de 10%.             ", 0x10);
    position(57,1);
    printf("                      %c Vous pouvez echanger une propriete hypothequee avec un autre joueur, selon un prix convenu entre vous.                        ", 0x10);

    position(61,1);
    printf("                                                                      ");
    Color(0,15);
    printf("Faillite:");
    Color(15,0);
    printf("                                                                      ");
    position(62,1);
    printf("        %c Si vous devez payer plus que vous ne pouvez a la Banque ou a un autre joueur, vous etes declare en faillite et quittez la partie.           ", 0x10);
    position(63,1);
    printf(" %c Si votre dette est envers un joueur, vous devez lui remettre tout ce que vous possedez avant de vous retirer. Si dans vos biens se trouvent des    ", 0x10);
    position(64,1);
    printf(" terrains hypotheques, alors le nouveau proprietaire doit immediatement payer a la Banque le montant des interets sur le pret, soit 10% de la valeur  ");
    position(65,1);
    printf("                                                                       du bien                                                                        ");
    position(66,1);
    printf("                   %c Si vous etes proprietaire de batiments, vous devez les revendre a la Banque pour la moitie du prix d'achat.                      ", 0x10);
    position(67,1);
    printf("                            %c Si votre dette est envers la Banque, vous devez remettre tous vos biens a cette derniere.                               ", 0x10);

    position(71,1);
    printf("                                                                       ");
    Color(0,15);
    printf("Prets:");
    Color(15,0);
    printf("                                                                       ");
    position(72,1);
    printf("                                           %c La Banque ne peut pas preter de l'argent (hors hypotheques).                                             ", 0x10);
    position(73,1);
    printf("                                             %c Vous ne pouvez pas preter de l'argent a un autre joueur.                                               ", 0x10);

    position(77,1);
    printf("       %c Maintenant, revenez sur le menu principal, demarrez une nouvelle partie, entrez vos noms, et que le plus malin (chanceux ?) gagne !          ", 0x10);
}


//STATIONNEMMENT GRATUIT


void affichageStaGrat()
{
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC9, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBB);
    printf("%c      ", 0xBA);
    Color(3,0);
    printf("Stationnement Gratuit:");
    Color(15,0);
    printf("       %c\n",0xBA);
    printf("%c                                   %c\n", 0xBA , 0xBA);
    printf("%cReposez vous le reste de votre tour%c\n", 0xBA , 0xBA);
    printf("%c en admirant les etoiles fillantes %c\n", 0xBA , 0xBA);
    printf("%c                                   %c\n", 0xBA , 0xBA);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n", 0xC8,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBC);
}



///FAILLITE

void failliteBanque(t_joueur*j, t_rue*L, t_banque*b)
{
    int i;
    for(i=0;i<31;i++)
    {
        if(L[i]->proprietaire==j->numeroJ)
        {
            b->nombreMaisonRestant+=L[i].nbMaison;
            b->nombreHotelRestant+=L[i].nbHotel;
            L[i].nbHotel=0;
            L[i].nbMaison=0;
            strcpy(L[i].proprio,"BANQUE");
            L[i].proprietaire=0;
            L[i].etatHypot=0;
        }
    }
}

void failliteJoueur(t_joueur*jf,t_rue*L,t_joueur*jg,t_banque*b)
{
    int i;
    for(i=0;i<31;i++)
    {
        if(L[i]->proprietaire==jf->numeroJ)
        {
            b->nombreMaisonRestant+=L[i].nbMaison;
            b->nombreHotelRestant+=L[i].nbHotel;
            L[i].proprietaire=jg->numeroJ;
            strcpy(L[i].proprio,jg->pseudo);
            jg->richesseEnPropriete+=L[i].prixAchat;
            jg->argent+=L[i].(prixMaison/2)*nbMaison;
            jg->argent+=L[i].(prixHotel/2)*nbHotel;
            jg->argent+=jf->argent;
            L[i].nbHotel=0;
            L[i].nbMaison=0;
            if L[i].etatHypot==1
            {
                jg->argent-=L[i].hypot*0,1;
            }
        }
    }
}









                                                                    // sous fonction alexis
 
 //partie affichage menu
 int main()
{
    int choix;
    position(1,25);
    Color(0,15);
    printf("LE MONOSPACE");
    Color(15,0);
    Sleep(1000);
    system("cls");
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

 
 void affichageMenu()
{
    Color(15,0);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC9, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBB);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c                                                                           %c\n", 0xBA , 0xBA);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 0xC8,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD,0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xBC);
    remplirMenu();
}

void remplirMenu()
{
    Color(0,15);
    position(1,23);
    printf("Bienvenue dans le MONOSPACE");
    Color(15,0);
    position(3,15);
    printf("%c Saisir 1 pour commencer une nouvelle partie", 0x10);
    position(4,15);
    printf("%c Saisir 2 pour reprendre la partie en cours", 0x10);
    position(5,15);
    printf("%c Saisir 3 pour charger une ancienne partie", 0x10);
    position(6,15);
    printf("%c Saisir 4 pour sauvegarder la partie en cours", 0x10);
    position(7,15);
    printf("%c Saisir 5 pour afficher les regles", 0x10);
    position(8,15);
    printf("%c Saisir 6 pour afficher les credits", 0x10);
    position(9,15);
    printf("%c Saisir 7 pour quitter le jeu", 0x10);
}

                                                                    
 //partie nouvelle partie                                                                   
t_joueur* creationJoueur(int* nbJoueurs)//IN le tableau dynamique de joueur OUT le nombre de joueur utile pour les autres sous prgm
{//allocation dynamique qui durera toute une partie
    t_joueur* liste_joueurs;
    int i;
    do
    {
        printf("Saisir le nombre de joueur(max 6)");
        scanf("%d", nbJoueurs);
    }while(*nbJoueurs<1 || *nbJoueurs>6);

    liste_joueurs = (t_joueur*)malloc((*nbJoueurs)*sizeof(t_joueur));//il est peut être mieux de faire une calloc pour tout initialiser à 0 du coup il faut peut être utiliser un réalloc
    if(liste_joueurs==NULL)
    {
        exit(1);
    }
    else
    {
        for(i=0; i<*nbJoueurs; i++)
        {
            printf("Saisir le pseudo du joueur %d:\t", i+1);
            //remplir la case pseudo
            fflush(stdin);
            fgets(liste_joueurs[i].pseudo, 25, stdin);//ou faire un scanf pour empecher les espaces dans le pseudo
            liste_joueurs[i].argent=argentDeDepart;
            printf("rentrez le charactere que vous souhaitez avoir comme pion\n");
            fflush(stdin);
            scanf("%c", &liste_joueurs[i].pion);
            liste_joueurs[i].numeroJ=i+1;
            liste_joueurs[i].nbMaison=0;
            liste_joueurs[i].nbHotel=0;
            liste_joueurs[i].richesseTotale=0;
            liste_joueurs[i].richesseEnPropriete=0;
            //définir certains autres truc à 0 comme le nombre de propriété etc
        }
    }

    /*free(liste_joueurs);
    liste_joueurs=NULL;*/
    //penser à bien libérer l'espace des joueurs avant de terminer le programme!
    system("cls");
    return liste_joueurs;
}
    
    
    void initialisationDeLaBanque(t_banque* banque)//IN pointeur sur la banque
{
    *banque = (t_banque){ .nombreHotelRestant = 12,
                    .nombreMaisonRestant = 32};
}

void payerLesSalaires(/*on met la case d'argent du joueur*/ t_joueur* j) //on met cette fonction dans un if avec le déplacement du joueur si il passe au dessus de la case départ
{
    j->argent+=200;
}

void payerLesTaxes(t_joueur* j)//IN l'argent du joueur, déclancher lorsque l'on tombe sur un numéro de case
{
    j->argent-=200/*prix de la carte surement une structure*/;
}


void achatProprio(t_joueur* j, t_rue* rue)
{
    j->argent -= rue->prixAchat;
    j->richesseEnPropriete += rue->prixAchat;
    strcpy(rue->proprio,j->pseudo);
    rue->proprietaire=j->numeroJ;
}
void venteProprio(t_joueur* j, t_rue* rue, t_banque* banque)//normalement on ne peut pas vendre si la maison est hypothéqué mais flm
{
    if(rue->nbHotel==1)
    {
        j->argent+=(rue->prixAchat+(4*(rue->prixMaison/2))+(rue->nbHotel*(rue->prixHotel/2)));
        j->richesseEnPropriete -= (rue->prixAchat+(4*(rue->prixMaison/2))+(rue->nbHotel*(rue->prixHotel/2)));
    }else
    {
        j->argent+=(rue->prixAchat+(rue->nbMaison*(rue->prixMaison/2)));
        j->richesseEnPropriete -= (rue->prixAchat+(rue->nbMaison*(rue->prixMaison/2)));
    }

    strcpy(rue->proprio,"BANQUE");
    rue->proprietaire=0;
    banque->nombreMaisonRestant+=rue->nbMaison;
    banque->nombreHotelRestant+=rue->nbHotel;
    j->nbMaison-=rue->nbMaison;
    j->nbHotel-=rue->nbHotel;
    rue->nbMaison=0;
    rue->nbHotel=0;
}
void achatMaison(t_joueur* j, t_rue* rue, t_banque* banque)
{
    j->nbMaison++;
    j->argent-=rue->prixMaison;
    j->richesseEnPropriete+=rue->prixMaison/2;

    rue->nbMaison++;

    banque->nombreMaisonRestant--;
}
void venteMaison(t_joueur* j, t_rue* rue, t_banque* banque)//seuelement si il a déjà des maison
{
    j->nbMaison--;
    j->argent+=rue->prixMaison/2;
    j->richesseEnPropriete-=rue->prixMaison/2;
    rue->nbMaison--;

    banque->nombreMaisonRestant++;
}
void achatHotel(t_joueur* j, t_rue* rue, t_banque* banque)//activable seulement si le nombre de maison est égal à 4 sur une proprio
{
    j->argent-=rue->prixHotel;
    j->richesseEnPropriete+=rue->prixHotel/2;
    j->nbHotel++;
    j->nbMaison-=4;

    rue->nbHotel++;
    rue->nbMaison-=4;

    banque->nombreMaisonRestant+=4;
    banque->nombreHotelRestant--;
}
void venteHotel(t_joueur* j, t_rue* rue, t_banque* banque)//activable seulement si le un hotel est présent
{
    j->argent+=rue->prixHotel/2;
    j->richesseEnPropriete-=rue->prixHotel/2;
    j->nbHotel--;
    j->nbMaison+=4;

    rue->nbHotel--;
    rue->nbMaison+=4;

    banque->nombreMaisonRestant-=4;
    banque->nombreHotelRestant++;
}
void hypotheque(t_joueur* j, t_rue* rue)//seulement si il n'y a pas de maison// a changer
{
    j->argent+=rue->hypot;
    rue->etatHypot=1;
}
void desHypotheque(t_joueur* j, t_rue* rue)
{
    j->argent-=rue->hypot*1.10;
    rue->etatHypot=0;
}

void calculLoyerPropr(t_joueur* tabJ, int j, t_rue* rue)//on met le tableau de joueur   A TESTER
{
    printf(" J1 %d\n", tabJ[0].argent);
    printf("J2 %d\n", tabJ[1].argent);
    if (rue->etatHypot==1)
    {
//si la propriété est hypothéquée il ne se passe rien et on sort de la fonction
    }
    else if (rue->nbMaison==0 && rue->nbHotel==0)
    {
        tabJ[j].argent-=rue->loyer;
        tabJ[rue->proprietaire-1].argent+=rue->loyer;
    }else if (rue->nbMaison==1)
    {
        tabJ[j].argent-=rue->loyerMaison;
        tabJ[rue->proprietaire-1].argent+=rue->loyerMaison;
    }else if (rue->nbMaison==2)
    {
        printf("J2 : %d\n", tabJ[1].argent);
        tabJ[j].argent-=rue->loyerMaison2;
        printf("action debiter faite\n");
        printf("%d\n", tabJ[j].argent);
        tabJ[1].argent+=rue->loyerMaison2;
        printf("action crediter faite\n");
        printf("%d\n", tabJ[1].argent);
        printf("%d\n", rue->loyerMaison2);
    }else if (rue->nbMaison==3)
    {
        tabJ[j].argent-=rue->loyerMaison3;
        tabJ[rue->proprietaire-1].argent+=rue->loyerMaison3;
    }else if (rue->nbMaison==4)
    {
        tabJ[j].argent-=rue->loyerMaison4;
        tabJ[rue->proprietaire-1].argent+=rue->loyerMaison4;
    }else if (rue->nbHotel==1)
    {
        tabJ[j].argent-=rue->loyerHotel;
        tabJ[rue->proprietaire-1].argent+=rue->loyerHotel;//-1 parce que le num propriétaire est le num du tableau +1
    }
}
//////////////////////////
void gererUnePropriete(t_joueur* j, t_rue* rue, t_banque* banque)
{
    int i, choix;
    printf("Vous possedez les proprietes suivantes: \n");
    for(i=0; i<31; i++)
    {
        if(j->numeroJ==rue[i].proprietaire)
        {
            printf("%d : %s", i, rue[i].nom);
        }
    }
    printf("Saisir le numero de la propriete que vous souhaitez gerer:  ");
    fflush(stdin);
    scanf("%d", &choix);

    if(rue[choix].proprietaire!=j->numeroJ)
    {
        printf("Cette proprietee ne vous appartient pas!");// et on revient au menu de base
    }
    else
    {
        //menu pour gerer
        do
        {
            do{
                printf("Vous avez actuellement %d maison et %d hotel sur le terrain\n\n",rue[choix].nbMaison, rue[choix].nbHotel);
                printf("Déméliorer la propriété (taper 1)\n");
                printf("Hypothéquer la propriété (tapez 2)\n");
                printf("Vendre la propriété(tapez 3)\n");
                printf("Continuer/revenir a la propriete sur laquelle vous etes (taper 4)\n");
                printf("Revenir au menu (taper 5)\n");
            }while(choix<=0 || choix>=6);
            switch (choix){
                case 1:
                    if(rue[choix].nbMaison<4 && rue[choix].nbMaison>0)
                    {
                        venteMaison(j, &rue[choix], banque);
                    }
                    else if(rue[choix].nbHotel==1)
                    {
                        venteHotel(j, &rue[choix], banque);
                    }
                    else
                    {
                        printf("Vous ne pouvez plus déméliorer la propriété");
                    }
                    break;
                case 2:
                    if(rue[choix].nbMaison>0 || rue[choix].nbHotel>0)
                    {
                        hypotheque(j, &rue[choix]);
                    }
                    else
                    {
                        printf("Vendez d'abord vos maisons\n");
                    }
                    break;
                case 3:
                    venteProprio(j, &rue[choix], banque);
                    break;
                case 4:
                    //revenir à la propriété d'avant donc juste sortir de la fonction
                    break;
                case 5:
                    //revenir au menu le esc
                    break;
            }
        }while(choix!=4);
    }
}
//////////////////////////////////////////////////////

void action(t_joueur** tabJ, int numJ, t_rue** tabRue, int numCase, t_banque* banque, int nbJoueur)//IN le tableau de joueurs, le numéro de celui qui est entrain de jouer = numéro dans la boucle, le tableau de Rue, la case sur laquelle le joueur est, la banque et le nombre de joueur total
{
    int choix;
    int choix2;
    if(tabRue[numCase]->proprietaire==0)
    {
        do{//je suppose que l'affichage de la carte est déjà fait
            printf("Voulez vous acheter ce terrain ? (Si oui taper 1 sinon taper 2)\n");
            fflush(stdin);
            scanf("Votre choix : %d", &choix);
        }while(choix<1 || choix>2);
        if(choix==1)
        {
            achatProprio(tabJ[numJ], tabRue[numCase], banque);
            do{
                do{
                    printf("Vous avez actuellement %d maison et %d hotel sur le terrain\n\n",tabRue[numCase]->nbMaison, tabRue[numCase]->nbHotel);
                    printf("Améliorer la propriété (taper 1)\n");
                    printf("Déméliorer la propriété (taper 2)\n");
                    printf("Hypothéquer la propriété (tapez 3)\n");
                    printf("Vendre la propriété(tapez 4)\n");
                    printf("Continuer (tapez 5)\n");//on relance les dés on sort de la fonction
                    printf("Gérer une propriété (tapez 6)\n");
                    printf("Revenir au menu (tapez 7)\n");
                    fflush(stdin);
                    scanf("%d", &choix2);
                }while(choix2<1 || choix2>7);

                switch(choix)
                {
                    case 1:
                        //Améliorer la propriété
                        if(tabRue[numCase]->nbMaison<4)
                        {
                            achatMaison(tabJ[numJ], tabRue[numCase], banque);
                        }
                        else if (tabRue[numCase]->nbMaison==4)
                        {
                            achatHotel(tabJ[numJ], tabRue[numCase], banque);
                        }
                        else
                        {
                            printf("Vous ne pouvez plus améliorer la propriété");
                        }
                        break;
                    case 2:
                        //Déméliorer la propriété
                        if(tabRue[numCase]->nbMaison<4 && tabRue[numCase]->nbMaison>0)
                        {
                            venteMaison(tabJ[numJ], tabRue[numCase], banque);
                        }
                        else if(tabRue[numCase]->nbHotel==1)
                        {
                            venteHotel(tabJ[numJ], tabRue[numCase], banque);
                        }
                        else
                        {
                            printf("Vous ne pouvez plus déméliorer la propriété");
                        }
                        break;
                    case 3:
                        //hypothéquer
                        if(tabRue[numCase]->nbMaison>0 || tabRue[numCase]->nbHotel>0)
                        {
                            printf("Vendez d'abord vos maisons\n");
                        }
                        else
                        {
                            hypotheque(tabJ[numJ], tabRue[numCase]);
                        }
                        break;
                    case 4:
                        //vendre la propriété
                        {
                            venteProprio(tabJ[numJ], tabRue[numCase], banque);
                        }

                        break;
                    case 5:
                        gererUnePropriete(tabJ[numJ], tabRue, banque);
                        break;
                    case 6:
                        break;
                    case 7:
                        //retour au menu
                        break;
            }
        }while(choix2!=5);
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
                    gererUnePropriete(tabJ[numJ], tabRue, banque);
                }
                else
                {
                    //Retour au menu; exit(1)??
                }
            }while(choix2!=1);
        }
    }
    else if(tabRue[numCase]->proprietaire==tabJ[numJ]->numeroJ)
    {
        if(tabRue[numCase]->etatHypot==0)
        {
            do{
                printf("Vous avez actuellement %d maison et %d hotel sur le terrain\n\n",tabRue[numCase]->nbMaison, tabRue[numCase]->nbHotel);
                printf("Améliorer la propriété (taper 1)\n");
                printf("Déméliorer la propriété (taper 2)\n");
                printf("Hypothéquer la propriété (tapez 3)\n");
                printf("Vendre la propriété(tapez 4)\n");
                printf("Gérer un autre terrain (taper 5)\n");
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
                        if(tabRue[numCase]->nbMaison<4)
                        {
                            achatMaison(tabJ[numJ], tabRue[numCase], banque);
                        }
                        else if (tabRue[numCase]->nbMaison==4)
                        {
                            achatHotel(tabJ[numJ], tabRue[numCase], banque);
                        }
                        else
                        {
                            printf("Vous ne pouvez plus améliorer la propriété");
                        }
                        break;
                    case 2:
                        //Déméliorer la propriété
                        if(tabRue[numCase]->nbMaison<4 && tabRue[numCase]->nbMaison>0)
                        {
                            venteMaison(tabJ[numJ], tabRue[numCase], banque);
                        }
                        else if(tabRue[numCase]->nbHotel==1)
                        {
                            venteHotel(tabJ[numJ], tabRue[numCase], banque);
                        }
                        else
                        {
                            printf("Vous ne pouvez plus déméliorer la propriété");
                        }
                        break;
                    case 3:
                        //hypothéquer
                        if(tabRue[numCase]->nbMaison>0 || tabRue[numCase]->nbHotel>0)
                        {
                            printf("Vendez d'abord vos maisons\n");
                        }
                        else
                        {
                            hypotheque(tabJ[numJ], tabRue[numCase]);
                        }
                        break;
                    case 4:
                        //vendre la propriété
                        {
                            venteProprio(tabJ[numJ], tabRue[numCase], banque);
                        }

                        break;
                    case 5:
                        gererUnePropriete(tabJ[numJ], tabRue, banque);
                        break;
                    case 6:
                        break;
                    case 7:
                        //retour au menu
                        break;
                }
            }while(choix!=6);
        }
        else if(tabRue[numCase]->etatHypot==1)
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
                        desHypotheque(tabJ[numJ], tabRue[numCase]);
                        break;
                    case 2:
                        //vendre votre terrain
                        if(tabRue[numCase]->etatHypot==1)
                        {
                            printf("Deshypothequez d'abord votre proprietee\n");
                        }
                        else
                        {
                            venteProprio(tabJ[numJ], tabRue[numCase], banque);
                        }
                        break;
                    case 3:
                        gererUnePropriete(tabJ[numJ], tabRue, banque);
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
    else if(tabRue[numCase]->proprietaire==-1)
    {
        do{
                do{
                    printf("Continuer (tapez 1)\n");
                    printf("Gérer une propriété (tapez 2)\n");
                    printf("Revenir au menu (tapez 3)\n");
                    fflush(stdin);
                    scanf("%d", &choix2);
                }while(choix2<1 || choix2>3);
                switch(choix)
                     {
                        case 1:
                            gererUnePropriete(tabJ[numJ], tabRue, banque);
                            break;
                        case 2:
                            //finir le tour
                            break;
                        case 3:
                            //menu
                            break;
                    }
        }while(choix != 1);
    }
    else
    {
        do{
                do{
                     printf("!!! vous ne pouvez pas acheter cette carte, elle appartient deja a %s !!!\n",tabRue[numCase]->proprio);
                     calculLoyerPropr(tabJ, numJ, tabRue[numCase]);//on met le tableau de joueur
                     printf("Gérer un terrain (taper 1)\n");
                     printf("Finir votre tour (taper 2)\n");
                     printf("Revenir au menu (taper 3)\n");
                     switch(choix)
                     {
                        case 1:
                            gererUnePropriete(tabJ[numJ], tabRue, banque);
                            break;
                        case 2:
                            //finir le tour
                            break;
                        case 3:
                            //menu
                            break;
                    }
                    scanf("%d", &choix2);
                }while(choix2<1 || choix2>3);
        }while(choix!=2);
    }
}

                                                                    // sous fonction remy
