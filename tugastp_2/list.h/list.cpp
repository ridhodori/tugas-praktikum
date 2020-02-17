#include <iostream>
#include "list.h"

using namespace std;
void createlist(List &L){
first(L)=NULL;
}
address allocate(infotype x){
address p = new elmlist;
info(p) = x;
next(p) = NULL;
return p;
}
void insertFirst(List &L, address P){
    next (P)= first(L);
    first (L)= P;
}
void inserLast(List &L, address &P){
    if(first(L)==NULL){
        first(L)=P;
    }else{
       address(R)=first(L);
       while(next(R)!=NULL){
        R=next(R);
       }
       next(R)= P;
    }
}
void inserAfter(List&L,infotype X, address &P){
    address(R)=first(L);
    while(info(next(R))!= X){
        next(R)=P;
    }
}
void printInfo(List L){
    address p = first(L);
    while(p!=NULL){
        cout << info(p)<<", ";
        p = next(p);
    }
    cout<<endl;

}
void deleteFirst(List &L, address &P){
    if(first(L)!=NULL){
        P = first(L);
        first(L) = next(P);
        next(P)=NULL;
    }
}
void deleteLast(List &L, address &P){
    address R = first(L);

        while(next(R)!=NULL){
            R = next(R);
            next(R)=P;
        }
    delete P;

}
void deleteAfter(List &L,infotype X, address &P){
    address R = first(L);
    while(info(next(R))!= X){
        next(R)= P;

    }
    next(R)= next(P):
        next(P)= NULL
}


