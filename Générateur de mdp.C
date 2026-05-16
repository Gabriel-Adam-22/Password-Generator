#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Pwd_generator(int pwd_len, char pwd[]) {

    char caractere_list[95] = {
        'A','B','C','D','E','F','G','H','I','J','K','L','M',
        'N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
        'a','b','c','d','e','f','g','h','i','j','k','l','m',
        'n','o','p','q','r','s','t','u','v','w','x','y','z',
        ' ','!','"','#','$','%','&','\'','(',')','*','+',',',
        '-','.','/','0','1','2','3','4','5','6','7','8','9',
        ':',';','<','=','>','?','@','[','\\',']','^','_','`',
        '{','|','}','~'
    };
    
    int max_value = 95;

    
    for (int i = 0; i < pwd_len; i++) {

        int val = rand() % max_value;

        pwd[i] = caractere_list[val];

    }

    pwd[pwd_len] = '\0';
}

int main(void) {

    srand(time(NULL));

    int pwd_len;
    int PasswordIsOk = 1;

    printf("P");

    do {

    printf("assword length : ");
    scanf("%d", &pwd_len);

    char pwd[pwd_len + 1];

    Pwd_generator(pwd_len, pwd);

    printf("\n\nPassword : %s\n\n", pwd);

    printf("Are you satisfied with the password ?\n(Yes : 0 | No : 1)\n\t: ");
    scanf("%d", &PasswordIsOk);

    if (PasswordIsOk == 0) {
        printf("Good bye !");
    }
    else if (PasswordIsOk == 1) {
        printf("New p");
    }
    else {
        printf("Invalid input : Exiting program\n");
        PasswordIsOk = 0;
    }

    } while (PasswordIsOk == 1);
    


    return EXIT_SUCCESS;
}