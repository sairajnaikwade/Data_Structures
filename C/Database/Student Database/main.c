#include<stdio.h>
#include<string.h>
struct student{
    char stud_Name[100];
    int stud_rollno;
};
void main()
{
    struct student s[5];
    int i,ch,ne,nch,rollno,flag=0,flack=0,a,flag_d=0;
    char name[100];
    do{printf("1.Insert data\n2.Display data\n3.Update data\n4.Delete data\nEnter choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1://insert data
              printf("\nEnter no.of student : ");
              scanf("%d",&ne);
              for(i=0;i<ne;i++)
              {
                  printf("\nEnter name : ");
                  scanf("%s",s[i].stud_Name);
                  printf("\nEnter roll no. : ");
                  scanf("%d",&s[i].stud_rollno);
              }
              break;
        case 2://display data
              for(i=0;i<ne;i++)
              {
                  printf("\n\nName : %s\nroll no : %d",s[i].stud_Name,s[i].stud_rollno);
              }
              break;
        case 3://update data
              printf("\n1.Search by roll no.\n2.Search by name\nEnter choice : ");
              scanf("%d",&nch);
              switch(nch)
              {
                  case 1://by id
                        printf("\nEnter roll no. : ");
                        scanf("%d",&rollno);
                        for(i=0;i<ne;i++)
                        {
                            if(rollno==s[i].stud_rollno)
                            {
                                flag_d=1;
                                break;
                            }
                        }
                        if(flag_d==1)
                        {
                            printf("\nEnter new roll no. : ");
                            scanf("%d",&s[i].stud_rollno);
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
                            if(strcmp(name,s[i].stud_Name)==0)
                            
                            {
                                flack=1;
                                break;
                            }
                           
                        }
                        if(flack==1)
                        {
                            printf("\nEnter new name : ");
                            scanf("%s",s[i].stud_Name);
                        }else
                        {
                            printf("\nInvalid Name");
                        }
              }
              break;
            case 4://delete data
                  printf("\nEnter roll no. : ");
                  scanf("%d",&rollno);
                  for(i=0;i<ne;i++)
                  {
                      if(rollno==s[i].stud_rollno)
                      {
                          flag=1;
                          break;
                      }
                    
                  }
                  if(flag==1)
                  {
                      for(a=i;a<ne;a++)
                      {
                          s[a].stud_rollno=s[a+1].stud_rollno;
                          strcpy(s[a].stud_Name,s[a+1].stud_Name);
                      }ne--;
                  }else{
                      printf("\nInvalid Id");
                  }
    }
    printf("\nDo you want to continue ?Press 1 for yes.");
    scanf("%d",&ch);
    }while(ch==1);
}

