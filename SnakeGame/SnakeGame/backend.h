//
//  backend.h
//  SnakeGame
//
//  Created by Nils-erik Engen on 07.11.2017.
//  Copyright © 2017 NorseTechnology. All rights reserved.
//

#ifndef backend_h
#define backend_h

#include <stdbool.h>

enum Direction { UP, DOWN, LEFT, RIGHT };
enum Status { SUCCESS, FAILURE };
struct List {
    int x;
    int y;
    struct List* next;
};

typedef struct List List;

typedef struct {
    List* snake;
    List* food;
    int xMax;
    int yMax;
} Board;

List* createCell(int x, int y);
Board* createBoard(List* snake, List* food, int xmax, int ymax);
List* createSnake();
List* createRandomCell(int xmax, int ymax);
bool isSamePlace(List* cell1, List* cell2);
enum Status moveSnake(Board* board, enum Direction dir);
List* next_move(Board* board, enum Direction dir);
bool listContains(List* cell, List* list);
bool removeFromList(List* elt, List** list);
void addNewFood(Board* board);


#endif /* backend_h */
