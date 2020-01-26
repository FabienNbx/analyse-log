/*************************************************************************
CompteurAccesURLRelatif  -  description
-------------------
début                : 16/01/2020
copyright            : (C) 2020 par Charles Javerliat et Fabien Narboux
e-mail               : charles.javerliat@insa-lyon.fr et fabien.narboux@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <CompteurAccesURLRelatif> (fichier CompteurAccesURLRelatif.h) ----------------
#if ! defined ( COMPTEUR_ACCES_URL_RELATIF_H )
#define COMPTEUR_ACCES_URL_RELATIF_H

//--------------------------------------------------- Interfaces utilisées

#include <string>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CompteurAccesURLRelatif>
//
// La classe CompteurAccesURLRelatif regroupe une url, son origine et le nombre d'accès à cette url depuis cette origine
//
//------------------------------------------------------------------------

class CompteurAccesURLRelatif
{
  //----------------------------------------------------------------- PUBLIC

public:

  //----------------------------------------------------- Méthodes publiques

  void incrementer();
  // Contrat :
  // - Incrémente le nombre d'accès de la classe

  unsigned int getNbAcces() const;

  const std::string & getOrigine() const;

  const std::string & getCible() const;

  //-------------------------------------------- Constructeurs - destructeur


  CompteurAccesURLRelatif (const std::string & origine, const std::string & cible);
  // Contrat :
  // - Construit un CompteurAccesURLRelatif depuis une origine et une cible/url avec un nombre d'accès initial à 0

  //------------------------------------------------------------------ PRIVE

protected:
  //----------------------------------------------------- Méthodes protégées

  //----------------------------------------------------- Attributs protégés

  std::string origine;
  std::string cible;
  unsigned int nbAcces;

};

//-------------------------------- Autres définitions dépendantes de <CompteurAccesURLRelatif>

#endif // COMPTEUR_ACCES_URL_RELATIF_H
