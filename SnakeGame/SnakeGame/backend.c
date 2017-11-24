//
//  backend.c
//  SnakeGame
//
//  Created by Nils-erik Engen on 07.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#include "backend.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>





List* createCell(int x, int y){
    List* cell = malloc(sizeof(*cell));
    cell->x = x;
    cell->y = y;
    return cell;
}

Board* createBoard(List* snake, List* food, int xmax, int ymax){
    Board* board = malloc(sizeof(*board));
    board->snake = snake;
    board->food = food;
    board->xMax = xmax;
    board->yMax = ymax;
    return board;
}

List* createSnake(){
    List* a = createCell(2, 3);
    List* b = createCell(2,2);
    a->next = b;
    return a;
}

List* createRandomCell(int xmax, int ymax){
    return createCell(rand() % xmax, rand() % ymax);
}

bool isSamePlace(List* cell1, List* cell2){
    return cell1->x == cell2->x && cell1->y == cell2->y;
}

bool listContains(List* cell, List* list){
    List* l = list;
    while (list) {
        if (isSamePlace(list, cell)) {
            return true;
        }else{
            l = l->next;
        }
    }
    return false;
}

bool removeFromList(List* elt, List** list){
    List* currP, *prevP;
    for (currP = *list; currP != NULL; prevP = currP, currP = currP->next) {
        if (isSamePlace(elt, currP)) {
            if (prevP == NULL) {
                *list = currP->next;
            }else{
                prevP->next = currP->next;
            }
            free(currP);
            return true;
        }
    }
    return false;
}

void addNewFood(Board* board){
    List* newFood;
    do {
        newFood = createRandomCell(board->xMax, board->yMax);
    } while (listContains(newFood, board->food) || listContains(newFood, board->snake));
    newFood->next = board->food;
    board->food = newFood;
}

List* nextMove(Board* board, enum Direction dir) {
    List* snake = board->snake;
    int new_x = snake->x;
    int new_y = snake->y;
    switch(dir) {
        case UP:
            new_y = snake->y - 1;
            break;
        case DOWN:
            new_y = snake->y + 1;
            break;
        case LEFT:
            new_x = snake->x - 1;
            break;
        case RIGHT:
            new_x = snake->x + 1;
            break;
    }
    if (new_x < 0 || new_y < 0 || new_x >= board->xMax|| new_y >= board->yMax) {
        return NULL;
    } else {
        return createCell(new_x, new_y);
    }
}

enum Status move_snake(Board* board, enum Direction dir) {
    // Create a new beginning. Check boundaries.
    List* beginning = nextMove(board, dir);
    if (beginning == NULL) {
        return FAILURE;
    }
    
    // If we've gone backwards, don't do anything
    if (board->snake->next && isSamePlace(beginning, board->snake->next)) {
        beginning->next = NULL;
        free(beginning);
        return SUCCESS;
    }
    
    // Check for collisions
    if (listContains(beginning, board->snake)) {
        return FAILURE;
    }
    
    // Check for food
    if (listContains(beginning, board->food)) {
        // Attach the beginning to the rest of the snake;
        beginning->next = board->snake;
        board->snake = beginning;
        removeFromList(beginning, &(board->food));
        addNewFood(board);
        
        return SUCCESS;
    }
    
    // Attach the beginning to the rest of the snake
    beginning->next = board->snake;
    board->snake = beginning;
    
    
    // Cut off the end
    List* end = board->snake;
    while(end->next->next) {
        end = end->next;
    }
    free(end->next);
    end->next = NULL;
    
    return SUCCESS;
}




