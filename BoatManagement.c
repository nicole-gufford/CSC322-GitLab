#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define MAX_BOAT_LENGTH 100.00
void * Malloc(size_t Size) {
    void * Memory;
    if ((Memory = malloc(Size)) == NULL) {
        perror("Cannot malloc");
        exit(EXIT_FAILURE);
    } else {
        return(Memory);
    }
}

void Free(void ** Memory) {
    free(*Memory);
    *Memory = NULL;
}
typedef char String[128]; 

typedef enum {slip,
    land,
    trailer,
    storage
    }BoatType;

typedef struct {
    String name; 
    float length; 
    BoatType BoatKind; 
    
}Boat; 


int addBoat(){
    
    
    
    
}

int removeBoat(){
    
    
    
}


int main(int argc, char* argv[])
{
    //checking num of args 
    if(argc != 2){
        printf("Usage: ./BoatManagement BoatData.csv"); 
        
        return (EXIT_FAILURE); 
        
    }else{
        //checking if arg is valid
        if(strcmp("BoatData.csv", argv[1])!=0){
        
            printf("Usage: ./BoatManagement BoatData.csv"); 
        
            return (EXIT_FAILURE); 
        }
        
        
    }
    
    FILE *InputFile; 
    FILE *OutputFile; 
    char choice; 
    
    //open file 
    if((InputFile = fopen(argv[1],"r")) == NULL && (OutputFile = fopen(argv[2],"w")) == NULL){
        
        printf("File not valid");
        return (EXIT_FAILURE); 
        
        
    }
    printf("Welcome to the Boat Management System \n");
    choice = ' ';
    while(choice !='x' || choice !='X'){
        printf("(I)nventory, (A)dd, (R)emove, (P)ayment, (M)onth, e(X)it: ");
        scanf("%c",&choice);
       printf("choice is %c", choice);	
        if(choice=='I' || choice=='i'){
            
            
        }else if(choice == 'A' || choice == 'a'  ){
            
            
            
        }else if(choice == 'R'|| choice == 'r'  ){
            
            
            
            
        }else if(choice == 'P'|| choice == 'p'  ){
            
            
            
            
        }  else if(choice == 'M'|| choice == 'm'  ){
            
            
            
            
        } else{
            printf("Invalid Option %c", choice); 
        }
            
          
    }
  if (fclose(InputFile) != 0)
    {
        perror("Error closing file");
        return 0;
    }

 if (fclose(OutputFile) != 0)
    {
        perror("Error closing file");
        return 0;
    }

 return 1; 
}

