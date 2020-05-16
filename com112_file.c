#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "com112_sort.h"
#include "com112_file.h"

void entrada(int n, int *v)
{
    FILE *file;
    file = fopen("com112_entrada.txt", "w");
    fprintf(file, "%d\n", n);
    for(int i = 0; i < n; i++)
    {
        fprintf(file, "%d ", v[i]);
    }
    fclose(file);
}

void saida(int n, int *v)
{
    FILE *file;
    file = fopen("com112_saida.txt", "w");
    fprintf(file, "%d\n", n);
    for(int i = 0; i < n; i++)
    {
        fprintf(file, "%d ", v[i]);
    }
    fclose(file);
}

void estatistica(int opcao, int *v, int n, double tempo, int movimento, int comparacao)
{
    FILE *file, *vet;
    clock_t inicio, fim;
    file = fopen("com112_relatorio.txt", "w");
    fprintf(file, "Numero de elementos ordenados: %d\n", n);
    if(opcao == 1)
    {
        fprintf(file, "Metodo Bubble Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        fclose(vet);
        comparacao = 0;
        movimento = 0;
        opcao = 2;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Selection Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 3;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Insertion Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 4;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Merge Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
    }
    else if(opcao == 2)
    {
        fprintf(file, "Metodo Selection Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        fclose(vet);
        comparacao = 0;
        movimento = 0;
        opcao = 1;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Bubble sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 3;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Insertion Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 4;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Merge Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
    }
    else if(opcao == 3)
    {
        fprintf(file, "Metodo Insertion Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        fclose(vet);
        comparacao = 0;
        movimento = 0;
        opcao = 1;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Bubble Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 2;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Selection Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
                vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 4;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Merge Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
    }
    else if(opcao == 4)
    {
        fprintf(file, "Merge Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        fclose(vet);
        comparacao = 0;
        movimento = 0;
        opcao = 1;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Bubble Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 2;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Selection Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 3;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Insertion Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
    }
    else if(opcao == 5)
    {
        printf("\n");
        fprintf(file, "Metodo Bubble Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        printf("Metodo Bubble Sort\n");
        printf("Tempo de execucao: %lf\n", tempo);
        printf("Numero de comparacao: %d\n", comparacao);
        printf("Numero de movimentos: %d\n\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        fclose(vet);
        comparacao = 0;
        movimento = 0;
        opcao = 2;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Selection Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        printf("Selection Sort\n");
        printf("Tempo de execucao: %lf\n", tempo);
        printf("Numero de comparacao: %d\n", comparacao);
        printf("Numero de movimentos: %d\n\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 3;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Insertion Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        printf("Insertion Sort\n");
        printf("Tempo de execucao: %lf\n", tempo);
        printf("Numero de comparacao: %d\n", comparacao);
        printf("Numero de movimentos: %d\n\n", movimento);
        vet = fopen("com112_entrada.txt", "r");
        fscanf(vet, "%d", &n);
        for(int i = 0; i < n; i++)
        {
            fscanf(vet, "%d" , &v[i]);
        }
        comparacao = 0;
        movimento = 0;
        opcao = 4;
        inicio = clock();
        escolha(opcao, v, n, &comparacao, &movimento);
        fim = clock();
        tempo = (double)(fim - inicio)*1000 / CLOCKS_PER_SEC;
        fprintf(file, "Merge Sort\n");
        fprintf(file, "Tempo de execucao: %lf\n", tempo);
        fprintf(file, "Numero de comparacao: %d\n", comparacao);
        fprintf(file, "Numero de movimentos: %d\n", movimento);
        printf("Merge Sort\n");
        printf("Tempo de execucao: %lf\n", tempo);
        printf("Numero de comparacao: %d\n", comparacao);
        printf("Numero de movimentos: %d\n\n", movimento);
    }
}
