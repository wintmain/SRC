// 202104-1
// 问题描述
// 一幅长宽分别为 n 个像素和 m 个像素的灰度图像可以表示为一个 n×m 大小的矩阵 A。
// 其中每个元素 Aij（0≤i<n、0≤j<m）是一个 [0,L) 范围内的整数，表示对应位置像素的灰度值。
// 具体来说，一个 8 比特的灰度图像中每个像素的灰度范围是 [0,128)。
// 一副灰度图像的灰度统计直方图（以下简称“直方图”）可以表示为一个长度为 L 的数组 h，其中 h[x]（0≤x<L）表示该图像中灰度值为 x 的像素个数。显然，h[0] 到 h[L−1] 的总和应等于图像中的像素总数 n⋅m。

// 已知一副图像的灰度矩阵 A，试计算其灰度直方图 h[0],h[1],⋯,h[L−1]。

// 输入格式
// 输入共 n+1 行。
// 输入的第一行包含三个用空格分隔的正整数 n、m 和 L，含义如前文所述。
// 第二到第 n+1 行输入矩阵 A。
// 第 i+2（0≤i<n）行包含用空格分隔的 m 个整数，依次为 Ai0,Ai1,⋯,Ai(m−1)。

// 输出格式
// 输出仅一行，包含用空格分隔的 L 个整数 h[0],h[1],⋯,h[L−1]，表示输入图像的灰度直方图。

#include<stdio.h>
int main(void){
    int n,m,L;
    int graph1[256]={0};
    int a;
    scanf("%d%d%d",&n,&m,&L);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a); 
            graph1[a]++;
        }
        
    }
    for(int i =0;i<L;i++){
        printf("%d ",graph1[i]);
    }
    return 0;
}