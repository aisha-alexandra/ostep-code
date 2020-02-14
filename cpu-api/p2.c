#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int
main(int argc, char *argv[])
{
    printf("HHHHHhello world (pid:%d)\n", (int) getpid());
    int rc, rc2,rc3,rc4;
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else{
        rc=fork();
        if (rc == 0) {
            sleep(2);
        // child (new process)
        printf("hello, I am a second child (pid:%d)\n", (int) getpid());
	//sleep(1);
        }
        else{
            rc2=fork();
            if(rc2==0){
                sleep(1);
                printf("hello, I am child (pid:%d)\n", (int) getpid());
	//sleep(2);
            }
            else{
                rc3=fork();
                if(rc3==0){
                    sleep(3);
                    printf("hello, I am a third child (pid:%d)\n", (int) getpid());
                }
                else{
                    rc4=fork();
                    if(rc4==0){
                        sleep(4);
                        printf("hello, I am a fourth child (pid:%d)\n", (int) getpid());
                    }
                        
            else{
                sleep(5);
                int wc = wait(NULL);
        printf("hello, I am parent of %d (wc:%d) (pid:%d)\n",
	       rc,wc, (int) getpid());
    }
    return 0;
        }
    }
}
}
}

    
    
    

