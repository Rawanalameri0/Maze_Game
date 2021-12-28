#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "player.h"

#define SCREENH 600
#define SCREENW 600
#define BRICKH 32
#define BRICKW 32

typedef struct walls_s
{
    SDL_Rect bricks;
    SDL_Rect Src;
    SDL_Texture* texture_joueur;
    SDL_Texture* texture_brick;
}walls_t;

walls_t* allocation_Walls();
int init_sdl(SDL_Window **window, SDL_Renderer **renderer, int width, int height);
SDL_Texture* charger_image (const char* nomfichier, SDL_Renderer* renderer);
void apply_texture(walls_t* walls,SDL_Renderer* ecran);
void init_wall(walls_t* walls,int px,int py,int postx,int posty);
void affichage_bricks(SDL_Renderer* ecran,walls_t* walls,char** map,int nbc,int nbl);
void handle_events(SDL_Event *event,player_t* player,char** map);
void clean_walls(walls_t* walls);
#endif