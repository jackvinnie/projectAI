/*
 *  Mr Pass.  Brain the size of a planet!
 *
 *  Proundly Created by Richard Buckland
 *  Share Freely Creative Commons SA-BY-NC 3.0. 
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Game.h"
#include "mechanicalTurk.h"

action decideAction (Game g) {
   action nextAction;
   int currentPlayer = getWhoseTurn(g);
   
   if (currentPlayer != NO_ONE ) {
      nextAction.actionCode = START_SPINOFF; //attempting to start a spinoff
      if (isLegalAction(g, nextAction) == FALSE) {
	 nextAction.actionCode = PASS; //If illegal move, then PASS
      }
   }
   
   return nextAction;
}
