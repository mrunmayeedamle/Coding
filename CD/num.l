%{
int dig, letter;
%}

%%
[0-9]* {printf("%s is a digit\n", yytext); dig++;}
[A-Za-z] {printf("%s is a letter\n", yytext); letter++;} 
%%

int main()
{
printf("Enter your input:");
yylex();
return 0;
}
