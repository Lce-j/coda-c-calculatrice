#include <stdlib.h>
#include <stdio.h>

int main() {
   char symbol;
   int first_number;
   int secound_number;
   int result;
   printf("Bonjour, choisissez un symbole d'opération entre +, -, *, /");
   scanf("%c", &symbol);
   printf("Quel sont vos deux nombres ?");
   scanf("%d", &first_number);
   scanf("%d", &secound_number);

   if (symbol == '+'){
       result = first_number + secound_number;}
   else if (symbol == '-'){
       result = first_number - secound_number;}
   else if (symbol == '*'){
       result = first_number * secound_number;}
   else if (symbol == '/'){
       result = first_number / secound_number;}
   //else if (symbol == '%'){
       //result = first_number % secound_number;}
   else {printf("%c n'est pas un des symboles demandés. \n", symbol);}

   printf("%d %c %d = %d \n", first_number, symbol, secound_number, result);
   exit(0);
}
