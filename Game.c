#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

#define BLOCK_SIZE 100

#pragma region structs
struct Player
{
    double hp, damage;
} player;

struct Enemy
{
    double hp, damage;
} enemy;
#pragma endregion structs

double Damage()
{
    srand(time(NULL));
    return rand() % 10 + 1;
}

bool PlayerStarts()
{
    srand(time(NULL));
    int randNum = rand() % 100 + 1;
    if (randNum >= 50)
        return false;
    return true;
}

int main(void)
{
    // Init
    bool pStart = PlayerStarts();
    char name[BLOCK_SIZE];
    printf("Please Enter Your Name!\n");
    scanf("%s", name);

    player.hp = 10;
    player.damage = Damage();

    enemy.hp = 5;
    enemy.damage = Damage();

    printf("%s" ,pStart ? "Yes : no");

    // printf("%.1lf", player.damage);
    return 0;
}