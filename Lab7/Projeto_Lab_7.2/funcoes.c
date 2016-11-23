
int recebe_notas(float *NOTAS,int N,int *APR){
    int i;
for (i=0;i<N;i++){
    if (*(NOTAS + i) >= 6)
        *(APR + i) = 1;
    else if (*(NOTAS + i) < 6)
        *(APR + i) = 0;
}

}

int conta_notas(int *APR,int N,int *NAPR, int *NRPR){
    int i;
    *NAPR = 0;
    *NRPR = 0;
    for(i=0;i<N;i++){
    if (*(APR + i) == 1)
        *NAPR += 1;
    else if(*(APR + i) == 0)
        *NRPR += 1;
    }
    return 0;
}

int percent_aprov(int NAPR, int NRPR, float *PAPR, float *PRPR){

    *PAPR = (float)NAPR / ((float)NAPR + (float)NRPR);
    *PRPR = (float)NRPR / ((float)NAPR + (float)NRPR);

    if(NAPR >= NRPR)
        return 1;
    else
        return 0;
}
