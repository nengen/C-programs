//
//  frontend.c
//  SnakeGame
//
//  Created by Nils-erik Engen on 07.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//


#include <ncurses.h>
#include "backend.h"
#include "frontend.h"

void displayPoints(List* snake, const chtype symbol){
    while (snake) {
        mvaddch(snake->y, snake->x, symbol);
        snake = snake->next;
    }
}

enum Direction getNextMove(enum Direction previous){
    
    int ch = getch();
    switch(ch){
        case KEY_LEFT:
            if(previous != RIGHT) return LEFT;
        case KEY_RIGHT:
            if(previous != LEFT) return RIGHT;
        case KEY_UP:
            if(previous != DOWN) return UP;
        case KEY_DOWN:
            if(previous != UP) return DOWN;
        default:
            return previous;
            
    }
    
}
