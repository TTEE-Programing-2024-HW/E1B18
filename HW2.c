#include<stdio.h>
#include<stdlib.h>
int main(){
	/*步驟1*/ 
	/*個人風格*/
	printf("印出布丁狗\n");
	                 puts(".~!!!!5J:");                   
                puts(":^~~?B#######BP5?~.");              
   puts(".^~!~~^^^~!7?7!~^~?YGB#########BY.");           
  puts("7?!~^^~~~!~^::.......:^!7?Y55PPGPP?^.");         
 puts("??...........:.................:::.^!7?7!~~^.");    
 puts("57.........~J~...^^...................::^~~!7?~"); 
 puts(":Y7^:..::^?Y^....!~....~~:....::.............:7?");
   puts("~?J?777GJ:........7?:PY^^...7~...^7:........^P.");
  puts(".J?!77~?Y..........^!~7!77........:?Y7~^:::^!Y!"); 
  puts("!5...:~7^..............::...........!G!7????7:");  
  puts(".7?!^:..............................~G!7???!");    
    puts(".^!P!.............................:~^^:.~G.");  
      puts(":P:...............................:^~7Y~");    
      puts("~5..............................^5?77^.");     
      puts("~G?7?!:.........................!P");         
     puts("75^::^7J:........................57");       
    puts(".P^.....:........................JY");       
     puts("Y7......::....................:JJ");           
     puts(".J?!~~~7YJ?!~^::............:!57");           
       puts(":~!!!~. :~!7??????JJ!...:?J7:");             
                     puts("....7G!::~P?");                
                          puts("^???J~");
	system("pause");
	system("cls");
	fflush(stdin); 					   
    /*要求使用者輸入4個數字的密碼*/
   int a,b,c,d;
   int count=0; /*count為計變數*/
   printf("輸入4個數字\n");
   while(count<3){ /*用while迴圈，直到用戶輸入正確密碼或連續三次輸入錯誤才會結束*/ 
    scanf("%d %d %d %d",&a,&b,&c,&d);
   	if(a==2&&b==0&&c==2&&d==4){ /*判斷數字密碼是否2024*/ 
   		printf("輸入正確\n");
   		break;
	   }else{
	   	count++; /*如果輸入不是2024，計變數+1*/ 
	   	printf("密碼輸入錯誤，請重新輸入\n");
	   }
    }
    if(count==3){ /*計變數加到3為止*/ 
    	printf("密碼三次輸入錯誤，結束程式\a\n");
    	return 0;
	}
	/*步驟2*/ 
	system("pause");
	system("cls");
	fflush(stdin);
	printf("印出主選單\n");
	printf("     - - - - - - - - - -\n");
	printf("    / A.畫出直角三角形 /\n");
	printf("   /  B.顯示乘法表    /\n");
    printf("  /   C.結束         /\n");
    printf(" - - - - - - - - - - \n");
    /*步驟3*/
    int A;
    printf("輸入A清除螢幕\n");
    scanf("%c",&A);
    system("cls");
    getchar(); /*從輸入緩衝區中獲取下一個字符，並將該字符從輸入緩衝區中刪除*/
	char ch;
	do{
    printf("輸入a到n的字元\n");
    scanf("%c",&ch);
    int i,j,rows; /*rows表示行數*/
	rows=ch-'a'+1;
	if(ch>'a'&&ch<'n'){ /*判斷字元範圍*/ 
    for(i=rows;i>=1;i--){ /*用於控制行數，從下到上*/ 
    	for(j=i;j<=rows;j++){ /*用於控制行數裡的字符數量，從上到下*/
    		printf("%c",'a'+j-1); /*印出該行數理的字符*/ 
		}
		printf("\n");
	}
	printf("印出主選單\n");
	printf("     - - - - - - - - - -\n");
	printf("    / A.畫出直角三角形 /\n");
	printf("   /  B.顯示乘法表    /\n");
    printf("  /   C.結束         /\n");
    printf(" - - - - - - - - - - \n");
	}else{
		printf("請輸入有效字元\a\n");
	}
	}while(ch<'a'||ch >'n');
	getchar(); /*從輸入緩衝區中獲取下一個字符，並將該字符從輸入緩衝區中刪除*/
	system("pause");
	system("cls");
	/*步驟4*/
	int B;
	printf("輸入B\n");
	scanf("%d",&B);
	getchar(); /*從輸入緩衝區中獲取下一個字符，並將該字符從輸入緩衝區中刪除*/
	do{
	printf("輸入1到9的整數n\n");
	scanf("%d",&B);
	getchar(); /*從輸入緩衝區中獲取下一個字符，並將該字符從輸入緩衝區中刪除*/
	if(B>=1&&B<=9){ /*判斷數字是否在有效範圍內*/ 
		int i,j;
		for(i=1;i<=B;i++){ /*輸出乘法表*/ 
			for(j=1;j<=B;j++){
				printf("%d*%d=%2d",i,j,i*j);
				} 
				printf("\n");	
	 }
	printf("印出主選單\n");
	printf("     - - - - - - - - - -\n");
	printf("    / A.畫出直角三角形 /\n");
	printf("   /  B.顯示乘法表    /\n");
    printf("  /   C.結束         /\n");
    printf(" - - - - - - - - - - \n");
	}else{
	   printf("請輸入有效字元\a\n");
	}}
	while(B<=1||B>=9);
	getchar(); /*從輸入緩衝區中獲取下一個字符，並將該字符從輸入緩衝區中刪除*/
	system("pause");
	system("cls");
	/*步驟5*/
	 char C;
    do{ /*使用do-while迴圈來判斷條件*/ 
        printf("Continue? (y/n):");
        scanf("%c",&C); 
        if(C=='y') {
        	printf("印出主選單\n");
	printf("     - - - - - - - - - -\n");
	printf("    / A.畫出直角三角形 /\n");
	printf("   /  B.顯示乘法表    /\n");
    printf("  /   C.結束         /\n");
    printf(" - - - - - - - - - - \n");
        }else if(C=='n'){
            return 0;
        }else{
            printf("重新輸入\n");
        }
    } while(ch!='y'||ch!='n');
    return 0;
}
/*心得:這份作業比上次還棘手，花了更多時間去完成，雖然花了很久的時間，但做完很有成就感。
push程式碼到GitHub上步驟很複雜，也是一樣花了很久的時間。*/ 
