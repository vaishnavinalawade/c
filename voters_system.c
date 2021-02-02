/*
Author - Vaishnavi A Nalawade
Date - 2/2/2012
Program - Voting System in C
*/
#include <stdio.h>
#include <string.h>

void candidate_info();
int voter_info();
void choice();
void display_candi();
void vote_count();
void winner();

struct vote
{
    char name[50];
    int age;
    char edu[50];
    int assets;
    int count;
}c[4];

int main()
{
    int n;
    printf("Enter the candidates details:\n");
    candidate_info();
    
    printf("\nEnter details of the voter:");
    int eligible = voter_info();
    if(eligible==0)
    {
        printf("\nYou are not eligible to vote for one of the two reasons: \n 1. You are below the age of 18. \n2. You have a fake id.");
    }
    else
    {
        do
        {
            printf("\nChoices: \n1. Candidate Details \n2. Cast your Vote \n3. Total votes casted for each Candidate \n4.Winner of election \n5.Exit");
            printf("\nEnter your choice:");
            scanf("%d", &n);
            switch(n)  
            {
                 case 1 : display_candi();
                         break;
                     
                case 2 : choice();
                        break;
            
                case 3 : vote_count();
                        break;
            
                case 4 : winner();
                        break;
            
            }
        
        }while(n!=5);
    }
    return 0;
}

void candidate_info()
{
    for(int i=1; i<=4; i++)
    {
        printf("\nEnter the name of candidate %d: ", i);
        scanf("%s", c[i].name);
        printf("\nEnter the age of the candidate %d: ", i);
        scanf("%d", &c[i].age);
        printf("\nEnter the candidates qualifications: ");
        scanf("%s", c[i].edu);
        printf("\nEnter the candidate's total asset value: ");
        scanf("%d", &c[i].assets);
    }
    
}

void display_candi()
{
    printf("\n Details of the Candidates:");
    for(int i=1; i<=4;i++)
    {
        printf("\nName of candidate %d: %s ", i, c[i].name);
       
        printf("\nAge of the candidate: %d: ", c[i].age);
        
        printf("\nCandidates qualifications: %s ", c[i].edu);
        
        printf("\nCandidate's total asset value: %d \n", c[i].assets);
        
    }
    
}


int voter_info()
{
    char voter_name[30], voter_id[10];
    int voter_age;
    
    printf("\nEnter the name of the voter:");
    scanf("%s", voter_name);
    
    printf("\nEnter the age of the voter:");
    scanf("%d", &voter_age);
    
    printf("\nEnter the Voter ID:");
    scanf("%s", voter_id);
    
    if(voter_age<18 || strlen(voter_id)!=7)
    {
            return 0;
    }
    else
    {
        return 1;
    }
}

void choice()
{
    int ch;
    printf("\n Names of the Candidates:\n");
    for(int i=1; i<=4; i++)
    {
        printf("Candidate %d : %s\n", i, c[i].name);
    }
    printf("\nChoose the candidate to vote for:");
    scanf("%d", &ch);
    switch(ch)
    {
        case 1: c[1].count++;
                break;
        case 2: c[2].count++;
                break;
        case 3: c[3].count++;
                break;
        case 4: c[4].count++;
                break;
        default:
            printf("Incorrect Choice");
    }
}

void vote_count()
{
    for(int i=1; i<=4;i++)
    {
        printf("\nVotes for candidate %d: ", i);
        printf("%d", c[i].count);
    }
    printf("\n");
}

void winner()
{
    if(c[0].count > c[1].count && c[0].count > c[2].count && c[0].count > c[3].count)
    {
        printf("Candidate %s is the winner with %d votes. \n", c[0].name, c[0].count);
        
    }
    else if(c[1].count > c[0].count && c[1].count > c[2].count && c[1].count > c[3].count)
    {
        printf("Candidate %s is the winner with %d votes. \n", c[1].name, c[1].count);
        
    }
    else if(c[2].count > c[0].count && c[2].count > c[1].count && c[2].count > c[3].count)
    {
        printf("Candidate %s is the winner with %d votes. \n", c[2].name, c[2].count);
    }
    else
    {
        printf("Candidate %s is the winner with %d votes. \n", c[3].name, c[3].count);
    }
}


