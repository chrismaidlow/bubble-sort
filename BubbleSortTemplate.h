/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortTemplate.h
 * Author: Chris
 *
 * Created on February 13, 2019, 9:03 PM
 */

#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H

#include "SortableVector.h"

class BubbleSortTemplate{
public:
    
    virtual bool needSwap(SortableVector* sv, int i, int j) = 0;
    void sort(SortableVector*);
};

#endif /* BUBBLESORTTEMPLATE_H */

