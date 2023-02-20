#include <stdio.h>
//make a menu for what porn you wanna watch
const char *shid ="https://e621.net/posts?tags=order%%3Arandom+%s";
int main(void) {
    puts("You Degenerate");
    puts("\t1.Smothering");
    puts("\t2.Vore");
    puts("\t3.Size Difference");
    puts("\t4.Gynomorph");
    fputs("Enter number cunt(1-4 dumbass): ", stdout);
    char dumbass_input;
    char *smegma;
    scanf("%c",&dumbass_input);
    switch (dumbass_input)
    {
    case '1':
        smegma = "smothering";
        break;
    case '2':
        puts("ehhehehehehehehhehh");
        puts("\t1.Oral");
        puts("\t2.Anal");
        puts("\t3.Cock");
        puts("\t4.Unbirth");
        puts("\t5.Absorption"); 
        puts("\t6.Default Vore");
        fputs("More numbers faggot(1-5 idiot): ", stdout);
        scanf(" %c",&dumbass_input);
        switch (dumbass_input)
        {
        case '1':
            smegma = "oral_vore";
            break;
        case '2':
            smegma = "anal_vore";
            break;
        case '3':
            smegma = "cock_vore";
            break;
        case '4':
            smegma = "unbirth";
            break;
        case '5':
            smegma = "absorption_vore";
            break;
        default: 
            smegma = "vore";
            break;
        }
        break;
    case '3':
        smegma = "size_difference";
        break;
    case '4':
        smegma = "gynomorph";
        break;
    default:
        smegma = "meme";
        break;
    }
    printf(shid,smegma);
    return 0;
}