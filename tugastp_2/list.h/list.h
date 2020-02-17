#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define next(L) L->next
#define info(p) p->info

using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
infotype info;
address next;
};
struct List{
address first;
};
void createlist(List &L);
address allocate(infotype x);
void insertFirst(List &L, address P);
void inserLast(List &L, address &P);
void inserAfter(List&L, address &P, infotype X);
void printInfo(List L);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address &P);

#endif // LIST_H_INCLUDED
