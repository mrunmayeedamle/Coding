%{
int v,c = 0;
%}

%%
[aeiouAEIOU] {v++;}
[A-Za-z] {c++;}
%%

void main()
{
printf("Enter a string:");
yylex();
printf("Number of vowels: %d\n", v);
printf("Number of consonants: %d\n", c);
}
