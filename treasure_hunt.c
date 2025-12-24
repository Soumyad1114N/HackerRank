#include <stdio.h>

int main() {
    int start,swamp,bridge,maze,vault,final;
    scanf("%i",&start);
    if (start==1) {
        printf("Player chooses the Left path.\n");
        scanf("%i",&swamp);
        if(swamp==1) {
            printf("Poor choice, Game Over!\n");
        }
        else if(swamp==2){
            printf("Player found a bridge.\n");
            scanf("%i",&bridge);
            if (bridge==1) {
                printf("Player crosses the bridge safely.\n");
                scanf("%i",&final);
                if (final==1) {
                    printf("All that glitters is not gold, Game Over!\n");
                }
                else if(final==2) {
                    printf("All your efforts were for nothing, Game Over!\n");
                }
                else if(final==3) {
                    printf( "Congratulations!! You won the treasure.\n");
                }
            }
            else if (bridge==2) {
                printf("Poor luck, Game Over!\n");
            }
        }
    }
    else if(start==2) {
        printf("Player chooses the Middle path.\n");
        scanf("%i",&maze);
        if (maze==582) {
            printf("Player solved the puzzle.\n");
            scanf("%i",&final);
            if (final==1) {
                printf("All that glitters is not gold, Game Over!\n");
            }
            else if(final==2) {
                printf("All your efforts were for nothing, Game Over!\n");
            }
            else if(final==3) {
                printf( "Congratulations!! You won the treasure.\n");
            }
        }
        else {
            printf("Foolish player, Game Over!\n");
        }
    }
    else if(start==3) {
        printf("Player chooses the Right path.\n");
        scanf("%i",&vault);
        if (vault==30) {
            printf("Player solved the puzzle.\n");
            scanf("%i",&final);
            if (final==1) {
                printf("All that glitters is not gold, Game Over!\n");
            }
            else if (final==2) {
                printf("All your efforts were for nothing, Game Over!\n");
            }
            else if (final==3) {
                printf( "Congratulations!! You won the treasure.\n");
            }
        }
        else {
            printf("Foolish player, Game Over!\n");
        }
    }
    return 0;
}