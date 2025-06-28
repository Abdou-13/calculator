int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mult(int a,int b){
    return a*b;
}

int divE (int a,int b){
    return a/b;
}

float divR(int a,int b){
    return (float)a/b;
}

int mod(int a,int b){
    return a%b;
}

void menu(){
 puts("*********MENU*********");
 puts("1:Addition");
 puts("2:Soustraction");
 puts("3:Division reel");
 puts("4:Division entier");
 puts("5:Multiplication");
 puts("6:Modulo");
 puts("7:Quitter");
 puts("+++++++++++++++++++++++++++\n");
}

void principal(){
    while(1){
    int choice,a,b;
    menu();
    printf("Faites votre choix : ");
    scanf("%d",&choice);
    if(choice == 7 ){
        puts("AS Tala Vista Baby");
        break;
    }
    system("cls");
    printf("Saisir la premiere valeur : ");
    scanf("%d",&a);
    printf(" Saisir la deuxieme valeur : ");
    scanf("%d",&b);
    switch(choice)
    {
        case 1:
            printf("resultat de %d + %d = %d",a,b,add(a,b));
            break;
        case 2:
            printf("resultat de %d * %d = %d",a,b,sub(a,b));
            break;
        case 3:
             (b == 0)?puts("on peut pas diviser par Zero"):printf("resultat de %d / %d = %.2f",a,b,divR(a,b));
            break;
        case 4:
            (b == 0)?puts("on peut pas diviser par Zero"):printf("resultat de %d / %d = %d",a,b,divE(a,b));
            break;
        case 5:
            printf("resultat de %d * %d = %d",a,b,mult(a,b));
            break;
        case 6:
            printf("resultat de %d %% %d = %d",a,b,mod(a,b));
            break;
        case 7:
             break;
        default:
            puts("choix incorrecte ");

    }
     puts("");
     system("pause");
      system("cls");
    }
}
