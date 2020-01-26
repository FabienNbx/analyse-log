/*************************************************************************
LecteurLog  -  description
-------------------
début                : 19/01/2020
copyright            : (C) 2020 par Charles Javerliat et Fabien Narboux
e-mail               : charles.javerliat@insa-lyon.fr et fabien.narboux@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <LecteurLog> (fichier LecteurLog.h) ----------------
#if ! defined ( LECTEUR_LOG_H )
#define LECTEUR_LOG_H

//--------------------------------------------------- Interfaces utilisées

#include <fstream>

#include "Types.h"

//------------------------------------------------------------------------
// Rôle de la classe <LecteurLog>
//
// La classe LecteurLog permet de remplir des données de log dans une structure depuis un fichier et selon certaines options
//
//------------------------------------------------------------------------

class LecteurLog
{

  //----------------------------------------------------------------- PUBLIC

public:
  //----------------------------------------------------- Méthodes publiques

  static void lireLogs(const std::string & nomFichier,
    LogData & ld,
    const bool exclusionMedias,
    const short heure);
  // Mode d'emploi : méthode statique, peut être appelée sans instanciation
  //
  // Contrat :
  // - Remplit ld depuis les informations contenu dans le fichier de nom nomFichier
  // - option exclusionMedias pour exclure les medias des urls (exemple: images)
  // - option heure pour ne concerver que les urls consultées entre heure et heure+1

};

#endif // LECTEUR_LOG_H
