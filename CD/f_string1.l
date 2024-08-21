%{
int l, w = 0;
%}

%%
[a-zA-z] {printf("%s is a letter.\n",yytext);}
[a-zA-Z]* {printf("%s is a word.\n",yytext);}
%%

int main()
{
extern FILE *yyin;
yyin = fopen("file.txt", "r");
yylex();
return 0;
}
