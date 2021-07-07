/* Suhaimee Binyoh
Insertion Sort Advanced Analysis
web : https://www.hackerrank.com/challenges/insertion-sort/problem
score : 06.58
*/
int insertionSort(int arr_count, int* arr) {
    long int i,j,count=0;
    for(i=1;i < arr_count;i++){
        for(j=i;j>0;j--){
            if(*(arr + j)< *(arr + j-1)){
                *(arr + j) = *(arr + j) + *(arr + j-1);
                *(arr + j -1) = *(arr + j) - *(arr + j-1);
                *(arr + j) = *(arr + j) - *(arr + j-1);
                count++;
            }
           else{
               break;
           }
        }
    }
    return count;
}