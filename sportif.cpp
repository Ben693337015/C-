#include <iostream>
#include <cstring>
 using namespace std;
//TPe POO:Le polymorphisme                          ABDOULMADJID BEN YAHYA  21A280FS

//Le polymorphisme est un
//Mécanisme qui consiste à définir des fonctions de même nom dans les classes de bases et
//les classes dérivées et qui répondent différemment à un même appel. Les classes dérivées
//héritent tous les membres publics et protégés de la classe mère.
class Sportif
{
 private:
 char Nom;
 float Taille;
  char Sexe;

 public :
 Sportif( char *N, float *T,char *S);

 // Getters

 char* getNom;
 float* getTaille;
 char*  getSexe;

 //setters

 void setSexe(char* S);
 void afficher();

 };
 Sportif::Sportif(char *N,float *T,char *S){
  strcpy(this->Nom,N);
  float(this->Taille, T);
  strcpy(this->Sexe, S);

 }
char* Sportif::getNom(){
 return this-> Nom;
 }
float* Sportif᷆::getTaille(){
 return this -> Taille;
 }
 char* Sportif::getSexe(){
 return this ->Sexe;
 }
 void Sportif::setSexe(char* S){
 strcpy(this->Sexe,S);
 }
 void Sportif::afficher(){
 cout <<"Nom:"<< this->Nom<<endl;
  cout <<"Taille:"<< this->Taille<<endl;
   cout <<"Sexe:"<< this->Sexe()<<endl;
   }

 class Joueure::class Sportif{
   char Club;
   char Poste;
   int Num;

   public::public Sportif
   Joueure(char Club,char Poste,int Num){
   this->Club = Club;
   this->Poste = Poste;
   this->Num;
   }



 int main(){
 Sportif("Etoo","1,70",Masculin)::Joueure("Barcelone","Attacque","09");
 sportif.afficher();
 return 0;
 }
