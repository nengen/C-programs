//
//  frontend.h
//  SnakeGame
//
//  Created by Nils-erik Engen on 07.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#ifndef frontend_h
#define frontend_h

#include <stdio.h>
#include <ncurses.h>
enum Direction getNextMove(enum Direction previous);
void displayPoints(List* snake, const chtype symbol);

#endif /* frontend_h */
