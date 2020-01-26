/*************************************************************************
GenerateurGraphe  -  description
-------------------
début                : 19/01/2020
copyright            : (C) 2020 par Charles Javerliat et Fabien Narboux
e-mail               : charles.javerliat@insa-lyon.fr et fabien.narboux@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <GenerateurGraphe> (fichier GenerateurGraphe.h) ----------------
#if ! defined ( GENERATEUR_GRAPHE_H )
#define GENERATEUR_GRAPHE_H

//--------------------------------------------------- Interfaces utilisées

#include <fstream>

#include "Types.h"

//------------------------------------------------------------------------
// Rôle de la classe <GenerateurGraphe>
//
// La classe GenerateurGraphe permet de générer un graphe (GraphViz) d'une structure URLsToCptAccesURLRelatif
//
//------------------------------------------------------------------------

class GenerateurGraphe
{

  //----------------------------------------------------------------- PUBLIC

public:
  //----------------------------------------------------- Méthodes publiques

  static void genererGraphe(const URLsToCptAccesURLRelatif & cpt, std::ostream & os = std::cout);
  // Mode d'emploi : méthode statique, peut être appelée sans instanciation
  //
  // Contrat :
  // - génère un graphe de cpt dans la sortie os

};

#endif // GENERATEUR_GRAPHE_H
