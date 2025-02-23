#include <stdio.h>

int main() {

    char estado;
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

//Cadastro da primeira carta
    printf("Digite o estado da primeira cidade:\n ");    
    scanf(" %c", &estado);
                                                
    printf("Digite o código da primeira cidade :\n ");         
    scanf(" %s", &codigo);
                                                            
    printf("Digite o nome da primeira cidade:\n ");
    scanf("%s", &cidade);       
                                                                        
    printf("Digite a população da primeira cidade:\n "); 
    scanf(" %d", &populacao);
    
    printf("Digite a área da primeira cidade (km²):\n  ");  
    scanf(" %f", &area); 
                                                                                                
    printf("Digite o PIB da primeira cidade (em bilhões de reais):\n  ");  
    scanf(" %f", &pib);
                                                                                                            
    printf("Digite o número de pontos turísticos da primeira cidade:\n  ");
    scanf(" %d", &pontosTuristicos);

//Dados cadastrados da primeira carta

    printf("Nome do estado:%c\n", estado);

    printf("Codigo:%s\n", codigo);

    printf("Cidade:%s\n", cidade);

    printf("Populaçao: %d\n", populacao);

    printf("pontosTuristicos:%d\n", pontosTuristicos);

    printf("Area:%f\n", area);

    printf("pib:%f\n", pib);
                                    
    return 0;
}