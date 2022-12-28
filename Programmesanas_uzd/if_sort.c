#include <stdio.h>

int main()
   {
   int opt;
   printf("Kārtošanai dilstošā secībā ievadiet 0, bet augošā secībā 1: \n");
   scanf("%d", &opt);

   if(opt == 1)
   {
int arr1[100];
    int n, i, j, tmp;


       printf("\n\nSakārtot skaitļus augošā secībā :\n ");
       printf("----------------------------------------------\n");

    printf("Ievadiet elementu skaitu : ");
    scanf("%d", &n);

       printf("Ievadiet %d elementus :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("Skaitlis nr. %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nIevadītie skaitļi augošā secībā:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	        printf("\n\n");
}

   else
   {
   int arr1[100];
    int n, i, j, tmp;
	
	
       printf("\n\nSakārtot skaitļus dilstošā secībā :\n");
       printf("----------------------------------------------\n");	

    printf("Ievadiet elementu skaitu : ");
    scanf("%d", &n);

       printf("Ievadiet %d elementus :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("Skaitlis nr. %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[i] < arr1[j])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }

     printf("\nIevadītie skaitļi dilstošā secībā:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	        printf("\n\n");
}

   return 0;
   }
