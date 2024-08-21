%{
int v,c = 0;
%}

%%
[aeiouAEIOU] {printf("%s is a vowel \n", yytext); v++;}
[A-Za-z] {printf("%s is a consonant \n", yytext); c++;}
. ;
%%

int main()
{

extern FILE *yyin;
yyin = fopen("file.txt", "r");
yylex();
fclose(yyin);

printf("Number of vowels: %d\n", v);
printf("Number of consonants: %d\n", c);

return 0;
}
