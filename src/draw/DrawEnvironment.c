#include "../../include/game.h"

void DrawEnvironment(Background background, SetGame set){ //CENARIOS DO FUNDO

	DrawTextureEx(background.mapa, (Vector2){ background.scroll, 20 }, 0.0f, 3.0f, WHITE);
	DrawTextureEx(background.mapa, (Vector2){ background.mapa.width*3 + background.scroll, - 20 }, 0.0f, 3.0f, WHITE);

	DrawRectangleLines(set.finalVet.x, set.finalVet.y, set.finalRec.width ,set.finalRec.height, BLANK);
}
