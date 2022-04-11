#include <stdlib.h>
#include "./key.h"

keys *initialize_keys(){
    int i;
    keys *key = (keys *) malloc(sizeof(keys));

    key -> ch = (char **) malloc((sizeof(char) * 2 * 39) + (sizeof(char) * 7 * 3) + (sizeof(char) * 6 * 3) + (sizeof(char) * 8 * 2) + (sizeof(char) * 9 * 3) + (sizeof(char) * 12));

    for(i = 0; i < 48; i++){
        switch(i){
            case 0: key -> id[i] = 30; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "a"; key -> len[i] = 2; break;
            case 1: key -> id[i] = 48; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "b"; key -> len[i] = 2; break;
            case 2: key -> id[i] = 46; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "c"; key -> len[i] = 2; break;
            case 3: key -> id[i] = 32; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "d"; key -> len[i] = 2; break;
            case 4: key -> id[i] = 18; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "e"; key -> len[i] = 2; break;
            case 5: key -> id[i] = 33; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "f"; key -> len[i] = 2; break;
            case 6: key -> id[i] = 34; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "g"; key -> len[i] = 2; break;
            case 7: key -> id[i] = 35; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "h"; key -> len[i] = 2; break;
            case 8: key -> id[i] = 23; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "i"; key -> len[i] = 2; break;
            case 9: key -> id[i] = 38; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "l"; key -> len[i] = 2; break;
            case 10: key -> id[i] = 50; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "m"; key -> len[i] = 2; break;
            case 11: key -> id[i] = 49; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "n"; key -> len[i] = 2; break;
            case 12: key -> id[i] = 24; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "o"; key -> len[i] = 2; break;
            case 13: key -> id[i] = 25; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "p"; key -> len[i] = 2; break;
            case 14: key -> id[i] = 16; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "q"; key -> len[i] = 2; break;
            case 15: key -> id[i] = 19; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "r"; key -> len[i] = 2; break;
            case 16: key -> id[i] = 31; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "s"; key -> len[i] = 2; break;
            case 17: key -> id[i] = 20; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "t"; key -> len[i] = 2; break;
            case 18: key -> id[i] = 22; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "u"; key -> len[i] = 2; break;
            case 19: key -> id[i] = 47; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "v"; key -> len[i] = 2; break;
            case 20: key -> id[i] = 44; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "z"; key -> len[i] = 2; break;
            case 21: key -> id[i] = 17; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "w"; key -> len[i] = 2; break;
            case 22: key -> id[i] = 21; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "y"; key -> len[i] = 2; break;
            case 23: key -> id[i] = 45; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "x"; key -> len[i] = 2; break;
            case 24: key -> id[i] = 37; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "k"; key -> len[i] = 2; break;
            case 25: key -> id[i] = 36; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "j"; key -> len[i] = 2; break;
            case 26: key -> id[i] = 28; key -> ch[i] = (char *) malloc(sizeof(char) * 8); key -> ch[i] = " ENTER "; key -> len[i] = 8; break;
            case 27: key -> id[i] = 2; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "1"; key -> len[i] = 2; break;
            case 28: key -> id[i] = 3; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "2"; key -> len[i] = 2; break;
            case 29: key -> id[i] = 4; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "3"; key -> len[i] = 2; break;
            case 30: key -> id[i] = 5; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "4"; key -> len[i] = 2; break;
            case 31: key -> id[i] = 6; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "5"; key -> len[i] = 2; break;
            case 32: key -> id[i] = 7; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "6"; key -> len[i] = 2; break;
            case 33: key -> id[i] = 8; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "7"; key -> len[i] = 2; break;
            case 34: key -> id[i] = 9; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "8"; key -> len[i] = 2; break;
            case 35: key -> id[i] = 10; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "9"; key -> len[i] = 2; break;
            case 36: key -> id[i] = 11; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "0"; key -> len[i] = 2; break;
            case 37: key -> id[i] = 42; key -> ch[i] = (char *) malloc(sizeof(char) * 9); key -> ch[i] = " MAIUSC "; key -> len[i] = 9; break;
            case 38: key -> id[i] = 57; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = " "; key -> len[i] = 2; break; 
            case 39: key -> id[i] = 14; key -> ch[i] = (char *) malloc(sizeof(char) * 6); key -> ch[i] = " DEL "; key -> len[i] = 5; break;
            case 40: key -> id[i] = 58; key -> ch[i] = (char *) malloc(sizeof(char) * 12); key -> ch[i] = " CAPS LOCK "; key -> len[i] = 11; break; 
            case 41: key -> id[i] = 29; key -> ch[i] = (char *) malloc(sizeof(char) * 7); key -> ch[i] = " CTRL "; key -> len[i] = 6; break;
            case 42: key -> id[i] = 54; key -> ch[i] = (char *) malloc(sizeof(char) * 9); key -> ch[i] = " MAIUSC "; key -> len[i] = 9; break; 
            case 43: key -> id[i] = 111; key -> ch[i] = (char *) malloc(sizeof(char) * 7); key -> ch[i] = " CANC "; key -> len[i] = 6; break;
            case 44: key -> id[i] = 52; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = "."; key -> len[i] = 2; break;
            case 45: key -> id[i] = 51; key -> ch[i] = (char *) malloc(sizeof(char) * 2); key -> ch[i] = ","; key -> len[i] = 2; break;
            case 46: key -> id[i] = 100; key -> ch[i] = (char *) malloc(sizeof(char) * 9); key -> ch[i] = " ALT GR "; key -> len[i] = 8; break;
            case 47: key -> id[i] = 97; key -> ch[i] = (char *) malloc(sizeof(char) * 7); key -> ch[i] = " CTRL "; key -> len[i] = 6; break;
        } 
    }

    return key;
}
