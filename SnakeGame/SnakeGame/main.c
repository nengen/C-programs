//
//  main.c
//  SnakeGame
//
//  Created by Nils-erik Engen on 04.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//
#include "backend.h"
#include "frontend.h"
#include <ncurses.h>

int main() {
    initscr();
    noecho();
    cbreak();
    keypad(stdscr, true);
    curs_set(0);
    timeout(100);
    
    int xmax;
    int ymax;
    getmaxyx(stdscr, ymax, xmax);
    enum Direction dir = LEFT;
    
    Board* board = createBoard(createSnake(), NULL, xmax, ymax);
    int i;
    for (i = 0; i < 10; i++) {
        //addfood
    }
    
    while (true) {
        clear();
        displayPoints(board->snake, ACS_BLOCK);
        displayPoints(board->food, ACS_DIAMOND);
        refresh();
        dir = getNextMove(dir);
        enum Status status = moveSnake(board, dir);
        if(status == FAILURE) break;
    }
    endwin();
    
    return 0;
}
