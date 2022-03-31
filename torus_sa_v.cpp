// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on: March 30 2022
// This program calculates the surface area and volume of a torus

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::string;


int main() {
    float majRadius, minRadius, surfaceArea, volume;
    cout << "Enter the Major Radius (the distance from the center of the tube to the center of the torus) ";
    cin >> majRadius;
    cout << "Enter the Minor Radius (the radius of the tube) ";
    cin >> minRadius;
    if (majRadius > minRadius){
        cout << "This torus is a ring torus\n";
        surfaceArea = 4 * pow(M_PI, 2) * minRadius * majRadius;
        volume = 2 * pow(M_PI, 2) * pow(minRadius, 2) * majRadius;
        cout << "The volume is "<< volume <<" and the surface area is "<< surfaceArea<< "\n";
    }else if (majRadius == minRadius){
        cout << "This torus is a horn torus\n";
        surfaceArea = 4 * pow(M_PI, 2) * minRadius * majRadius;
        volume = 2 * pow(M_PI, 2) * pow(minRadius, 2) * majRadius;
        cout << "The volume is "<< volume <<" and the surface area is "<< surfaceArea<< "\n";
    }else if (majRadius < minRadius){
        cout << "This torus is a spindle torus\n";
        surfaceArea = 4 * pow(M_PI, 2) * pow(minRadius, 2);
        volume = (2 / 3) * M_PI * (2 * pow(minRadius, 2) + pow(majRadius, 2)) * sqrt(pow(minRadius, 2) - pow(majRadius, 2)) + M_PI * pow(minRadius, 2) * majRadius * ( M_PI + 2 * atan(majRadius / sqrt(pow(minRadius, 2) - pow(majRadius, 2))));
        cout << "The volume is "<< volume <<" and the surface area is "<< surfaceArea<< "\n";
    }
    string tryAgain;
    cout << "would you like to try again? ";
    cin >> tryAgain;
    if (tryAgain == "y"
        || tryAgain == "Y"
        || tryAgain == "yes"
        || tryAgain == "YES") {
        main();
    } else if (tryAgain == "n"
        || tryAgain == "N"
        || tryAgain == "no"
        || tryAgain == "NO") {
        exit(1);
    }
    return 0;
}
