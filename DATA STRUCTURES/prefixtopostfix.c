#include <stdio.h>
#include <string.h>
#define OPERATORS "+-*/" // Prototype Declarations
void preToPostFix(char *preFixIn, char *exprOut);
int findExprLen(char *exprIn);
int main(void)
{
    // Local Definitions
    char preFixExpr[256] = "-+*ABC/EF";
    char postFixExpr[256] = ""; // Statements
    printf("Begin prefix to postfix conversion\n\n");
    preToPostFix(preFixExpr, postFixExpr);
    printf("Prefix expr:  %-s\n", preFixExpr);
    printf("Postfix expr: %-s\n", postFixExpr);
    printf("\nEnd prefix to postfix conversion\n");
    return 0;
} // main
void preToPostFix(char *preFixIn, char *postFix)
{ // Local Definitions
    char operator[2];
    char postFix1[256];
    char postFix2[256];
    char temp[256];
    int lenPreFix; // Statements
    if (strlen(preFixIn) == 1)//if the length of prefix expression is 1 then copy the prefix expression as it is in postfix expression
     
    {
        *postFix = *preFixIn;
        *(postFix + 1) = '\0';
        return;
    } // if only operand
    *operator= * preFixIn;
    *(operator+ 1) = '\0'; // Find first expression
    lenPreFix = findExprLen(preFixIn + 1);
    strncpy(temp, preFixIn + 1, lenPreFix);
    *(temp + lenPreFix) = '\0';
    preToPostFix(temp, postFix1);
    // Find second expression
    strcpy(temp, preFixIn + 1 + lenPreFix);
    preToPostFix(temp, postFix2); // Concatenate to postFix
    strcpy(postFix, postFix1);
    strcat(postFix, postFix2);
    strcat(postFix, operator);
    return;
} // preToPostFix /* ==================== findExprLen ====================Determine size of first substring in an expression.   Pre  exprIn contains prefix expression    Post size of expression is returned */
int findExprLen(char *exprIn)
{ // Local Definitions
    int len1;
    int len2;                            // Statements
    if (strcspn(exprIn, OPERATORS) == 0) // General Case: First character is operator      // Find length of first expression
    {
        len1 = findExprLen(exprIn + 1); // Find length of second expression
        len2 = findExprLen(exprIn + 1 + len1);
    } // ifelse      // Base case--first char is operand
    len1 = len2 = 0;
    return len1 + len2 + 1;
} // findExprLen