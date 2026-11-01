#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    FILE *pFile = fopen("squawks.txt", "r");
    

    char hledany_kod[4];

    printf("zadejte kod!\n");
    fgets(hledany_kod, sizeof(hledany_kod), stdin);
    hledany_kod[sizeof(hledany_kod) - 1] = '\0';


    
    
    char buffer[1024] = "0";

    while(fgets(buffer, sizeof(buffer), pFile) != NULL){
        char cislo[4] = "";
        
        for(int i = 0; i < strlen(buffer); i++){
            if(buffer[i] >= '0' && '9' >= buffer[i]){
                cislo[i] = buffer[i];
            }

    
            
            if ((strcmp(cislo, hledany_kod) == 0)){
                printf("%s", buffer);
                
            }
        }
    }


    fclose(pFile);
    return 0;
}