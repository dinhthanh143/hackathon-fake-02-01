#include<stdio.h>

int main(){
int choice=0;
int rows,cols,i,j,find_num,temp;
int arr[100][100];
int check=0;
int tich_bien=1;
int arrange[100];
int min;

while(choice!=8){
	printf("\n MENU \n\n 1.Nhap kich co va gia tri cac phan tu cua mang\n 2.In gia tri cac phan tu theo ma tran\n 3.In ra cac phan tu tren duong bien va tinh tich \n 4.In ra cac phan tu nam tren duong cheo chinh\n 5.In ra cac phan tu nam tren duong cheo phu \n 6.Sap xep duong cheo chinh theo thu tu tang dan\n 7.Tim kiem phan tu va in ra vi tri phan tu do \n 8.Thoat\n Lua chon cua ban: ");
	scanf("%d", &choice);
	
	switch(choice){
	//1.Nhap kich co va gia tri cac phan tu cua mang
	case 1:
		printf("\n moi nhap so hang: ");
		scanf("%d",&rows);
			printf("moi nhap so cot: ");
		scanf("%d",&cols);
	
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
			printf("moi nhap gia tri cho phan tu arr[%d][%d]= ",i,j);
			scanf("%d", &arr[i][j]);
		}
		}
		
		break;
	//2.In gia tri cac phan tu theo ma tran
	case 2:
		if(rows>0 && cols>0){
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
		printf("%d\t", arr[i][j]);
	  	 } printf("\n");
       		 }
	}
        break;
    //4.In ra cac phan tu nam tren duong cheo chinh
    case 4:
    	if(rows!=cols){
    		printf("\n so hang can bang so cot!\n");
		}else{
			j=0;
		for(i=0;i<rows;i++){
			
		printf("%d\t",arr[i][j]);
			j++;
		}
		}
		break;
	//5.In ra cac phan tu nam tren duong cheo phu
	case 5:
			if(rows!=cols){
    		printf("\n so hang can bang so cot!\n");
		}else{
			j=cols-1;
		for(i=0;i<rows;i++){
			
		printf("%d\t",arr[i][j]);
			j--;
			
			
		}
		}
		break;
	//7.Tim kiem phan tu va in ra vi tri phan tu do
	case 7:
		printf("moi nhap phan tu muon tim: ");
		scanf("%d",&find_num);
		
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
			if(arr[i][j]==find_num){
				printf("phan tu o vi tri: arr[%d][%d] \n",i,j);
				check++;
			}	
				
				
				
			}
		} 
		if(check==0){
			printf("phan tu khong co trong mang \n");
		}
	   break;
	   
	//6.Sap xep duong cheo chinh theo thu tu tang dan
	case 6:
			
				if(rows!=cols){
    		printf("\n so hang can bang so cot!\n");
		}else{
			j=0;
		for(i=0;i<rows;i++){
			
		arrange[i]=arr[i][j];
			j++;
		}
		}
		
		for(i=0;i<rows;i++){
				min=arrange[i];
				for(j=i+1;j<rows;j++){
					if (arrange[j]<min){
						min=arrange[j];
						arrange[j]=arrange[i];
						arrange[i]=min;
					}
				}
		}
	    for (i=0;i<rows;i++){
	    	printf("%d\t",arrange[i]);
		}
		j=0;
		for(i=0;i<rows;i++){
			
		arr[i][j]=arrange[i];
			j++;
		}
		
	
		
		
		break;
		
	//3.In ra cac phan tu tren duong bien va tinh tich
	case 3:
				
				for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			if(i==0 || j==0 || i==rows-1|| j==cols-1){
					printf("%d\t",arr[i][j]);
						tich_bien =tich_bien*arr[i][j];
			}
		
			
			
		}
		
	}	printf("\n tich la : %d",tich_bien);
	 break;
		}
		
		
	}
	

}

   return 0;
}

