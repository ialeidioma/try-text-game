	/*variables*/	
	
    int switch_con,arena_con,e_count,arena_exit,shop_con,bar_con,buy_con,armour_con,wp_con,s_p_con,l_p_con,roger_con,ban_con,alcohol_con,player_age,a,day_con,quest_con,reward;
	double hp,e,xp,lv,dmg,edmg,heal,xpo,xp_multi,maxhp,gold,armour_eq,atck_up,wp_eq;
    double i,j;
    char buffer[SIZE], player_name[SIZE];
	char * pch;
    pch=player_name;
    
    srand(time(NULL));
    i=1.;
    hp=50.;
    xp=0.;
    xpo=6.;
    lv=0.;
    j=1.;
    e_count=0;
    xp_multi=1.5;
    maxhp=60.;
    gold=0.;
    armour_eq=0.;
    atck_up=0.;
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
    

