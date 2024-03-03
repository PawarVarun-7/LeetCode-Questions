int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int lastStoneWeight(int* stones, int stonesSize) {
   
    qsort(stones, stonesSize, sizeof(int), compare);

   
    while (stonesSize > 1) {
        
        int heaviest1 = stones[0];
        int heaviest2 = stones[1];

       
        stones[0] = heaviest1 - heaviest2;

     
        stones[1] = stones[stonesSize - 1];

       
        stonesSize--;

        
        qsort(stones, stonesSize, sizeof(int), compare);
    }

   
    return stonesSize == 0 ? 0 : stones[0];
}