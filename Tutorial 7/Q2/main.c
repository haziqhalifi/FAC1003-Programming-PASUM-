#include <stdio.h>

int main()
{
    int dep,sub,unit;
    char prog;
    printf("L-Foundation in Life Sciences\nP-Foundation in Physical sciences\nMake your selection -->");
    scanf("%c",&prog);
    printf("Avaible Department\n1.Department of Mathematic\n2.Department of Science\nMake your selection -->");
    scanf("%d",&dep);
    switch(prog){
    case 'p':
    case 'P':switch(dep){
             case 1:printf("Avaible Units\n1.Mathematic\n2.Computer Science\nMake your selection -->");
                    scanf("%d",&unit);
                    switch(unit){
                    case 1:printf("Avaible Subjects\n1.Mathematic 1\n2.Mathematic 2\nMake your selection -->");
                            scanf("%d",&sub);
                                    switch(sub){
                                        case 1:printf("You choose Subject Mathematic 1");
                                        break;
                                        case 2:printf("You choose Subject Mathematic 2");
                                        break;}
                            break;
                            case 2:printf("Avaible Subjects\n1.Programming 1\n2.Programming 2\nMake your selection -->");
                                    scanf("%d",&sub);
                                    switch(sub){
                                        case 1:printf("You choose Subject Programming 1");
                                        break;
                                        case 2:printf("You choose Subject Programming 2");
                                        break;}
                                        break;}


             case 2:printf("Avaible Units\n1.Physics\n2.Chemistry\nMake your selection -->");
                    scanf("%d",&unit);
                         switch(unit){
                             case 1:printf("Avaible Subjects\n1.Physics 1\n2.Physics 2\nMake your selection -->");
                                    scanf("%d",&sub);
                                    switch(sub){
                                        case 1:printf("You choose Subject Physics 1");
                                        break;
                                        case 2:printf("You choose Subject Physics 2");
                                        break;}
                                    break;
                            case 2:printf("Avaible Subjects\n1.Chemistry 1\n2.Chemistry 2\nMake your selection -->");
                                    scanf("%d",&sub);
                                    switch(sub){
                                        case 1:printf("You choose Subject Chemistry 1");
                                        break;
                                        case 2:printf("You choose Subject Chemistry 2");
                                        break;}
                                    break;}}




    case 'l':
    case 'L':switch(dep){
            case 1:printf("Avaible Units\n1.Mathematic\nMake your selection -->");
                    scanf("%d",&unit);
                    switch(unit){
                        case 1:printf("Avaible Subjects\n1.Mathematic 1\n2.Mathematic 2\nMake your selection -->");
                                    scanf("%d",&sub);
                                    switch(sub){
                                        case 1:printf("You choose Subject Mathematic 1");
                                        break;
                                        case 2:printf("You choose Subject Mathematic 2");
                                        break;}
                                        break;}



            case 2:printf("Avaible units\n1.Physics\n2.Chemistry\n3.Biology\nMake your selection -->");
                    scanf("%d",&unit);
                    switch(unit){
                        case 1:printf("Avaible Subjects\n1.Physics 1\n2.Physics 2\nMake your selection -->");
                                scanf("%d",&sub);
                                switch(sub){
                                    case 1:printf("You choose Subject Physics 1");
                                    break;
                                    case 2:printf("You choose Subject Physics 2");
                                    break;}
                                    break;
                        case 2:printf("Avaible Subjects\n1.Chemistry 1\n2.Chemistry 2\nMake your selection -->");
                                scanf("%d",&sub);
                                switch(sub){
                                    case 1:printf("You choose Subject Chemistry 1");
                                    break;
                                    case 2:printf("You choose Subject Chemistry 2");
                                    break;}
                                    break;

                        case 3:printf("Avaible Subjects\n1.Biology 1\n2.Biology 2\nMake your selection -->");
                               scanf("%d",&sub);
                                switch(sub){
                                    case 1:printf("You choose Subject Biology 1");
                                    break;
                                    case 2:printf("You choose Subject Biology 2");
                                    break;}
                                    break;}


}}}


