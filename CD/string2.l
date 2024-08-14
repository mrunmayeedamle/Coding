%{
int l, w = 0;
%}

%%
[a-zA-z] {printf("%s is a letter.\n",yytext);}
[a-zA-Z]* {printf("%s is a word.\n",yytext);}
%%

int main()
{
printf("Enter the string you want to check: ");
yylex();
return 0;
}
