template<typename T>
    T MaxEle(T a[3][2],int *r,int *c){
/********* Begin *********/
//返回最大元素和它所在的行、列号

    T max = a[0][0];
    *r = 1;
    *c = 1;

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j< 2; ++j){
            if(a[i][j] > max){
                max = a[i][j];
                *r = i + 1;
                *c = j + 1;
            }
        }
    }

    return max;

    
    
/********* End *********/

}