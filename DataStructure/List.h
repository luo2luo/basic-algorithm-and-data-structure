//
// Created by Luojia yan on 2021-03-03.
//
#include <iostream>
using namespace std;
#ifndef BASIC_ALGORITHM_AND_DATA_STRUCTURE_LIST_H
#define BASIC_ALGORITHM_AND_DATA_STRUCTURE_LIST_H

class Node {
public:
    int data;
    Node *next;
    Node(int da = 0, Node *p = NULL) {
        this->data = da;
        this->next = p;
    }
};

class List {
private:
    Node *head, *tail;
    int position;
public:
    List() { head = tail = NULL; };
    ~List() {
        delete head;
        delete tail;
    };
    void print();
    void Insert(int da = 0);
    void Delete(int da = 0);
    void Search(int da = 0);
    int getValueAt(int position);
    void setValueAt(int position, int da);
};







#endif //BASIC_ALGORITHM_AND_DATA_STRUCTURE_LIST_H
