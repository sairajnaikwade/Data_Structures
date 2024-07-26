#include<stdio.h>
#include<string.h>
struct employee{
    char empName[100];
    int empId;
};
void main()
{
    struct employee e[5];
    int i,ch,ne,nch,id,flag=0,flack=0,a;
    char name[100];
    do{printf("1.Insert data\n2.Display data\n3.Update data\n4.Delete data\nEnter choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1://insert data
              printf("\nEnter no.of employee : ");
              scanf("%d",&ne);
              for(i=0;i<ne;i++)
              {
                  printf("\nEnter name : ");
                  scanf("%s",e[i].empName);
                  printf("\nEnter ID : ");
                  scanf("%d",&e[i].empId);
              }
              break;
              
        case 2://display data

              for(i=0;i<ne;i++)
              {
                  printf("\n\nName : %s\nID : %d",e[i].empName,e[i].empId);
              }
              break;
              
        case 3://update data
              
              printf("\n1.Search by ID\n2.Search by name\nEnter choice : ");
              scanf("%d",&nch);
              switch(nch)
              {
                  case 1://by id
                        printf("\nEnter Id : ");
                        scanf("%d",&id);
                        for(i=0;i<ne;i++)
                        {
                            if(id==e[i].empId)
                            {
                                flag=1;
                                break;
                            }
                        }
                        if(flag==1)
                        {
                            printf("\nEnter new ID : ");
                            scanf("%d",&e[i].empId);
                        }else
                        {
                            printf("\nInvalid number");
                        }
                        break;
                case 2://by name
                        printf("\nEnter name : ");
                        scanf("%s",name);
                        for(i=0;i<ne;i++)
                        {
                            if(strcmp(name,e[i].empName)==0)
                            
                            {
                                flack=1;
                                break;
                            }
                           
                        }
                        if(flack==1)
                        {
                            printf("\nEnter new name : ");
                            scanf("%s",e[i].empName);
                        }else
                        {
                            printf("\nInvalid Name");
                        }
              }
              break;
              
            case 4://delete data
              
                  printf("\nEnter Id : ");
                  scanf("%d",&id);
                  for(i=0;i<ne;i++)
                  {
                      if(id==e[i].empId)
                      {
                          flag=1;
                          break;
                      }
                    
                  }
                  if(flag==1)
                  {
                      for(a=i;a<ne;a++)
                      {
                          e[a].empId=e[a+1].empId;
                          strcpy(e[a].empName,e[a+1].empName);
                      }ne--;
                  }else{
                      printf("invalid Id");
                  }
    }
    printf("\nDo you want to continue ?Press 1 for yes.");
    scanf("%d",&ch);
    }while(ch==1);
}


