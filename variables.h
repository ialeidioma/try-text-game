	/*variables*/

    int arena_con,e_count,arena_exit,bar_con,buy_con,armour_con,wp_con,s_p_con,l_p_con,roger_con,ban_con,alcohol_con,player_age,a,day_con,quest_con,reward,board_con;
	int day_lenght,quest_conditions,hp_brawl,dmg_brawl,e_dmg_brawl,e_hp_brawl,max_hp_brawl,heal_brawl,strenght,luck,charisma,intelligence,dexterity,stats_count;
	double hp,e_hp,xp,lv,dmg,e_dmg,heal,xpo,xp_multi,max_hp,gold,armour_eq,armour_atck_up,wp_eq;
    double i,j;
    char buffer[SIZE], player_name[SIZE],menu_con[SIZE],brawl_con[SIZE],stats_con[SIZE],player_class[SIZE],main_con[SIZE],temple_con[SIZE],shop_con[SIZE];
	char * pch, *clsel;
	char* file="..."; /*write path here, for "security reasons i had to remove it so you can't know where the already compiler version saves*/
	FILE * fp;
    pch=player_name;
    clsel=player_class;

    srand(time(NULL));
    i=1.;
    hp=50.;
    xp=0.;
    xpo=6.;
    lv=0.;
    j=1.;
    xp_multi=1.5;
    max_hp=60.;
    gold=0.;
    armour_eq=0.;
    armour_atck_up=0.;
    wp_eq=0.;
    armour_con=0;
    wp_con=0;
    s_p_con=0;
    l_p_con=0;
    roger_con=0;
    ban_con=0;
    alcohol_con=0;
    day_con=1;
	reward=0;
	board_con=0;
    day_lenght=150;
    quest_con=0;
    dmg_brawl=4;
    e_dmg_brawl=4;
    strenght=1;
    luck=1;
    charisma=1;
    intelligence=1;
    dexterity=1;
    max_hp_brawl=60;
    stats_count=10;
