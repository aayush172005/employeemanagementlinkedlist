#include <iostream>

using namespace std;

struct node
{
  int id;
  char name[50];
  char qua[30];
  char addrs[50];
  char city[30];
  char jobtitle[30];
  int salary;
  char date[30];
  node *pre, *next;

};



class employee
{

public: 
node * head;
 char ch;
employee ()
  {
    head = NULL;
  }
  void menu ()
  {
    cout << "\n\n\t\t ....Welcome  to the Employee  system ....\n\n" << endl;
    cout << "\n\n\t\t 1- add a record : " << endl;
    cout << "\n\n\t\t 2-search a record :" << endl;
    cout << "\n\n\t\t 3- update a record : " << endl;
    cout << "\n\n\t\t 4- Delete a record : " << endl;
    cout << "\n\n\t\t 5- display a record : " << endl;
    cout << "\n\t\t 6- Exit :  " << endl;

    return;
  }

  void add_first ()
  {
    node *newer = new node;

    cout << "\n\t\t  Enter employee  id : ";
    cin >> newer->id;
    fflush (stdin);
    cout << "\n\n\t Enter full name of employee : ";
    cin.getline (newer->name, 50);
    fflush (stdin);
    cout << "\n\n\t\t Enter the qualification of employee : ";
    cin.getline (newer->qua, 50);
    fflush (stdin);
    cout << "\n\nEnter address";
    cin.getline (newer->addrs, 50);
    fflush (stdin);
   
    cout << "Enter job title  : ";
    cin.getline (newer->jobtitle, 30);
    fflush (stdin);
    cout << "Enter city name : ";
    cin.getline (newer->city, 30);
    fflush (stdin);
    cout << "\n\tEnter employee salary : ";
    cin >> newer->salary;
    fflush (stdin);
    cout << "\n\t Enter join date : ";
    cin.getline (newer->date, 30);
    fflush (stdin);
    newer->next = head;
    newer->pre = NULL;

    if (head != NULL)
      {
	head->pre = newer;

      }
    head = newer;
    cout << "\n\t RECORD INSERTED SUCCESFULLY !!!" << endl;

  }

  void add_last ()
  {
    if (head == NULL)
      {
	cout<< "\n\t List is empty !! " << endl;
	cout<<"\n\t Add a new record \n Y or N : ";
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
	  {
	    add_first ();
	    return;

	  }
	else
	  {
	    exit (1);
	  }
      }
    else
      {
	node *tmp = head;
	while (tmp->next != NULL)
	  {
	    tmp = tmp->next;
	  }
	node *newer = new node;
	fflush (stdin);
	cout << "\n Enter  employee Id : ";
	cin.getline (newer->date, 30);
	cout << "\n\t\t  Enter employee  id : ";
	cin >> newer->id;
	fflush (stdin);
	cout << "\n\n\t\t Enter full name of employee : ";
	cin.getline (newer->name, 50);
	fflush (stdin);
	cout << "\n\n\t\t Enter the qualification of employee : ";
	cin.getline (newer->qua, 50);
	fflush (stdin);
	cout << "\n\nEnter address";
	cin.getline (newer->addrs, 50);
	fflush (stdin);
	cout << "\nEnter city name : ";
	cin.getline (newer->city, 30);
	fflush (stdin);
	cout << "Enter job title  : ";
	cin.getline (newer->jobtitle, 30);
	fflush (stdin);
	cout << "Enter city name : ";
	cin.getline (newer->city, 30);
	fflush (stdin);
	cout << "\n\tEnter employee salary : ";
	cin >> newer->salary;
	fflush (stdin);
	cout << "\n\t Enter join date : ";
	cin.getline (newer->date, 30);
	fflush (stdin);
	newer->next = NULL;
	tmp->next = newer;
	newer->pre = tmp;
      }
  }

  void add_after ()
  {
    if (head == NULL)
      {
	cout << "\n\t List is empty !! " << endl;
	cout << "\n\t Add a new record \n Y or N : ";
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
	  {
	    add_first ();
	    return;

	  }
	else
	  {
	    exit (1);
	  }
      }
    else
      {
	int val;
	cout << "\n\t Enter id after which you want to enter the record  : ";
	cin >> val;
	bool flag = false;
	node *tmp = head;
	node *p;
	while (tmp != NULL)
	  {
	    if (tmp->id == val)
	      {
		node *newer = new node;
		fflush (stdin);
		cout << "\n Enter  employee Id : ";
		cin.getline (newer->date, 30);
		cout << "\n\t\t  Enter employee  id : ";
		cin >> newer->id;
		fflush (stdin);
		cout << "\n\n\t\t Enter full name of employee : ";
		cin.getline (newer->name, 50);
		fflush (stdin);
		cout << "\n\n\t\t Enter the qualification of employee : ";
		cin.getline (newer->qua, 50);
		fflush (stdin);
		cout << "\n\nEnter address";
		cin.getline (newer->addrs, 50);
		fflush (stdin);
		cout << "\nEnter city name : ";
		cin.getline (newer->city, 30);
		fflush (stdin);
		cout << "Enter job title  : ";
		cin.getline (newer->jobtitle, 30);
		fflush (stdin);
		cout << "Enter city name : ";
		cin.getline (newer->city, 30);
		fflush (stdin);
		cout << "\n\tEnter employee salary : ";
		cin >> newer->salary;
		fflush (stdin);
		cout << "\n\t Enter join date : ";
		cin.getline (newer->date, 30);
		if (tmp->next != NULL)
		  {
		    newer->next = tmp->next;
		    newer->pre = tmp;
		    p=tmp->next;
		    p->pre = newer;
		    tmp->next = newer;

		  }
		else
		  {
		    newer->next = tmp->next;
		    newer->pre = tmp;
		    tmp->next = newer;
		  }
		flag = true;


	      }
	    tmp = tmp->next;
	  }
	if (flag == false)
	  {
	    cout << "\n ID not found !!";
	  }

      }
  }

  void add_before ()
  {
    if (head == NULL)
      {
	cout << "\n\t List is empty !! " << endl;
	cout << "\n\t Add a new record \n Y or N : ";
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
	  {
	    add_first ();
	    return;

	  }
	else
	  {
	    exit (1);
	  }
      }
    else
      {

	int val;
	cout << "\n\t Enter id after which you want to enter the record  : ";
	cin >> val;
	bool flag = false;
	node *tmp = head;
	node *p;
	while (tmp != NULL)
	  {
	    if (tmp->id == val)
	      {
		node *newer = new node;
		fflush (stdin);
		cout << "\n Enter  employee Id : ";
		cin.getline (newer->date, 30);
		cout << "\n\t\t  Enter employee  id : ";
		cin >> newer->id;
		fflush (stdin);
		cout << "\n\n\t\t Enter full name of employee : ";
		cin.getline (newer->name, 50);
		fflush (stdin);
		cout << "\n\n\t\t Enter the qualification of employee : ";
		cin.getline (newer->qua, 50);
		fflush (stdin);
		cout << "\n\nEnter address";
		cin.getline (newer->addrs, 50);
		fflush (stdin);
		cout << "\nEnter city name : ";
		cin.getline (newer->city, 30);
		fflush (stdin);
		cout << "Enter job title  : ";
		cin.getline (newer->jobtitle, 30);
		fflush (stdin);
		cout << "Enter city name : ";
		cin.getline (newer->city, 30);
		fflush (stdin);
		cout << "\n\tEnter employee salary : ";
		cin >> newer->salary;
		fflush (stdin);
		cout << "\n\t Enter join date : ";
		cin.getline (newer->date, 30);
		fflush (stdin);
		newer->next = tmp;
		newer->pre = tmp->pre;
		node *p;
		p = tmp->pre;
		p->next = newer;
		tmp->pre = newer;
		flag = true;
	 }
	    tmp = tmp->next;
	 }
	 
	if (flag == false)
	  {
	    cout<<"\n\n\t RECORD NOT FOUND !!! " << endl;
	  }

    }

  }

void del ()
{
    
    
  if (head == NULL)
    {
      cout << "\n\t List is empty !! " << endl;
      cout << "\n\t Add a new record \n Y or N : ";
      cin >> ch;
      if (ch == 'Y' || ch == 'y')
	{
	  add_first();
	  return;

	}
      else
	{
	  exit (1);
	}

    }
  else
    {
      int val;
	cout << "\n\t Enter id which you want to delete    : ";
      cin >> val;
      node *tmp = head;
      bool flag = false;
      if (tmp->id == val)
	{
	  head = tmp->next;
	  head->pre = NULL;
	  flag = true;
	  delete tmp;
	  if (flag == true)
	    {
	      cout << "\n Record  has been deleted succesfull ! " << endl;
	    }
	}
      else
	{
	  while (tmp != NULL)
	    {
	      if (tmp->id == val)
		{
		  node *p, *q;
		  if (tmp->next == NULL)
		    {
		      p = tmp->pre;
		      p->next = NULL;
		      flag = true;
		      delete tmp;

		    }
		  else
		    {
		      p = tmp->pre;
		      q = tmp->next;
		      p->next = q;
		      q->pre = p;
		      flag = true;
		      delete tmp;
		    }
		}
	      tmp = tmp->next;
	    }
	  if (flag == false)
	    {
	      cout << "\n value is not found !! " << endl;
	    }
	}


    }
}


void show()
{
    
    
    if (head == NULL)
    {
      cout << "\n\t List is empty !! " << endl;
      cout << "\n\t Add a new record \n Y or N : ";
      cin >> ch;
      if (ch == 'Y' || ch == 'y')
	{
	  add_first ();
	  return ;

	}
      else
	{
	  exit (1);
	}

    }
    else
    {
        node*tmp=head;
        while(tmp!=NULL)
        {
            cout<<"\n ......EMPLOYEE INFORMATION ......"<<endl;
            cout<<"\n\t ID : "<<tmp->id<<endl;
            cout<<"\n\n\t  Name : "<<tmp->name<<endl;
            cout<<"\n\n\t Qualifications : "<<tmp->qua<<endl;
            cout<<"\n\t Address : "<<tmp->addrs<<endl;
            cout<<"\n\t City : "<<tmp->city<<endl;
            cout<<"\n\t Job title : "<<tmp->jobtitle<<endl;
            cout<<"\n\t salary : "<<tmp->salary<<endl;
            cout<<"\n\t joining date : "<<tmp->date;
            
            tmp=tmp->next;
            
        }
    }
}

void search()
{
    if (head == NULL)
    {
      cout << "\n\t List is empty !! " << endl;
      cout << "\n\t Add a new record \n Y or N : ";
      cin >> ch;
      if (ch == 'Y' || ch == 'y')
	{
	  add_first ();
	  return;
	  
	}
	else
	{
	  exit (1);
	}
	
  }
   else
    {
        int val;
	cout << "\n\t Enter employee  id which you want to search : ";
     cin >> val;
      node *tmp = head;
      bool flag = false;
      if (tmp->id == val)
      {
         cout<<"\n ......EMPLOYEE INFORMATION ......"<<endl;
            cout<<"\n\t ID : "<<tmp->id<<endl;
            cout<<"\n\n\t  Name : "<<tmp->name<<endl;
            cout<<"\n\n\t Qualifications : "<<tmp->qua<<endl;
            cout<<"\n\t Address : "<<tmp->addrs<<endl;
            cout<<"\n\t City : "<<tmp->city<<endl;
            cout<<"\n\t Job title : "<<tmp->jobtitle<<endl;
            cout<<"\n\t salary : "<<tmp->salary<<endl;
            cout<<"\n\t joining date : "<<tmp->date;
            return;  
      }
      tmp=tmp->next;
      
    }
}


void update ()
{
    if (head == NULL)
    {
      cout << "\n\t List is empty !! " << endl;
      cout << "\n\t Add a new record \n Y or N : ";
      cin >> ch;
      if (ch == 'Y' || ch == 'y')
	{
	  add_first ();
	  return;

	}
	
  }
  else 
  {
      int val;
      cout<<"\n\t  Enter employee id whose  record you want to Update : ";
      cin>>val;
      node*tmp=head;
      while(tmp!=NULL)
      {
        if (tmp->id == val)
      {
          fflush(stdin);
              cout << "\n\t\t  Enter employee  id : ";
              cin >> tmp->id;
    fflush (stdin);
    cout << "\n\n\t\t Enter full name of employee : ";
    cin.getline (tmp->name, 50);
    fflush (stdin);
    cout << "\n\n\t\t Enter the qualification of employee : ";
    cin.getline (tmp->qua, 50);
    fflush (stdin);
    cout << "\n\nEnter address";
    cin.getline (tmp->addrs, 50);
    fflush (stdin);
    cout << "\nEnter city name : ";
    cin.getline (tmp->city, 30);
    fflush (stdin);
    cout << "Enter job title  : ";
    cin.getline (tmp->jobtitle, 30);
    fflush (stdin);
    cout << "Enter city name : ";
    cin.getline (tmp->city, 30);
    fflush (stdin);
    cout << "\n\tEnter employee salary : ";
    cin >> tmp->salary;
    fflush (stdin);
    cout << "\n\t Enter join date : ";
    cin.getline (tmp->date, 30);
    fflush (stdin);
      
   }
    tmp=tmp->next;      
  }
  cout<<"Record has been updated succesfully !! "<<endl;
  
  }
 
  }
  
};

int main()
{
    int n;
    char ch;
    employee em;
    x2:
    em.menu();
    cout<<"\n\t Enter your choice : ";
    cin>>n;
     if(n==1)
    {
        x1:
        cout<<"\n Where do you want to enter the record : "<<endl;
        cout<<"\n\n\t 1- first record : "<<endl;
        cout<<"\n\t\t 2- Last record : "<<endl;
        cout<<"\t\t\n 3- Add record after record :  "<<endl;
        cout<<"\n\t Add record before record : "<<endl;
        cout<<"\n Enter choice : "<<endl;
        cin>>n;
        if(n==1)
        {
            em.add_first();
            cout<<"Go to main menu again ?? "<<endl;
            cin>>ch;
            fflush(stdin);
            if(ch=='Y'||ch=='y')
            {
                goto x2;
            }
            else 
            {
                exit(1);
            }
            
        }
        else if (n==2)
        {
          em.add_last();
          cout<<"\n\t  Go to main menu again : "<<endl;
          cin>>n;
          if(ch=='Y'||ch=='y')
            {
                goto x2;
            }
            else 
            {
                exit(1);
            }
        }
        else if (n==3)
        {
            em.add_after();
         cout<<"\n\t  Go to main menu again : "<<endl;
         cin>>n;
         if(ch=='Y'||ch=='y')
            {
                goto x2;
            }
            else 
            {
                exit(1);
            } 
        }
        else if (n==4)
        {
           em.add_before();
        cout<<"\n\t  Go to main menu again : "<<endl;
        cin>>ch;
         if(ch=='Y'||ch=='y')
            {
                goto x2;
            }
            else 
            {
                exit(1);
            } 
           
        }
        else 
        {
            cout<<"Please enter correct choice !!!! "<<endl;
            goto x1;
            
        }
        
    }
    else if(n==2)
    {
        em.search();
        cout<<"\n\t  Go to main menu again : "<<endl;
        cin>>ch;
         if(ch=='Y'||ch=='y')
            {
                goto x2;
            }
            else 
            {
                exit(1);
            } 
        
    }
    else if (n==3)
    {
        em.update();
        cout<<"\n\t  Go to main menu again : "<<endl;
        cin>>ch;
         if(ch=='Y'||ch=='y')
            {
                goto x2;
            }
            else 
            {
                exit(1);
            } 
    }
    else if(n==4)
    {
        em.del();
        cout<<"\n\t  Go to main menu again : "<<endl;
        cin>>ch;
         if(ch=='Y'||ch=='y')
            {
                goto x2;
            }
            else 
            {
                exit(1);
            } 
    }
    else if (n==5)
    {
        em.show();
        cout<<"\n\t  Go to main menu again : "<<endl;
        cin>>ch;
         if(ch=='Y'||ch=='y')
            {
                goto x2;
            }
            else 
            {
                exit(1);
            } 
    }
    else if(n==6)
    {
       
       exit(1);
       
    }
    else
    {
        cout<<"Enter a valid choice !!! ";
        goto x2;
        
    }
    
    return 0;
    
}
 
 





