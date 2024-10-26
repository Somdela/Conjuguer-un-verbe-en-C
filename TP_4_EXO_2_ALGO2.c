// EXERCICE 2

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 30

void lecture( char chaine[max])
	{  printf("Entrer un verbe du premier groupe\t");
	   gets(chaine);}
int verbe_er ( char chaine[max])
{	int var,i,lg;
	char ch;
	lg = strlen(chaine);
	for(i=0;i<(lg/2);i++)
	{	ch = chaine[i];
		chaine[i]=chaine[lg-i-1];
		chaine[lg-i-1]= ch;}
	if( strncmp(chaine,"re",2)==0) return(1);
	else return (0);}
void conjuguer( char chaine [max])
{	int lg,ch,i;
	char copie[max];
	char *term[6]={"e","es","e","ons","ez","ent"};
	char *sujet[6]={" Je "," Tu "," Il/Elle "," Nous ", " Vous "," Ils "};
	lg=strlen(chaine);
	for(i=0;i<(lg/2);i++)
	{	ch = chaine[i];
		chaine[i]=chaine[lg-i-1];
		chaine[lg-i-1]= ch;}
	for(i=0; i<6;i++)
		{strcpy(copie, sujet[i]);
		 strncat(copie, chaine, (lg-2));
		 strcat(copie, term[i]);
		 printf("%s\n",copie);}}
void main()
{	char verbe[20];
	lecture(verbe);
	prinf("Voici la conjugaison du verbe %s au present de l'indicatif\n",verbe);
	if(verbe_er(verbe)==0) 
	{printf("erreur \n ");}
	
	else conjuguer(verbe);}
