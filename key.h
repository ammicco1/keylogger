typedef struct keys{
    int id[48]; /* quando aumenti il numero di stringhe ricordati di aumentare anche il size dell'array! */
    char **ch;
} keys;

keys *initialize_keys();
