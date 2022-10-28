#include <stdio.h>
#include <locale.h>
#define Max 100
int main() {
  setlocale(LC_ALL,"portuguese");
  int Acont=0, Econt=0, Icont=0, Ocont=0, Ucont=0;
  char mensagem[Max];
  printf("Escreva uma mensagem: ");
  gets (mensagem);
  for (int i=0;i<Max;i++)
  {
  if ((mensagem[i])=='a'||(mensagem[i]=='A'))
  {
  Acont++;
  continue;
  }
  if ((mensagem[i]=='e')||(mensagem[i]=='E'))
  {
  Econt++;
  continue;
  }
  if ((mensagem[i]=='i')||(mensagem[i]=='I'))
  {
  Icont++;
  continue; 
  }
  if ((mensagem[i]=='o')||(mensagem[i]=='O'))
  {
  Ocont++;
  continue;
  }
  if ((mensagem[i]=='u')||(mensagem[i]=='U'))
  {
  Ucont++;
  continue;
  }
  }
  printf ("Nessa mensagem tem %i letras A\n",Acont);
  printf ("Nessa mensagem tem %i letras E\n",Econt);
  printf ("Nessa mensagem tem %i letras I\n",Icont);
  printf ("Nessa mensagem tem %i letras O\n",Ocont);
  printf ("Nessa mensagem tem %i letras U\n",Ucont);      
  return 0;
}