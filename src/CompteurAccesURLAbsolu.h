/*************************************************************************
CompteurAccesURLAbsolu  -  description
-------------------
début                : 16/01/2020
copyright            : (C) 2020 par Charles Javerliat et Fabien Narboux
e-mail               : charles.javerliat@insa-lyon.fr et fabien.narboux@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <CompteurAccesURLAbsolu> (fichier CompteurAccesURLAbsolu.h) ----------------
#if ! defined ( COMPTEUR_ACCES_URL_ABSOLU_H )
#define COMPTEUR_ACCES_URL_ABSOLU_H

//--------------------------------------------------- Interfaces utilisées

#include <iostream>
#include <string>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CompteurAccesURLAbsolu>
//
// La classe CompteurAccesURLAbsolu associe une url et son nombre d'accès
//
//------------------------------------------------------------------------

class CompteurAccesURLAbsolu
{
  //----------------------------------------------------------------- PUBLIC

public:

  //----------------------------------------------------- Méthodes publiques

  void incrementer();
  // Contrat :
  // - Incrémente le nombre d'accès de la classe

  //------------------------------------------------- Surcharge d'opérateurs

  friend std::ostream & operator<<( std::ostream & os, const CompteurAccesURLAbsolu & cpt );
  // Contrat :
  // - Surcharge de l'opérateur <<
  // - Format d'affichage demandé par le TP

  static bool comparer(const CompteurAccesURLAbsolu* c1, const CompteurAccesURLAbsolu* c2);
  // Mode d'emploi : méthode statique, peut être appelée sans instanciation
  //
  // Contrat :
  // - Compare 2 CompteurAccesURLAbsolu en fonction de leur nombre d'accès puis de leur url si égalité

  //-------------------------------------------- Constructeurs - destructeur

  CompteurAccesURLAbsolu (const std::string & URL);
  // Contrat :
  // - Construit un CompteurAccesURLAbsolu depuis une url, le nombre d'accès est initialisé à 0

  //------------------------------------------------------------------ PRIVE

protected:
  //----------------------------------------------------- Méthodes protégées

  //----------------------------------------------------- Attributs protégés

  std::string url;
  unsigned int nbAcces;

};

//-------------------------------- Autres définitions dépendantes de <CompteurAccesURLAbsolu>

#endif // COMPTEUR_ACCES_URL_ABSOLU_H
