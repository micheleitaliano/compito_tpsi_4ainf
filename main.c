#include <stdio.h>
#include "trace.h"
#include "math.h"
#include "pow.h"
#define BUF 10
#include "logger.h"

int operando1_[BUF]={0};
int operando2_[BUF]={0};
int risultato_[BUF]={0};
int operazione_[BUF]={'\0'};

int main(){
    #ifdef DEBUG
    TRACE ();
    #endif
    int i,u,n1,n1,som,dif,molt,div;
    printf("+somma\n-differenza\n*moltiplicazione\n/divisione\n^potenza\n#logger\n! ESCI");
    scanf("%d",& u);
    switch(u){
        case '+':
            int somma (int n1,int n2);
            printf("il risultato e' %d");
            break;
        case '-':
            int differenza (int n1,int n2);
            printf("il risultato e' %d");
            break;
        case '*'
            int moltiplicazione (int n1,int n2);
            printf("il risultato e' %d");
            break;
        case '/':
            int divisione (int n1,int n2);
            printf("il risultato e' %d");
            break;
        case '^':
            int potenza (int n1,int n2);
            printf("il risultato e' %d");
            break;
        case '#':
            int logger (int n1,int n2);
            printf("il risultato e' %d");
            break;
        case '!':
            printf("ciao");
            break;
    }
}