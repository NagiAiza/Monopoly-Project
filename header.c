// a mettre dans le header
typedef struct{
    char pseudo[25];
    char pion;
    int argent;
    int richesseEnPropriete;//tout est dans le nom :)
    int richesseTotale;//on additionne la richesse en propriété et l'argent du joueur lorsqu'on doit vérifier la faillite
    int nbMaison;
    int nbHotel;
    int numeroJ; //permet de savoir quelle propriété lui appartient

//sert au mvmt
    int X;
    int Y;
    int Decalage_X;
    int Decalage_Y;
    int Row;

}t_joueur;


                                                                           // header de alice


                             //definition de mes sturcture
typedef struct Rue
{


    char nom[50];
    int prixAchat;
    int loyer;
    int loyerMaison;
    int loyerMaison2;
    int loyerMaison3;
    int loyerMaison4;
    int loyerHotel;
    int prixHotel;
    int prixMaison;
    int couleur;
    char proprio[50];
    int proprietaire;//détient le numéro du joueur à qui appartient la propriété donc pour accéder au joueur du tableau on fait -1
    int hypot;
    int etatHypot;
    int nbMaison;
    int nbHotel;
    int prixAchatg;
    int loyerg;
    int loyer2g;
    int loyer3g;
    int loyer4g;
}t_rue;

                              //info rue
t_rue lune()
{
    t_rue Lune;
    Lune.couleur=7;
    strcpy(Lune.nom, "         Lune           ");
    Lune.prixAchat=60;
    Lune.loyer=2;
    Lune.prixMaison=50;
    Lune.loyerMaison=10;
    Lune.loyerMaison2=30;
    Lune.loyerMaison3=90;
    Lune.loyerMaison4=160;
    Lune.prixHotel=50;
    Lune.loyerHotel=250;

    strcpy(Lune.proprio,"BANQUE");
    Lune.proprietaire=-1;
    Lune.hypot=0;
    Lune.etatHypot=0;
    Lune.nbMaison=0;
    Lune.nbHotel=0;
    return Lune;
}

t_rue europe()
{
    t_rue Europe;
    Europe.couleur=7;
    strcpy(Europe.nom, "        Europe          ");
    Europe.prixAchat=60;
    Europe.loyer=4;
    Europe.prixMaison=50;
    Europe.loyerMaison=20;
    Europe.loyerMaison2=60;
    Europe.loyerMaison3=180;
    Europe.loyerMaison4=320;
    Europe.prixHotel=50;
    Europe.loyerHotel=450;

    strcpy(Europe.proprio,"BANQUE");
    Europe.proprietaire=0;
    Europe.hypot=0;
    Europe.etatHypot=0;
    Europe.nbMaison=0;
    Europe.nbHotel=0;
    return Europe;
}

t_rue titan()
{
    t_rue Titan;
    Titan.couleur=3;
    strcpy(Titan.nom, "         Titan          ");
    Titan.prixAchat=100;
    Titan.loyer=5;
    Titan.prixMaison=50;
    Titan.loyerMaison=30;
    Titan.loyerMaison2=90;
    Titan.loyerMaison3=270;
    Titan.loyerMaison4=400;
    Titan.prixHotel=50;
    Titan.loyerHotel=550;

    strcpy(Titan.proprio,"BANQUE");
    Titan.proprietaire=0;
    Titan.hypot=0;
    Titan.etatHypot=0;
    Titan.nbMaison=0;
    Titan.nbHotel=0;
    return Titan;
}

t_rue triton()
{
    t_rue Triton;
    Triton.couleur=3;
    strcpy(Triton.nom, "        Triton          ");
    Triton.prixAchat=120;
    Triton.loyer=8;
    Triton.prixMaison=50;
    Triton.loyerMaison=40;
    Triton.loyerMaison2=100;
    Triton.loyerMaison3=300;
    Triton.loyerMaison4=450;
    Triton.prixHotel=50;
    Triton.loyerHotel=600;

    strcpy(Triton.proprio,"BANQUE");
    Triton.proprietaire=0;
    Triton.hypot=0;
    Triton.etatHypot=0;
    Triton.nbMaison=0;
    Triton.nbHotel=0;
    return Triton;
}

t_rue jupiter()
{
    t_rue Jupiter;
    Jupiter.couleur=5;
    strcpy(Jupiter.nom, "        Jupiter         ");
    Jupiter.prixAchat=140;
    Jupiter.loyer=10;
    Jupiter.prixMaison=50;
    Jupiter.loyerMaison=50;
    Jupiter.loyerMaison2=150;
    Jupiter.loyerMaison3=450;
    Jupiter.loyerMaison4=625;
    Jupiter.prixHotel=50;
    Jupiter.loyerHotel=750;

    strcpy(Jupiter.proprio,"BANQUE");
    Jupiter.proprietaire=0;
    Jupiter.hypot=0;
    Jupiter.etatHypot=0;
    Jupiter.nbMaison=0;
    Jupiter.nbHotel=0;
    return Jupiter;
}

t_rue saturne()
{
    t_rue Saturne;
    Saturne.couleur=5;
    strcpy(Saturne.nom, "        Saturne         ");
    Saturne.prixAchat=160;
    Saturne.loyer=12;
    Saturne.prixMaison=50;
    Saturne.loyerMaison=60;
    Saturne.loyerMaison2=180;
    Saturne.loyerMaison3=500;
    Saturne.loyerMaison4=700;
    Saturne.prixHotel=50;
    Saturne.loyerHotel=900;

    strcpy(Saturne.proprio,"BANQUE");
    Saturne.proprietaire=0;
    Saturne.hypot=0;
    Saturne.etatHypot=0;
    Saturne.nbMaison=0;
    Saturne.nbHotel=0;
    return Saturne;
}

t_rue neptune()
{
    t_rue Neptune;
    Neptune.couleur=6;
    strcpy(Neptune.nom, "        Neptune         ");
    Neptune.prixAchat=180;
    Neptune.loyer=14;
    Neptune.prixMaison=50;
    Neptune.loyerMaison=70;
    Neptune.loyerMaison2=200;
    Neptune.loyerMaison3=550;
    Neptune.loyerMaison4=700;
    Neptune.prixHotel=50;
    Neptune.loyerHotel=900;

    strcpy(Neptune.proprio,"BANQUE");
    Neptune.proprietaire=0;
    Neptune.hypot=0;
    Neptune.etatHypot=0;
    Neptune.nbMaison=0;
    Neptune.nbHotel=0;
    return Neptune;
}

t_rue uranus()
{
    t_rue Uranus;
    Uranus.couleur=6;
    strcpy(Uranus.nom, "        Uranus          ");
    Uranus.prixAchat=200;
    Uranus.loyer=16;
    Uranus.prixMaison=50;
    Uranus.loyerMaison=80;
    Uranus.loyerMaison2=220;
    Uranus.loyerMaison3=600;
    Uranus.loyerMaison4=800;
    Uranus.prixHotel=50;
    Uranus.loyerHotel=1000;

    strcpy(Uranus.proprio,"BANQUE");
    Uranus.proprietaire=0;
    Uranus.hypot=0;
    Uranus.etatHypot=0;
    Uranus.nbMaison=0;
    Uranus.nbHotel=0;
    return Uranus;
}

t_rue betelgeuse()
{
    t_rue Betelgeuse;
    Betelgeuse.couleur=4;
    strcpy(Betelgeuse.nom, "      Betelgeuse        ");
    Betelgeuse.prixAchat=220;
    Betelgeuse.loyer=18;
    Betelgeuse.prixMaison=50;
    Betelgeuse.loyerMaison=90;
    Betelgeuse.loyerMaison2=250;
    Betelgeuse.loyerMaison3=700;
    Betelgeuse.loyerMaison4=875;
    Betelgeuse.prixHotel=50;
    Betelgeuse.loyerHotel=1050;

    strcpy(Betelgeuse.proprio,"BANQUE");
    Betelgeuse.proprietaire=0;
    Betelgeuse.hypot=0;
    Betelgeuse.etatHypot=0;
    Betelgeuse.nbMaison=0;
    Betelgeuse.nbHotel=0;
    return Betelgeuse;
}

t_rue proxima()
{
    t_rue Proxima;
    Proxima.couleur=4;
    strcpy(Proxima.nom, "        Proxima         ");
    Proxima.prixAchat=240;
    Proxima.loyer=20;
    Proxima.prixMaison=50;
    Proxima.loyerMaison=100;
    Proxima.loyerMaison2=300;
    Proxima.loyerMaison3=750;
    Proxima.loyerMaison4=925;
    Proxima.prixHotel=50;
    Proxima.loyerHotel=1100;

    strcpy(Proxima.proprio,"BANQUE");
    Proxima.proprietaire=0;
    Proxima.hypot=0;
    Proxima.etatHypot=0;
    Proxima.nbMaison=0;
    Proxima.nbHotel=0;
    return Proxima;
}

t_rue sirius()
{
    t_rue Sirius;
    Sirius.couleur=14;
    strcpy(Sirius.nom, "        Sirius          ");
    Sirius.prixAchat=260;
    Sirius.loyer=22;
    Sirius.prixMaison=50;
    Sirius.loyerMaison=110;
    Sirius.loyerMaison2=330;
    Sirius.loyerMaison3=600;
    Sirius.loyerMaison4=975;
    Sirius.prixHotel=50;
    Sirius.loyerHotel=1150;

    strcpy(Sirius.proprio,"BANQUE");
    Sirius.proprietaire=0;
    Sirius.hypot=0;
    Sirius.etatHypot=0;
    Sirius.nbMaison=0;
    Sirius.nbHotel=0;
    return Sirius;
}

t_rue stephenson()
{
    t_rue Stephenson;
    Stephenson.couleur=14;
    strcpy(Stephenson.nom, "       Stephenson       ");
    Stephenson.prixAchat=280;
    Stephenson.loyer=24;
    Stephenson.prixMaison=50;
    Stephenson.loyerMaison=120;
    Stephenson.loyerMaison2=360;
    Stephenson.loyerMaison3=850;
    Stephenson.loyerMaison4=1025;
    Stephenson.prixHotel=50;
    Stephenson.loyerHotel=1200;

    strcpy(Stephenson.proprio,"BANQUE");
    Stephenson.proprietaire=0;
    Stephenson.hypot=0;
    Stephenson.etatHypot=0;
    Stephenson.nbMaison=0;
    Stephenson.nbHotel=0;
    return Stephenson;
}

t_rue voixLacte()
{
    t_rue VoixLacte;
    VoixLacte.couleur=2;
    strcpy(VoixLacte.nom, "     La Voix Lacte      ");
    VoixLacte.prixAchat=300;
    VoixLacte.loyer=25;
    VoixLacte.prixMaison=50;
    VoixLacte.loyerMaison=130;
    VoixLacte.loyerMaison2=390;
    VoixLacte.loyerMaison3=900;
    VoixLacte.loyerMaison4=1100;
    VoixLacte.prixHotel=50;
    VoixLacte.loyerHotel=1275;

    strcpy(VoixLacte.proprio,"BANQUE");
    VoixLacte.proprietaire=0;
    VoixLacte.hypot=0;
    VoixLacte.etatHypot=0;
    VoixLacte.nbMaison=0;
    VoixLacte.nbHotel=0;
    return VoixLacte;
}

t_rue andromede()
{
    t_rue Andromede;
    Andromede.couleur=2;
    strcpy(Andromede.nom, "   Galaxie Andromede    ");
    Andromede.prixAchat=320;
    Andromede.loyer=28;
    Andromede.prixMaison=50;
    Andromede.loyerMaison=150;
    Andromede.loyerMaison2=450;
    Andromede.loyerMaison3=1000;
    Andromede.loyerMaison4=1200;
    Andromede.prixHotel=50;
    Andromede.loyerHotel=1400;

    strcpy(Andromede.proprio,"BANQUE");
    Andromede.proprietaire=0;
    Andromede.hypot=0;
    Andromede.etatHypot=0;
    Andromede.nbMaison=0;
    Andromede.nbHotel=0;
    return Andromede;
}

t_rue sombrero()
{
    t_rue Sombrero;
    Sombrero.couleur=1;
    strcpy(Sombrero.nom, "  Galaxie du Sombrero   ");
    Sombrero.prixAchat=350;
    Sombrero.loyer=35;
    Sombrero.prixMaison=50;
    Sombrero.loyerMaison=175;
    Sombrero.loyerMaison2=500;
    Sombrero.loyerMaison3=1100;
    Sombrero.loyerMaison4=1300;
    Sombrero.prixHotel=50;
    Sombrero.loyerHotel=1500;

    strcpy(Sombrero.proprio,"BANQUE");
    Sombrero.proprietaire=0;
    Sombrero.hypot=0;
    Sombrero.etatHypot=0;
    Sombrero.nbMaison=0;
    Sombrero.nbHotel=0;
    return Sombrero;
}

t_rue oeuilNoir()
{
    t_rue OeuilNoir;
    OeuilNoir.couleur=1;
    strcpy(OeuilNoir.nom, "Galaxie de l'Oeuil Noir ");
    OeuilNoir.prixAchat=400;
    OeuilNoir.loyer=50;
    OeuilNoir.prixMaison=50;
    OeuilNoir.loyerMaison=200;
    OeuilNoir.loyerMaison2=600;
    OeuilNoir.loyerMaison3=1400;
    OeuilNoir.loyerMaison4=1700;
    OeuilNoir.prixHotel=50;
    OeuilNoir.loyerHotel=2000;

    strcpy(OeuilNoir.proprio,"BANQUE");
    OeuilNoir.proprietaire=0;
    OeuilNoir.hypot=0;
    OeuilNoir.etatHypot=0;
    OeuilNoir.nbMaison=0;
    OeuilNoir.nbHotel=0;
    return OeuilNoir;
}

                          // info des gare

t_rue baikonour()
{
    t_rue Baikonour;
    strcpy(Baikonour.nomg, "       Baikonour   ");
    Baikonour.prixAchat=200;
    Baikonour.loyerg=25;
    Baikonour.loyer2g=50;
    Baikonour.loyer3g=100;
    Baikonour.loyer4g=200;

    strcpy(Baikonour.propriog,"BANQUE");
    Baikonour.proprietaire=0;
    Baikonour.hypot=0;
    Baikonour.etatHypot=0;
    return Baikonour;
}

t_rue cape()
{
    t_rue Cape;
    strcpy(Cape.nomg, "     Cape Canaveral   ");
    Cape.prixAchat=200;
    Cape.loyerg=25;
    Cape.loyer2g=50;
    Cape.loyer3g=100;
    Cape.loyer4g=200;

    strcpy(Cape.propriog,"BANQUE");
    Cape.proprietaire=0;
    Cape.hypot=0;
    Cape.etatHypot=0;
    return Cape;
}

t_rue kourou()
{
    t_rue Kourou;
    strcpy(Kourou.nomg, "        Kourou   ");
    Kourou.prixAchat=200;
    Kourou.loyerg=25;
    Kourou.loyer2g=50;
    Kourou.loyer3g=100;
    Kourou.loyer4g=200;

    strcpy(Kourou.propriog,"BANQUE");
    Kourou.proprietaire=0;
    Kourou.hypot=0;
    Kourou.etatHypot=0;
    return Kourou;
}

t_rue xichang()
{
    t_rue Xichang;
    strcpy(Xichang.nomg, "        Xichang   ");
    Xichang.prixAchat=200;
    Xichang.loyerg=25;
    Xichang.loyer2g=50;
    Xichang.loyer3g=100;
    Xichang.loyer4g=200;

    strcpy(Xichang.propriog,"BANQUE");
    Xichang.proprietaire=0;
    Xichang.hypot=0;
    Xichang.etatHypot=0;
    return Xichang;
}


                          // def sous fonction


void afficherLune(t_rue L);
void Color(int couleurDuTexte,int couleurDeFond);
void affichagecarte();
void remplircarte();




                                                                             //header de cec


                            //définitions de mes structures
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



                            //definitions de mes sous-programmes
void Color(int couleurDuTexte,int couleurDeFond);

void affichageCarte();
void remplirCarte();

void affichageNoms();
void remplirNoms();

void affichageRegles();
void remplirRegles();

void affichageStaGrat();

                                                                             
                                                                             //header de alexis
                                                                             
                                                                             

void affichageMenu();
void remplirMenu();
void quitter(t_joueur* liste_joueurs);

void initialisationDeLaBanque(t_banque* banque);

t_joueur* creationJoueur(int* nbJoueurs);

void action(t_joueur** tabJ, int numJ, t_rue** tabRue, int numCase, t_banque* banque, int nbJoueur);

void achatProprio(t_joueur* j, t_rue* rue);
void venteProprio(t_joueur* j, t_rue* rue, t_banque* banque);

void achatMaison(t_joueur* j, t_rue* rue, t_banque* banque);
void venteMaison(t_joueur* j, t_rue* rue, t_banque* banque);

void achatHotel(t_joueur* j, t_rue* rue, t_banque* banque);
void venteHotel(t_joueur* j, t_rue* rue, t_banque* banque);

void hypotheque(t_joueur* j, t_rue* rue);
void desHypotheque(t_joueur* j, t_rue* rue);

void calculLoyerPropr(t_joueur** tabJ, int j, t_rue* rue);

void gererUnePropriete(t_joueur* j, t_rue** rue, t_banque* banque);
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             //header de remy
