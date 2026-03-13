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










//Fonctions réalisées par l'étudiant 3 :

<<<<<<< Updated upstream
//fonction qui verifie si il est pair ou divisible par 8
bool estImpair(int nb) {
    // Vérifie si n est impair ou divisible par 8
    return (nb % 2 != 0) || (nb % 8 == 0);
}

int main() {
=======

bool estImpair(int nb) {
    // Vérifie si n est impair ou divisible par 8
    return (nb % 2 != 0) || (nb % 8 == 0);
>>>>>>> Stashed changes
    int nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    if (estImpair(nombre)) {
        cout << nombre << " est impair ou divisible par 8." << endl;
    } else {
        cout << nombre << " n'est ni impair ni divisible par 8." << endl;
    }

    return 0;
}

// Fonction qui retourne la moyenne de trois nombres
double moyenne(double nb1, double nb2, double nb3) {
    return (nb1 + nb2 + nb3) / 3.0;
<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
    double x, y, z;

    cout << "Entrez trois nombres : ";
    cin >> x >> y >> z;

    cout << "La moyenne est : " << moyenne(x, y, z) << endl;

    return 0;
}

// Fonction qui applique une réduction et ajoute la TVA de 5,5 %
double reduction(int prix, int reduc) {
    // Appliquer la réduction
    double prixReduit = prix * (1 - reduc / 100.0);
    
    // Appliquer la TVA de 5,5%
    double prixFinal = prixReduit * 1.055;
    
    return prixFinal;
<<<<<<< Updated upstream
	
=======

>>>>>>> Stashed changes
    double prix, reductionPourc;

    cout << "Entrez le prix : ";
    cin >> prix;

    cout << "Entrez le pourcentage de réduction : ";
    cin >> reductionPourc;

    cout << "Le prix final après réduction et TVA est : " 
         << reduction(prix, reductionPourc) << " €" << endl;

    return 0;
}

// Fonction qui retourne le nombre médian parmi trois nombres
int nombreMedian(int a, int b, int c) {
    if ((a >= b && a <= c) || (a >= c && a <= b))
        return a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        return b;
    else
        return c;
<<<<<<< Updated upstream
=======
	
>>>>>>> Stashed changes
    int x, y, z;
    cout << "Entrez trois nombres : ";
    cin >> x >> y >> z;

    cout << "Le nombre médian est : " << nombreMedian(x, y, z) << endl;

    return 0;
<<<<<<< Updated upstream
=======
}
>>>>>>> Stashed changes
}