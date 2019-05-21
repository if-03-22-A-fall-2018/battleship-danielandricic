/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			battleship.c
 * Author(s):		Daniel Andricic
 * Due Date:		21.05.2019
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include "battleship.h"

static CellContent my[FIELDSIZE][FIELDSIZE];
static CellContent op[FIELDSIZE][FIELDSIZE];
CellContent myGuesses[FIELDSIZE][FIELDSIZE];
/**
*** The values assigned to each cell of the players, the opponents and the
*** guesses field. The player's and the opponent's field only hold the values
*** Water or Boat. The guesses field may also hold Unknowns. If a reference of
*** a shot or a guess (pair of row/col) is outside the field the value OutOfRange
*** is used.
*/
//typedef enum {Water, Boat, Unknown, OutOfRange} CellContent;

/**
*** Loads the two files battleship.my and battleship.op which hold the fields
*** of the players. The files hold a stream of 10 times 10 values of type
*** CellContent.
*/
void load_game()
{
     CellContent content;
     FILE *fptr;

     if ((fptr = fopen("battleship.my","rb")) == NULL){
         printf("Error! opening file");

         // Program exits if the file pointer returns NULL.
         exit(1);
     }

     for(int i = 0; i < FIELDSIZE; i++)
     {
       for (int j = 0; j < FIELDSIZE; j++)
       {
         fread(&my[i][j], sizeof(CellContent), 1, fptr); 
       }
     }
     fclose(fptr);
}

/**
*** @param row The row where we get the shot.
*** @param col The col where we get the shot.
*** @return The value of cell indicated by row and column of the own field (filled
*** with the values of battleship.my). If row/col point outside the field the
*** value OutOfRange is returned.
*/
CellContent get_shot(int row, int col)
{

  return Water;
}

/**
*** Sets the row and column of the my guesses table to the value held in the
*** opponents field. If this is a boat all surrounding cells are marked as water.
*** @param row The row where we place the shot
*** @param col The columnt where we place the shot.
*** @return True if target field is valid, i.e., inside the field, False otherwise.
*/
bool shoot(int row, int col)
{
  if(row > FIELDSIZE || col > FIELDSIZE)
  {
    return false;
  }
  return true;
}

/**
*** @param row The row where we want to get our own guess.
*** @param col The column where we want to get our own guess.
*** @return The value of the table with my guesses at row and column. If row/col
*** is outside the field OutOfRange is returned.
*/
CellContent get_my_guess(int row, int col)
{
  return Water;
}
