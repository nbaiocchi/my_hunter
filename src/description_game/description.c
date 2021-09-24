/*
** EPITECH PROJECT, 2020
** usefull.c
** File description:
** t
*/

#include "../../include/prototype.h"

void my_print_description(v_var *a)
{
    my_putstr("\n       \\* My_Hunter by Noe Baiocchi */\n\n\n");
    my_putstr("hello !! Who is here ?\n\n");
    my_putstr("Oh sacha it's you !! Nice I have a mission for you !\n\n");
    my_putstr("Wait, what you don't recognize me ? It's me the \n");
    my_putstr("professor shen !\n\n");
    my_putstr("Anyway I really need your help for an important thing, \n");
    my_putstr("since few day, a lot of pidgey are attacking people in the\n");
    my_putstr("kanto natural park and it puts the population in danger !!\n");
    my_putstr("\n");
    my_putstr("Those pidgey are really agrssif and you'r the only one who \n");
    my_putstr("can catch them all !!\n\n");
    my_putstr("Be carefull, some people are saying that a malefic flying \n");
    my_putstr("pikachu were seen with the pidgey ...\n\n");
    my_second_description(a);
}

void my_second_description(v_var *a)
{
    my_putstr("Good luck !\n");
    my_putstr("ps : press escp to leave the game, T to restart a game\n");
    my_putstr("P to pause the game and Enter to unpause the game\n");
    my_putstr("                   ., \n");
    my_putstr("            , _.-','\n");
    my_putstr("          \"\"|\"    `\"\"\"\".,\n");
    my_putstr("         /'/       __.-'-\"/\n");
    my_putstr("        ','  _,--\"\"      '-._\n");
    my_putstr("    _...`...'.\"\"\"\"\"\".\\\"\"-----'\n");
    my_putstr(" ,-'          `-.) /  `.  \\\n");
    my_putstr("+---.\"-.    |     `.    .  \\\n");
    my_putstr("     \\  `.  |       \\   |   L\n");
    my_putstr("      `v  ,-j        , .'   |\n");
    my_putstr("     .'\\,' /        /,'      -._\n");
    my_putstr("    ,____.'        .            `-.\n");
    my_putstr("        |         /                `-.\n");
    my_putstr("       /          `.                  `-.\n");
    my_third_description(a);
}

void my_third_description(v_var *a)
{
    my_putstr("      /             `. |                 `.      ");
    my_putstr("            _.\n");
    my_putstr("     .                `|                 ,-.     ");
    my_putstr("        _.-\" .\n");
    my_putstr("    j                  |                 |  \\      ");
    my_putstr("   _.'    /\n");
    my_putstr("    .                  |               .'    \\     ,");
    my_putstr("-'      /\n");
    my_putstr("    |                  |            ,-.\\      \\  ");
    my_putstr(",'      _.-\n");
    my_putstr("    |                . '  `.       |   `      `v");
    my_putstr("'  _,.-\"/\n");
    my_putstr("    ||    \\          |  ` |(`'-`.,.j         \\ `");
    my_putstr(".-'----+---.\n");
    my_putstr("    |'|   |L    \\  | |   `|   \\'              L");
    my_putstr(" \\___      /\n");
    my_putstr("    ' L   |`     L | |     `.                 ");
    my_putstr("| j   `\"\"\"-'\n");
    my_fourth_description(a);
}

void my_fourth_description(v_var *a)
{
    my_putstr("    |                . '  `.       |   `      ");
    my_putstr("`v'  _,.-\"/\n");
    my_putstr("    ||    \\          |  ` |(`'-`.,.j         \\");
    my_putstr(" `.-'----+---.\n");
    my_putstr("    |'|   |L    \\  | |   `|   \\'              L ");
    my_putstr("\\___      /\n");
    my_putstr("    ' L   |`     L | |     `.                 | j ");
    my_putstr("  `\"\"\"-'\n");
    my_putstr("       `-'||\\    | ||j       `.       ._    ` '.\n");
    my_putstr("          `\\ '\"`^\"- '          `.       \\    |/|\n");
    my_putstr("            `._                  `-.     \\   Y |\n");
    my_putstr("    __,..-\"\"`..`._                  `-._  `\\ `.|\n");
    my_putstr("   +.....>+----.' \"\"----.........,--\"\"\" `--.'.'\n");
    my_putstr("       ,' _\\  ,..--.-\"' __>---'  |\n");
    my_putstr("      --\"\"  \"'  _.\" }<\"\"          `---\"\"`._\n");
    my_putstr("               /...\"  L__.+--   _,......'..'\n");
    my_putstr("                 /.-\"\"'/   \\ ,-'\n");
    my_putstr("                     .' ,-\"\"'\n");
    my_putstr("                    /.-' \n");
    destroy(a);
}