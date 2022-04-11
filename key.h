/* this struct contains:
 * - an id, matches whit the code of the keyboard's key, for example, key "a" have code 30, so the index of the key.id == 30 is the "a" 
 * - a string, once find the correct id, use that for take the translation of the code, the index 0 have id == 30, o key.ch[0] == "a"
 * - len, this int points the lenght of the string, the "a" has len == 2, the " ENTER " has len == 8
 *
 * the initialize_keys function use malloc for insert all the data of the keyboard in the struct
 */


typedef struct keys{
    int id[48]; /* quando aumenti il numero di stringhe ricordati di aumentare anche il size dell'array! */
    char **ch;
    int len[48];
} keys;

keys *initialize_keys();
