#include <stdio.h>
#include <stdlib.h>


#include "Stack.h"

typedef int Item;

#define a if
#define b while
#define c for
#define d return
#define e int
#define f bool
#define g void
#define h struct
#define i typedef
#define j sizeof
#define k Stack
#define l Item
#define m malloc
#define n free
#define o fprintf
#define p exit
#define q stderr
#define r FILE
#define s "error: out of memory\n"
#define t "error: stack is empty\n"

i h u{l u;h u*v;}*u;h stack{u u;e v;};k StackNew(){k v=m(j*v);a(!v){o(q,
s);p(1);}v->u=0;v->v=0;d v;}g StackFree(k v){u w=v->u;b(w){u x=w;w=w->v;
n(x);}n(v);}g StackPush(k v,l it){u w=m(j*w);a(!w){o(q,s);p(1);}w->u=it;
w->v=v->u;v->u=w;v->v++;}l StackPop(k v){a(!v->v){o(q,t);p(1);}u w=v->u;
l x=w->u;v->u=w->v;n(w);v->v--;d x;}e StackSize(k v){d v->v;}
