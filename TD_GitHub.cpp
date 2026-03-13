//Fonctions réalisées par l'étudiant 1 :

//Fonction qui permet de savoir si une personne est majeur ou non
bool EstMajeur(int age);
{
	if(age>= 18)
		return true;
	else 
		return false;
}
//Calcul des exposants sans pow
int exposant(int nbre, int exp);
{
	int resultat = 1;
	for(int i = 0; i < exp; i++)
	{
		resultat = resultat * nbre;
	}
	return resultat;
}
//calcul du TVA de 20%
float TVA(int prix);
{
	float resultat;
	
	if(prix >= 1000)
		resultat = prix + prix * 0.196;
	else
		resultat = prix + prix * 0.055;
	return resultat;
}
//retourne le plus grand nombre avec un tri 
int plusGrand(int a, int b, int c);
{
	int max = a;
	
	if(b > max)
		max = b;
	
	if (c > max)
		max = c;
	
	return max;
}

//Fonctions réalisées par l'étudiant 2 :
//Fonction permettant de savoir si un nombre est pair ou non
bool estPair(int nb) {
    return nb % 2 == 0;
}

//Fonction qui fait la somme des sommes
int sommeNombre(int nb) {
    int somme = 0;
    for (int i = 1; i <= nb; i++) {
        somme += i;
    }
    return somme;
}

//Calcul du salaire net
float salaireNet(int salaire) {
    return salaire * 0.88f; // Exemple : 12% de charges
}

//Renvoi le plus petit nombre
int plusPetit(int a, int b, int c) {
    int min = a;
    if (b < min){
		min = b;
	}
    if (c < min){
		min = c;
	}
    return min;
}










//Fonctions réalisées par l'étudiant 3 :
