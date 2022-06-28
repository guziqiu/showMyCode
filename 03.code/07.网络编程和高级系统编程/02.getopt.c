#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int opt;
    int a_flag = 0;
    int l_flag = 0;
    while ((opt = getopt(argc, argv, "alm:o::")) != -1) {
        switch (opt) {
        case 'a':
            a_flag = 1;
            break;
        case 'l':
            l_flag++;
            break;
        case 'm':
            printf("msg = %s \n", optarg);
            break;
        case 'o':
            printf("opt = %s\n", optarg);
            break;
        default:
            fprintf(stderr, "Usage : %s -al\n", argv[0]);
            exit(-1);
        }
    }
    printf("optind = %d \noptopt = %d\n", optind, optopt);



    return 0;
}

