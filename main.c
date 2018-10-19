//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>
#include <string.h>
#include <conio.h>


//---------------------------------------------CATEGORIES FUNCTION------------------------------------------------
void Categories(char string[]){
    int  count=0; //Count declaration
    int count2=0; //Count declaration
    int count3=0; //Count declaration
    int count4=0; //Count declaration
    int count5=0; //Count declaration

    //NUMBER CATEGORY
    printf("\nThe numbers in the text are: ");
    for(int i=0;i<strlen(string);i++){ //This loop analyse all the string
        //This if compares if the character in the position i is a Number
        if(string[i] > 47 && string[i] < 58){

            printf("%c ",string[i]); //if it is, print the char
            count++; //Count increasing

        }
    }
    printf("\nThere are %i Numbers",count); //Print how many characters of the type there are
    printf("\n\n"); //space jump

    //VOWEL CATEGORY
    printf("\nThe vowels in the text are: ");
    for(int i=0;i<strlen(string);i++){ //This loop analyse all the string
        //This if compares if the character in the position i is a vowel
        if(string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 ||
           string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117){

            printf("%c ",string[i]); //if it is, print the char
            count2++; //Count increasing

        }
    }
    printf("\nThere are %i vowels",count2); //Print how many characters of the type there are
    printf("\n\n"); //space jump


    //CONSONANT CATEGORY
    printf("\nThe Consonants in the text are: ");
    for(int i=0;i<strlen(string);i++){ //This loop analyse all the string
        //This if compares if the character in the position i is a consonant
        if(((string[i]>=65 && string[i]<=90) && string[i]!=65 && string[i]!=69 && string[i]!=73 && string[i]!=79 && string[i]!=85 )
        ||((string[i]>=97 && string[i]<= 122)&& string[i]!=97 && string[i]!=101 && string[i]!=105 && string[i]!=111 && string[i]!=117 )){

            printf("%c ",string[i]); //if it is, print the char
            count3++; //Count increasing

        }
    }
    printf("\nThere are %i consonants",count3); //Print how many characters of the type there are
    printf("\n\n"); //space jump


    //SPACES CATEGORY
    printf("\nThe spaces in the text are: ");
    for(int i=0;i<strlen(string);i++){ //This loop analyse all the string
        //This if compares if the character in the position i is a space
        if(string[i] == 32){

            printf("space "); //if it is, print the word "Space"
            count4++; //Count increasing

        }
    }
    printf("\nThere are %i spaces",count4); //Print how many characters of the type there are
    printf("\n\n"); //space jump

    //SPECIAL CHARACTERS CATEGORY
    printf("\nThe special characters in the text are: ");
    for(int i=0;i<strlen(string);i++){ //This loop analyse all the string
        //This if compares if the character in the position i is a special character
        if((string[i]>=33 && string[i]<=47)||(string[i]>=58 && string[i]<= 64)||(string[i]>=91 && string[i]<= 96)
        ||(string[i]>=123 && string[i]<= 126)){

            printf("%c ",string[i]); //if it is, print the char
            count5++; //Count increasing

        }
    }
    printf("\nThere are %i special characters",count5); //Print how many characters of the type there are
    printf("\n\n"); //space jump


}



int main() {

    char string[100]; //String declaration
    printf("Write anything: \n");
    gets(string); //String request

    Categories(string); //Categories(); call, using string as a parameter

    return 0;
}