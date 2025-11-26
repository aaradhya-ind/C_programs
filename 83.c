// Q133 (Enum): Traffic lights enum and print messages
#include <stdio.h>
enum TrafficLight {RED, YELLOW, GREEN};
int main() {
    enum TrafficLight t;
    for(t=RED; t<=GREEN; t++){
        switch(t){
            case RED: printf("Stop\n"); break;
            case YELLOW: printf("Wait\n"); break;
            case GREEN: printf("Go\n"); break;
        }
    }
    return 0;
}
