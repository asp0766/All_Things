// Striver Tree Series : -  ( 54 Videos )
// https://youtube.com/playlist?list=PLkjdNRgDmcc0Pom5erUBU4ZayeU9AyRRu&si=C1IijiTUgdmoe5nj

#include<iostream>
using namespace std; 

struct Node{
    int data ;
    struct Node *left;
    struct Node *right;

    Node( int val ){
        data = val ;
        left = right = NULL ;
    }
};

int main(){
    struct Node* root = new Node(1);

    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> right = new Node(5);


    return 0;
}


// Output : -
//     1
//     / \
//    2   3
//     \
//      5