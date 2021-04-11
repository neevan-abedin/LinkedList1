/******************************************************************************

Linked List by Nabhan Abedin
Student list program that uses linked lists
4.11.2021

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <cstring>
#include "node.h"
#include "student.h"

int main()
{
    //input
    char input[20];
    //create student
    Student* student = new Student;
    cout << "Input student's first name: " << endl;
    cin.get(student -> getFirst(), 20);
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Input student's last name: " << endl;
    cin.get(student -> getLast(), 20);
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Input student's ID: " << endl;
    cin >> *student -> getId();
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Input student's GPA: " << endl;
    cin >> *student -> getGpa();
    cin.clear();
    cin.ignore(100, '\n');
    
    //new student
    Student* student2 = new Student;
    cout << "Input student2's first name: " << endl;
    cin.get(student2 -> getFirst(), 20);
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Input student2's last name: " << endl;
    cin.get(student2 -> getLast(), 20);
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Input student2's ID: " << endl;
    cin >> *student2 -> getId();
    cin.clear();
    cin.ignore(100, '\n');
    cout << "Input student2's GPA: " << endl;
    cin >> *student2 -> getGpa();
    cin.clear();
    cin.ignore(100, '\n');
    
    //print 1st student
    cout << "Student #1: " << student -> getFirst() << " " << student -> getLast() << ", ";
    cout << "ID: " << *student -> getId() << ", GPA: " << *student -> getGpa() << endl;
    
    //print 2nd student
    cout << "Student #2: " << student2 -> getFirst() << " " << student2 -> getLast() << ", ";
    cout << "ID: " << *student2 -> getId() << ", GPA: " << *student2 -> getGpa() << endl;
    
    //setup nodes
    Node* firstNode = new Node(student);
    Node* secondNode = new Node(student2);
    firstNode -> setStudent(student);
    firstNode -> setNext(secondNode);
    secondNode -> setStudent(student2);
    //print nodes
    cout << "Nodes: " << endl;
    cout << firstNode -> getStudent() -> getFirst() << " " << firstNode -> getStudent() -> getLast() << endl;
    cout << firstNode -> getNext() -> getStudent() -> getFirst() << " " << firstNode -> getNext() -> getStudent() -> getLast() << endl;
    
    return 0;
}
