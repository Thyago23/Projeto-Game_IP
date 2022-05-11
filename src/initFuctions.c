#include "../include/game.h"

void InitVar(Background *background, SetGame *set,Player *player, Fanatico *fanatico, Goblin *goblin, Cogumelo *cogumelo, Olho *olho){

	//MECANICA DE ROLAGEM DE MAPA
	background->back = 0.0f;
	background->mid = 0.0f;
	background->fore = 0.0f;

	//MECANICAS EXTRAS
	set->map = 0;
	set->time = 0.0f;
	set->framesCounter = 0;
	set->steps = 0;
	set->gameOver = 0;

	//ATRIBUTOS DO PLAYER
	player->stop = 1;
	player->canJump = 0;
	player->vida = 3;
	player->direction = 0;
	player->esperaHit = 0;
	player->characterRadius = 125;
	player->characterPosition = (Vector2){240, 628}; //POSICAO INICIAL DO PLAYER

	//ATRIBUTOS DO FANATICO
	fanatico->damage = 3;
	fanatico->hp = 12;
	fanatico->direction = -1;
	fanatico->stop = 0;
	fanatico->enemyPosition = (Vector2){1350, 590}; //POSICAO INICIAL DO FANATICO

	//ATRIBUTOS DO GOBLIN
	goblin->damage = 2;
	goblin->hp = 4;
	goblin->direction = -1;
	goblin->stop = 0;
	goblin->enemyPosition = (Vector2){1350, 610}; //POSICAO INICIAL DO GOBLIN

	//ATRIBUTOS DO COGUMELO
	cogumelo->damage = 2;
	cogumelo->hp = 6;
	cogumelo->direction = -1;
	cogumelo->stop = 0;
	cogumelo->enemyPosition = (Vector2){1350, 610}; //POSICAO INICIAL DO COGUMELO

	//ATRIBUTOS DO OLHO
	olho->damage = 1;
	olho->hp = 2;
	olho->direction = -1;
	olho->stop = 0;
	olho->enemyPosition = (Vector2){1350, 180}; //POSICAO INICIAL DO OLHO
}