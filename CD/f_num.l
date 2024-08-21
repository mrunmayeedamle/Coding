%{
%}

%%
[0-9]* {printf("%s is a positive integer\n",yytext);}
-[0-9]* {printf("%s is a negative integer\n",yytext);}
[0-9]*\.[0-9]* {printf("%s is a positive fraction\n", yytext);}
-[0-9]*\.[0-9]* {printf("%s is a negative fraction\n", yytext);}
%%

int main()
{
extern FILE *yyin;
yyin = fopen("file1.txt", "r");
yylex();
return 0;
}
