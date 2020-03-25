/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: Chris
 *
 * Created on February 13, 2019, 9:12 PM
 */

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H

#include"BubbleSortTemplate.h"


class BubbleSortDecreasing: public BubbleSortTemplate
{
    public:
        bool needSwap(SortableVector* sv, int i, int j){return sv->smaller(i,j);}
};
#endif /* BUBBLESORTDECREASING_H */

