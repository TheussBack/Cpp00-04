/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrobin <hrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:31:08 by hrobin            #+#    #+#             */
/*   Updated: 2024/01/30 16:07:57 by hrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void reorder(const std::string& inputFileName, const std::string& s1, const std::string& s2) {
    // Ouvrir le fichier d'entrée
    std::ifstream inputFile(inputFileName.c_str());

    // Vérifier si le fichier d'entrée est ouvert avec succès
    if (!inputFile.is_open())
	{
        std::cerr << "Erreur lors de l'ouverture du fichier d'entrée : " << inputFileName << std::endl;
        return;
    }

    // Lire le contenu du fichier dans une chaîne
    std::ostringstream contentStream;
    contentStream << inputFile.rdbuf();
    std::string content = contentStream.str();

    // Fermer le fichier d'entrée
    inputFile.close();

    // Rechercher et remplacer toutes les occurrences de s1 par s2 dans la chaîne
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
	{
        content.replace(pos, s1.length(), s2);
        pos += s2.length(); // Éviter les boucles infinies pour les remplacements imbriqués
    }

    // Créer le nom du fichier de sortie
    std::string outputFileName = inputFileName + ".replace";

    // Ouvrir le fichier de sortie
    std::ofstream outputFile(outputFileName.c_str());

    // Vérifier si le fichier de sortie est ouvert avec succès
    if (!outputFile.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier de sortie : " << outputFileName << std::endl;
        return;
    }

    // Écrire le contenu modifié dans le fichier de sortie
    outputFile << content;

    // Fermer le fichier de sortie
    outputFile.close();

    std::cout << "Le remplacement a été effectué avec succès. Le résultat a été enregistré dans : " << outputFileName << std::endl;
}

int main(int argc, char* argv[]) {
    // Vérifier le nombre d'arguments
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    // Récupérer les arguments
    std::string inputFileName = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Appeler la fonction de remplacement
    reorder(inputFileName, s1, s2);

    return 0;
}
