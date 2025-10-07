/*
!!! Aviso adicional !!!
Estimado professor Sergio Cardoso, por questõe de prática, melhor elucidação do código e profissionalismo na documentação, 
eu irei incluir nesse código uma versão de comentários em inglês. Para fins de identificação acadêmica, irei colocar a disposição minhas informações abaixo.
------------------------------------------------------------------------------------
Aluno: Francisco Gomes da Silva Junior
Período: 1º
Curso: Ciência da Computação
Cidade: Recife
Polo: Abdias de Carvalho
OBS.: Data e versão não seriam necessárias visto que cada commit irá constar tais informações.
------------------------------------------------------------------------------------
*/

#include <stdio.h>  // Biblioteca para entrada e leitura de dados. Library for read and input data user
#include <string.h> // Inserir essa biblioteca para manipulação de String. Library called for manipulation data String

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades. // Section of variables cards A and B
  // Seção dos dados da Carta A. Section data of card A
  char state_a[2];
  char card_code_a[5];
  char name_city_a[20];
  int population_city_a;
  float area_a, pib_city_a;
  int number_points_touristics_a;
  float density_population_a;
  float pib_per_capita_a;
  //------------ End data head card A ------------

  char state_b[2];
  char card_code_b[5];
  char name_city_b[20];
  int population_city_b;
  float area_b, pib_city_b;
  int number_points_touristics_b;
  float density_population_b;
  float pib_per_capita_b;

  //------------ End data head card B ------------

  // Área para entrada de dados. Section of input data user
  printf("-------------- DATA OF CARD [A] --------------\n");
  printf("Help data input: enter with a letter in between A-H\n");
  printf("Suporte ao usuário: digite uma letra do alfabeto entre A-H\n");
  printf("Enter with a first state: \n");
  scanf(" %s", state_a);

  printf("Help data input: enter with a number in between 01-04\n");
  printf("Suporte ao usuário: digite um número entre 01-04\n");
  printf("Enter with a card code: \n");
  scanf(" %s", card_code_a);

  getchar(); // Cleaning of \n in buffer of variable 

  printf("Help data input: writing name of city, not inserting number\n");
  printf("Suporte ao usuário: digite o nome da cidade, não inserir número\n");
  printf("Enter with a name city: \n");
  fgets(name_city_a, sizeof(name_city_a), stdin);

  printf("Help data input: input with number of amount population city A. number type integer\n");
  printf("Suporte ao usuário: digite o número da população da cidade A. Tipo número: inteiro\n");
  printf("Enter with a population A: \n");
  scanf("%d", &population_city_a);

  printf("Help data input: input a value of area city in KM². Type data: float\n");
  printf("Suporte ao usuário: entre com um valor da área da cidade em KM². Tipo de dado: número decimal\n");
  printf("Enter with a value of area city A: \n");
  scanf("%f", &area_a);

  printf("Help data input: input a value of PIB brute of city A. Type number: float\n");
  printf("Suporte ao usuário: entre com o valor do PIB bruto da cidade A. Tipo número: número decimal\n");
  printf("Enter with a value of PIB city A: \n");
  scanf("%f", &pib_city_a);

  printf("Help data input: input of numbers points touristics of city A. Type data: integer\n");
  printf("Suporte ao usuário: entre com o número de pontos turísticos da cidade A. Tipo de dado: inteiro\n");
  printf("Enter with a amount points touristics in city A: \n");
  scanf("%d", &number_points_touristics_a);
  printf("\n");

  printf("-------------- END DATA CARD [A] ---------------\n");

  printf("-------------- DATA OF CARD [B] --------------\n");
  printf("Help data input: enter with a letter in between A-H\n");
  printf("Suporte ao usuário: digite uma letra do alfabeto entre A-H\n");
  printf("Enter with a first state: \n");
  scanf(" %s", state_b);

  printf("Help data input: enter with a number in between 01-04\n");
  printf("Suporte ao usuário: digite um número entre 01-04\n");
  printf("Enter with a card code: \n");
  scanf(" %s", card_code_b);

  getchar(); // Cleaning of \n in buffer of variable 

  printf("Help data input: writing name of city, not inserting number\n");
  printf("Suporte ao usuário: digite o nome da cidade, não inserir número\n");
  printf("Enter with a name city: \n");
  fgets(name_city_b, sizeof(name_city_b), stdin);

  printf("Help data input: input with number of amount population city B. number type integer\n");
  printf("Suporte ao usuário: digite o número da população da cidade B. Tipo número: inteiro\n");
  printf("Enter with a population B: \n");
  scanf("%d", &population_city_b);

  printf("Help data input: input a value of area city in KM². Type data: float\n");
  printf("Suporte ao usuário: entre com um valor da área da cidade em KM². Tipo de dado: número decimal\n");
  printf("Enter with a value of area city B: \n");
  scanf("%f", &area_b);

  printf("Help data input: input a value of PIB brute of city B. Type number: float\n");
  printf("Suporte ao usuário: entre com o valor do PIB bruto da cidade B. Tipo número: número decimal\n");
  printf("Enter with a value of PIB city B: \n");
  scanf("%f", &pib_city_b);

  printf("Help data input: input of numbers points touristics of city B. Type data: integer\n");
  printf("Suporte ao usuário: entre com o número de pontos turísticos da cidade B. Tipo de dado: inteiro\n");
  printf("Enter with a amount points touristics in city B: \n");
  scanf("%d", &number_points_touristics_b);
  printf("\n");

  printf("-------------- END DATA CARD [B] ---------------\n");

  //------------------ Calculate Population density and PIB per capita ------------------
  //------------------ CARD [A] ------------------
  density_population_a = population_city_a / area_a;
  pib_per_capita_a = pib_city_a / population_city_a;

  //------------------ CARD [B] ------------------
  density_population_b = population_city_b / area_b;
  pib_per_capita_b = pib_city_b / population_city_b;  

  //-------------------------------------------------------------------------------------

  // Área para exibição dos dados da cidade
  printf("----------- Dados da carta A -----------\n");
  printf("State: %s\n", state_a);
  printf("Card code A: %s%s\n", state_a, card_code_a);
  printf("Name of city: %s\n", name_city_a);
  printf("Population A: %d\n", population_city_a);
  printf("Area city A: %.2f\n", area_a);
  printf("PIB city A: %.2f\n", pib_city_a);
  printf("Number points touristics A: %d\n", number_points_touristics_a);
  printf("The density population A is: %.2f hab/km²\n", density_population_a);
  printf("The PIB per capita of population A: %.2f Reais\n", pib_per_capita_a);

  printf("----------- Dados da carta B -----------\n");
  printf("State: %s\n", state_b);
  printf("Card code B: %s%s\n", state_b, card_code_b);
  printf("Name of city: %s\n", name_city_b);
  printf("Population B: %d\n", population_city_b);
  printf("Area city B: %.2f\n", area_b);
  printf("PIB city B: %.2f\n", pib_city_b);
  printf("Number points touristics B: %d\n", number_points_touristics_b);
  printf("The density population B is: %.2f hab/km²\n", density_population_b);
  printf("The PIB per capita of population B: %.2f Reais\n", pib_per_capita_b);

  //---------------------------------------------------------------------------------------------------


return 0;
} 
