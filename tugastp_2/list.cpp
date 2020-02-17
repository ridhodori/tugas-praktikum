/*_.cpp
    Moh Naufal Mizan Saputro
    IF-43-12 / 1301190015
*/
#include <iostream>
#include "list.h"

using namespace std;

void createList(List &L){
    first(L) = NULL;

}
address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}
void insertFirst(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}
void printinfo(List L){
    address p = first(L);
    while(p != NULL){
        cout << info(p);
        p = next(p);
    }
    cout << endl;
}
void deleteFirst(List &L, address &P){
    if (first(L) != NULL){
        P = first(L);
        first(L) = next(P);

        next(P) = NULL;
    }
}
void insertLast(List &L, address &P){
    if (first(L) == NULL){
        first(L) = P;
    }else{
        address R = first(L);
        while (next(R) != NULL){
            R = next(R);
        }
        next(R) = P;
    }
}
void insertAfter(List &L, infotype X, address &J){
    address R = first(L);
    while (info(next(R)) != X){
        R = next(R);
    }
    next(J) = next(R);
    next(R) = J;
}
void deleteLast(List &L, address &P){
    address Q = first(L);
    while (next(Q) != NULL) {
        P = Q;
        Q = next(Q);
    }
    next(P) = NULL;
}
void deleteAfter(List &L,address &P){
    address R = first(L);
    while (next(R) != P) {
        R = next(R);
    }
    next(R) = next(P);
    next(P) = NULL;
}

