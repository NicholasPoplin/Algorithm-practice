/*
input array of any type
results: changes array into a sorted array

example
mergeSort(arrayName,first index slot , last index slot );

*/
template < class t >
void merge(t a[],int p , int q , int r){
    int i ,j;
    int n1 = q - p + 1;

    int n2 = r - q;

    t left[n1];
    t right[n2];

    for(i =0; i < n1;i++){
        left[i] = a[p+i];

    }
    for(j =0; j < n2;j++){
        right[j] = a[q+j+1];

    }

    i = 0;
    j = 0;

    for(int k = p; k <= r; k++){
        if(i != n1 && ( j == n2 || left[i] <= right[j]  )  ){

            a[k] = left[i];

            i = i + 1;
        }
        else{
            //cout << a[j] << " " << right[j] << endl;
            a[k] = right[j];
            j++;

        }

    }
}

template < class t >
void mergeSort(t a[],int p, int r){
    if(p < r){

        int q = (p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
        merge(a,p,q,r);
    }
}

