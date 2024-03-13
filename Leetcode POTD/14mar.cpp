// int pivotInteger(int n) {
//         int x=(int)sqrt((n*(n+1))/2);;

//         if(x*x==(n*(n+1))/2)return x;
//         else return -1;
// // %%%%%%%%%%%%%%%%%%%% sol2%%%%%%%%%%%%%%%%%
// // calculate prefix sum
//     //     int sums[n+1];
//     //     sums[0] = 0;
//     //     for (int i = 1; i < n + 1; i++) {
//     //         sums[i] = sums[i-1] + i;
//     //     }

//     //     // find pivot integer
//     //     for (int i = n; i >= 1; i--) {
//     //         int left = sums[i];
//     //         int right = sums[n] - sums[i-1];
//     //         if (left == right) {
//     //             return i;
//     //         }
//     //     }
//     //     return -1;
//     // }


//     }