#ifndef LIST_H
#define LIST_H
#include<iostream>
#include<memory>

template<typename T>
struct Node
{
   T data;
   Node *next;
};
class List
{
   private:
    Node *head;
   public:
    void add(int data);
    void display();
};
