#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void create(int argc, char *argv[]) {
    getopt(argc, argv, "n:");
    printf("n=%s\n", optarg);
    getopt(argc, argv, "v:");
    printf("v=%s\n", optarg);
}

void sync(int argc, char *argv[]) {
    printf("sync is not supportd yet\n");
}

void delete(int argc, char *argv[]) {
    printf("remove is not supported yet\n");
}

void help() {
    printf("help is not supported yet\n");
}

int main(int argc, char *argv[])
{
    int res = 0;

    switch (getopt(argc, argv, "csr")) {
        case 'c': create(argc, argv); break;
        case 's': sync(argc, argv); break;
        case 'r': delete(argc, argv); break;
        case 'h': help(); break;
        default : help(); exit(1);
    }
    
}