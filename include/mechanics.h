void PlayerMechanics(Player *player, SetGame *set, Background *background,Fanatico *fanatico, Plataform *platafoma);
void EnemyMechanics(Fanatico *fanatico, SetGame *set, Player *player);
void EnvironmentMechanic(Background *background,SetGame *set);
void InteractiveMechanics(Player *player, SetGame *set, Heart *life,GameScreen *currentScreen);
void setRec(Player *player,Fanatico *fanatico, Plataform * plataform, Heart *life);
void GameMechanics(Background *background,SetGame *set,Plataform *platafoma, Player *player, Heart *life, GameScreen *currentScreen, Fanatico *fanatico);
void TitleMechanics(GameScreen *currentScreen, Menu *menu, Music *music);
void MenuMechanics(GameScreen *currentScreen, Menu *menu);
void InfoMechanics(GameScreen *currentScreen, Menu *menu,Music *music);
void OverMechanics(GameScreen *currentScreen, Player *player, SetGame *set);
void OptionsMechanics(GameScreen *currentScreen, Menu *menu);
void SaveMechanics(GameScreen *currentScreen, Menu *menu);
void ExitMechanics(GameScreen *currentScreen, Menu *menu);
void WinMechanics(GameScreen *currentScreen);