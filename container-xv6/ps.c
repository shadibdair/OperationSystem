// Shadi Badir 
// When the 'ps' command is executed in xv6, it invokes the 'cps165()' function defined in user mode.

#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[]){
    cps165();
    exit(0);
}
