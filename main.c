#include <stdio.h>
#include <stdlib.h>


typedef struct Noeud{
int valeur;
struct Noeud *suivant;
}Noeud;

Noeud *cree(int _valeur){
Noeud *B;
B=(Noeud*)malloc(sizeof (Noeud));
B->valeur=_valeur;
B->suivant=NULL;
return B;}
void affiche (Noeud *debut){
Noeud *tmp=debut;
while(tmp!=NULL){
    printf("la valeur est %d\n",B->valeur);
    tmp=tmp->suivant;
}
}
Noued*ajoutD(Noeud*debut,int _valeur){
    Noeud*B=NULL;
    B=(Noeud*)malloc(sizeof (Noeud));
    B->valeur=_valeur;
    B->suivant=NULL;
    if(debut!=NULL){
    B->suivant=debut;
    debut=B;}
    debut=B;
    return B;
}
Noeud *ajouterF(Noeud *debut, int _valeur)
{
Noeud *B, *tmp;
B = (Noeud *)malloc(sizeof(Noeud));
NV->valeur = _valeur;
NV->suivant = NULL;
if (debut == NULL)
{
debut = B;
}
else{
tmp = debut;
while (ctmp->suivant != NULL)
{
tmp = tmp->suivant;
}
tmp->suivant = B;

}
return debut;

}
int taille(Noeud *debut)
{
int T = 0;
Noeud *tmp;
tmp = debut;
while (tmp != NULL)
{
T++;
tmp = tmp->suivant;
}
return T;
}
void rechercher (Noeud*debut,int _valeur){
Noeud*tmp;
int k=0;
tmp=debut;
while(tmp!=NULL){
    if(tmp->valeur==_valeur){
        k++;
    }
    tmp=tmp->suivant;
}
if(k!=NULL){
    printf("La valeur existe");
}
else{
    printf("La valeur n'existe pas ");
}
}
Noeud *suppressionD(Noeud *debut)
{
Noeud *P;
if(debut!=NULL){
    P = debut;
    debut = debut->suivant;
free(P);
}
return debut;
}
Noeud *suppressionF(Noeud *debut)
{
    Noeud*P;
if (debut != NULL)
{
    if (debut->suivant == NULL){
        free(debut);
        debut=NULL;

}
else{
        P=debut;
while(P->suivant->suivant!=NULL){
    P=P->suivant;
}
free(P->suivant);
P->suivant=NULL;}
}
return debut;
}
Noeud*modifierD(Noeud*debut,int _valeur){
if (debut!=NULL){
    Noeud*ptr=debut;
    ptr->valeur=_valeur;
}
return debut;}
Noeud*modifierF(Noeud*debut,int _valeur){
Noeud*ptr=debut;
if(debut!=NULL){
    while(ptr->suivant!=NULL){
        ptr=ptr->suivant;
    }
    ptr->valeur=_valeur;
}
return debut;
}

Noeud * supp_posi (noeud * debut; int pos) {
     noeud *ptr, *temp:
        int p=1:
        if (debut =NULL){
            printf ("erreur");}
        else{
        while (ptr->next!=NULL|| p <pos) {
        ptr=ptr->next;
        p++;}
        if (ptr->next==NULL){
            suppressionF (debut) ;}
        else {
        temp=ptr->next:
        ptr->next=ptr->next->next;
        free (temp) ;
        return debut;}}
}

Noeud* insertion(noeud*debut,int pos;int _valeur){
Noeud *temp=debut;
int ctr=1,T;
Noeud *B=cree(_valeur);
T=taille(debut);
if(pos<=1||pos>=T+1){
    printf("erreur");
}
while (temp->next!=NULL ||pos<=ctr)
{
    ctr++;
    temp=temp->next;
}
if(temp->next==NULL){
    return ajouterF(debut);
}else {
    B->next=temp->next;
    temp->next=B;
}
return debut;
}


void main()
{
Noeud *debut = NULL;
Noeud *P = cree(10);
Noeud *G = cree(5);
Noeud *H = cree(55);

debut = P;
P->next = G;
G->next = H;
H->next = NULL;

printf("Affichage de la liste \n");
affiche(debut);
printf("Ajouter au debut\n");
debut = ajouterD(debut, 50);
affiche(debut);
printf(" Ajouter à la Fin\n");
debut = ajouterF(debut, 44);
affiche(debut);
printf("Recherche\n");
rechercher(debut, 55);
printf("la taille de la liste est %d\n", taille(debut));
printf("Insertion à une position\n");
debut = insertion(debut, 3, 555);
affiche(debut);
printf("Suppression au debut\n");
debut = suppressionD(debut);
affiche(debut);
printf("Suppression à la fin\n");
debut = suppressionF(debut);
affiche(debut);
printf("Suppression à une position\n");
debut = supp_posi(debut, 5);
affiche(debut);
printf("Modification au debut\n");
debut = modifierD(debut, 22);
affiche(debut);
printf("Modification à la fin\n");
debut = modifierF(debut, 25);
affiche(debut);
}









