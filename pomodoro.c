#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>



void Pomodoro(int option);
void beep();
void time(int total);

int main(){
    int op =0;
    printf("1 - Pomodoro 25min\n");
    printf("2 - Pomodoro 30min\n");
    printf("3 - Short Break 5min\n");
    printf("4 - Long Break 15min\n");
    printf("option: ");
    scanf("%d", &op);

    Pomodoro(op);
}


void beep(){
    for(int i=0; i < 3; i++){
        system("play -n synth 1 sin 440");
        sleep(1);
    }
    main();
}


void Pomodoro(int option){
    int t = 0;
    switch(option){
        case 1:
            t = 1500;
        break;
        case 2:
            t = 1800;
        break;
        case 3:
            t = 300;
        break;
        case 4:
            t = 900;
        break;
        case 5:
            t = 10;
        break;
        default:
            main();
            break;
    }
    time(t);
}

void time(int total){
    int min, seconds;
    for(int i=total; i >= 0; i--){
        min = i/60;
        seconds = i%60;
        printf("\r%02d:%02d",min, seconds);
        fflush(stdout);
        sleep(1);
        
    }
    beep();
}