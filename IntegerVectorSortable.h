/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   IntegerVectorSortable.h
 * Author: Chris
 *
 * Created on February 13, 2019, 9:10 PM
 */

#ifndef INTEGERVECTORSORTABLE_H
#define INTEGERVECTORSORTABLE_H

#include <vector>
#include <iostream>
#include "SortableVector.h"

class IntegerVectorSortable: public SortableVector {
protected:
    vector <int> m_IntegerVector;
public:    
    virtual unsigned int getSize() const {return m_IntegerVector.size();}
    
    virtual bool smaller(int i, int j) const {
        if(getInteger(i) < getInteger(j))
            return true;
        else
            return false;
    }
    
    virtual void swap(int i, int j){
        int temp = m_IntegerVector[i];
        m_IntegerVector[i]=m_IntegerVector[j];
        m_IntegerVector[j]=temp;
    }
    
    virtual void print() const {
        for(int i=0; i<getSize(); i++)
            cout<<m_IntegerVector[i]<<"; "<<endl;
    }
    
    int getInteger(int i) const{return m_IntegerVector[i];}
    
    int insertInteger(int element) {m_IntegerVector.push_back(element);}
};

#endif /* INTEGERVECTORSORTABLE_H */

