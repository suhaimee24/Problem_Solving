/* Suhaimee Binyoh
Sparse Arrays
web : https://www.hackerrank.com/challenges/sparse-arrays/problem
*/
int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
    int* result = malloc(queries_count * sizeof(int));
    int i,j,k;
    *result_count = queries_count;
    for(i=0;i<queries_count;i++){
        *(result+i)=0;
        for(j=0;j<strings_count;j++){
            if(!strcmp(queries[i],strings[j])){
                *(result+i)+=1;
            }
        }
    } 
    return result;
}