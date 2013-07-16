/*
input: vector
returns: sorted vector

function name:
insertSort(vector);
*/

using namespace std;

template<class t>
vector<t> insertSort(vector<t> data){
int length = data.size();
int j = 1;
int key;
int i;
for(int j = 1; j <= length;j++ ){
    key = data[j];
    i = j-1;
    while(i >= 0 && data[i]> key){
        data[i+1] = data[i];
        i=i-1;
    }
    data[i+1] = key;
}
return data;
}



