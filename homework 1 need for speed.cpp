#include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
    char red[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0 };
    char normal[] = { 0x1b, '[', '0', ';', '3', '9', 'm', 0 };
    float nombreKMavantarrive = 0;
    float vitesseCoureur1 = 0;
    float vitesseCoureur2 = 0;
    float differenceDeVitesseAvecCoureur1 = 0;
    float minuteParHeure = 60;
    float tempsAvantArriveCoureur1;
    float tempsAvantArriveCoureur2;
    float tempsEntreLesCoureurs = 0;

    std::cout << std::setprecision(2) << std::fixed;
    cout << "\b";


    cout <<endl << "Enter Toonces speed: ";
    cin >> vitesseCoureur1;
    cout << "Enter how faster is Gonzalez going: ";
    cin >> differenceDeVitesseAvecCoureur1;
    cout << "Enter how many km to the end of the road: ";
    cin >> nombreKMavantarrive;
     
    if (nombreKMavantarrive > 0 and vitesseCoureur1 > 0 and differenceDeVitesseAvecCoureur1 > 0) {
        
        tempsAvantArriveCoureur1 = (nombreKMavantarrive / vitesseCoureur1) * minuteParHeure;
        cout <<endl << "How many minutes will it take Toonces to go the last 10 km?: " << tempsAvantArriveCoureur1<<endl;
        
        tempsAvantArriveCoureur2 = (nombreKMavantarrive / (vitesseCoureur1 + differenceDeVitesseAvecCoureur1)) * minuteParHeure;
        cout << "How many minutes will it take Gonzalez to go the last 10 km?: " << tempsAvantArriveCoureur2<<endl;

        tempsEntreLesCoureurs = tempsAvantArriveCoureur1 - tempsAvantArriveCoureur2;
        cout << "How much time will speedy guy Gonzalez save compared to Toonces over that last 10 km stretch of the road?: " << tempsEntreLesCoureurs<<endl;
        
    }
    
    else {
     cout <<endl << red << "please put a value greater than zero." << normal << endl;
   
    }

    return 0;
}