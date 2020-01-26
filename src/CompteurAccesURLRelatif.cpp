/*************************************************************************
CompteurAccesURLRelatif  -  description
-------------------
début                : 16/01/2020
copyright            : (C) 2020 par Charles Javerliat et Fabien Narboux
e-mail               : charles.javerliat@insa-lyon.fr et fabien.narboux@insa-lyon.fr
*************************************************************************/


//---------- Réalisation de la classe <CompteurAccesURLRelatif> (fichier CompteurAccesURLRelatif.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système

//------------------------------------------------------ Include personnel
#include "CompteurAccesURLRelatif.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void CompteurAccesURLRelatif::incrementer()
{
  ++nbAcces;
} //----- Fin de incrementer

unsigned int CompteurAccesURLRelatif::getNbAcces() const
{
  return nbAcces;
} //----- Fin de getNbAcces

const std::string & CompteurAccesURLRelatif::getOrigine() const
{
  return origine;
} //----- Fin de getOrigine

const std::string & CompteurAccesURLRelatif::getCible() const
{
  return cible;
} //----- Fin de getCible

//-------------------------------------------- Constructeurs - destructeur

CompteurAccesURLRelatif::CompteurAccesURLRelatif (const std::string & forigine, const std::string & fcible) : origine(forigine), cible(fcible), nbAcces(0)
{
  #ifdef MAP
  cout << "Appel au constructeur de <CompteurAccesURL>" << endl;
  #endif
} //----- Fin de CompteurAccesURL

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
