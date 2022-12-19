#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
void Create(int Arr[],int n){
	cout<<"Enter the elements of the Array : ";
	for(int i=0;i<n;i++){
		cin>>Arr[i];
	}
}
void Print(int Arr[],int n){
	cout<<"The elements in Array are : ";
	for(int i=0;i<n;i++){
		cout<<Arr[i]<<" ";
	}
	cout<<endl;
}
void Sum(int Arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=Arr[i];
	}
	cout<<"Sum of the Array is "<<sum;
	cout<<endl;
}
int linear_search(int Arr[],int n,int key){
	for(int i=0;i<n;i++)
		if(Arr[i]==key)
	    return i;
	    return -1;
}
int binary_search(int Arr[],int l,int h,int key){
	if(l<=h){
	    
		int mid=l+(h-1)/2;
		if(Arr[mid]==key)
		return mid;
		if(Arr[mid]>key)
		return binary_search(Arr,l,mid-1,key);
		return binary_search(Arr,mid+1,h,key);
	}
	    return -1;
}
//At specific position
int insertion(int Arr[],int n,int element,int index){
	for(int i=n-1;i>=index;i--){
		Arr[i+1]=Arr[i];
	}
	   Arr[index]=element;
	   return 1;
}
//In the beginning
void insert_begin(int Arr[],int n,int element){
	for(int i=n-1;i>=0;i--){
	Arr[i+1]=Arr[i];
}
    Arr[0]=element;
}
//Inserion after a given element
int insert_elem(int Arr[],int n,int element,int index){
	index++;
	for(int i=n-1;i>=index;i--){
		Arr[i+1]=Arr[i];
	}
	   Arr[index]=element;
	   return 1;
}
//Insertion in a sorted array
void insertSorted(int Arr[], int n, int element){
	int pos=0;
    for(int i=0;i<n;i++){
    	if(Arr[i]<element)
    		pos++;
		else
		    break;
	}
	for(int i=n-1;i>=pos;i--){
		Arr[i+1]=Arr[i];
		}
		Arr[pos]=element;
}
void bubble_sort(int Arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(Arr[j]>Arr[j+1]){
                swap(Arr[j],Arr[j+1]);
            }
        }
    }
}
void delete_pos(int Arr[],int n,int pos){
	for(int i=pos;i<n-1;i++){
		Arr[i]=Arr[i+1];
	}
}
void delete_elem(int Arr[],int n,int index){
	for(int i=index;i<n;i++){
		Arr[i]=Arr[i+1];
	}
}
void Merge(int a[], int b[], int res[],  
    int n, int m)  
{  
    int i = 0, j = 0, k = 0;  
    int merge_arr[k];
    while (i < n) {   
        merge_arr[k]=a[i]; 
        i++;
        k++;
    }  
    while (j < m) {   
        merge_arr[k]=b[j];  
        j++;
        k++;  
    } 
}
int main(){
	int Prog_num,n;

	int Arr[n];
	cout<<"Menu : "<<endl;
	cout<<"1.Create an array. "<<endl;
    cout<<"2.Exit the program. "<<endl;
    cout<<endl;
    jump:
	do{
        cout<<"Enter the program number : ";
		cin>>Prog_num;
		switch(Prog_num){
			case 1 : 
			     cout<<"The size of the Array : ";
                 cin>>n;
			     Create(Arr,n);
			     cout<<"\nSub-Menu : "<<endl;
			     cout<<"A.Print the elements of the array. "<<endl;
                 cout<<"B.Sum of all the elements of the array. "<<endl;
                 cout<<"C.Linear Search an element. "<<endl;
                 cout<<"D.Insert an element at specific position. "<<endl;
                 cout<<"E.Insert an element in the beginning. "<<endl;
                 cout<<"F.Insert an element in the end. "<<endl;
                 cout<<"G.Insert an element after the given element. "<<endl;
                 cout<<"H.Deletion of a given element from the array. "<<endl;
                 cout<<"I.Bubble Sort the Array. "<<endl;
                 cout<<"J.Binary Search an element. "<<endl;
                 cout<<"K.Insert an element in a sorted Array."<<endl;
                 cout<<"L.Deletion of an element from a given location. "<<endl;
                 cout<<"M.Merging of two linear arrays into a single array."<<endl;
                 cout<<"N.Goto the main Program. "<<endl;
                 
                 char sub_prog;
			     do{
			     	cout<<"\n\nEnter the sub-program : ";
			     	cin>>sub_prog;
			     	switch(sub_prog){
			     		case 'a':
			     		case 'A':
			     			Print(Arr,n);
			     			break;
			     		case 'b':
			     		case 'B':
			     			Sum(Arr,n);
			     			break;
			     		case 'c':	
			     		case 'C':{
							
			     			int ele;
			     			cout<<"Enter the element to be found : ";
			     			cin>>ele;
			     			int index=linear_search(Arr,n,ele);
			     			(index==-1)
			     			? cout<<"Element "<<ele<<" is not present in the Array. "<<endl
			     			: cout<<"Element "<<ele<<" is present in the Array at index "<<index <<endl;
			     			}
							 break;
			     		
			     		case 'd':
			     		case 'D':  
			     		{
			     		    int element,idx;
			     		    cout<<"Before Insertion : ";
			     		    for(int i=0;i<n;i++)
                            cout<<Arr[i]<<" ";
			     			cout<<"\nEnter the element to be inserted at the given index : ";
			     			cin>>element;
			     			cout<<"Enter the index: ";
			     			cin>>idx;
			     			insertion(Arr,n,element,idx);
			     			n+=1;
			     			cout<<"After Insertion : ";
			     			for(int i=0;i<n;i++)
                            cout<<Arr[i]<<" ";
			     		}
			     		break;
			     		case 'e':
			     		case 'E':
			     		{
			     			int element,i ;
			     			cout<<"Before Insertion : ";
			     		    for(int i=0;i<n;i++)
                            cout<<Arr[i]<<" ";
			     			cout<<"\nEnter the element to be inserted in the beginning : ";
			     			cin>>element;
						    insert_begin(Arr,n,element);
					        n+=1;
					        cout<<"After Insertion : ";
						    for(int i=0;i<n;i++)
                            cout<<Arr[i]<<" ";
						 }
							 break;
						case 'f':
						case 'F':
						{
							int i,element;cout<<"Array before Insertion : ";
                            for(int i=0;i<n;i++){
                            cout<<Arr[i]<<" ";
                            }
                            cout << "\nEnter element to be inserted in the end : ";
                            cin >> element;
                            for(int i=n;i>=n;i--)
                            Arr[i] = element;
                            n=n+1;
                            cout << "Array after Insertion :  ";
                            for (int i = 0; i < n; i++)
                            cout << Arr[i] << " ";
						}
						    cout<<endl;
						break;
						case 'g':
                        case 'G':
                        {   
                            int element,key;
                            cout<<"Array before Insertion : ";
                       		for(int i=0;i<n;i++){
                       		    cout<<Arr[i]<<" ";
                       		}
                       		cout<<"\nEnter the element after which you want to insert an element : ";
                       		cin>>element;
                       		
                       		int index=linear_search(Arr,n,element);
                           
                            cout<<"Enter the element to be inserted : ";
                       		cin>>key;
                       	    insert_elem(Arr,n,key,index);
                       		n+=1;
                       		cout<<"Array after insertion : ";
                            for (int i = 0; i<n; i++){
                            cout << Arr[i] << " ";
                            }
                            cout<<endl;
						}
							break;
						case 'h':
						case 'H':
							{
							int element;
							cout<<"Array Before Deletion : ";
							for(int i=0;i<n;i++){
								cout<<Arr[i]<<" ";
							}
							cout<<"\nEnter the element to be deleted : ";
							cin>>element;
							
							int index=linear_search(Arr,n,element);
							cout<<"Index : "<<index<<endl;
							
							delete_elem(Arr,n,index);
							n-=1;
							cout<<"Array After Deletion : ";
							for(int i=0;i<n;i++){
								cout<<Arr[i]<<" ";
							}
							cout<<endl;
							}
							break;
						case 'i':
						case 'I':
						{
						    cout<<"Before Sorting : ";
                            for(int i=0;i<n;i++){
                                cout<<Arr[i]<<" ";
                            }
                            bubble_sort(Arr,n);
                            cout<<"\nAfter Sorting : ";
                            for(int i=0;i<n;i++){
                                cout<<Arr[i]<<" ";
                            }
                            cout<<endl;
						}
						break;
						case 'j':
			     		case 'J':
			     			{
							int key;
			     			cout<<"Enter the element to be found : ";
			     			cin>>key;
			     			int ind=binary_search(Arr,0,n,key);
							(ind==-1)	
							? cout<<"Element "<<key<<" is not present in the Array. "<<endl
			     			: cout<<"Element "<<key<<" is present in the Array at index "<<ind <<endl;
			     		}
			     		break;
						case 'k':
						case 'K':
						{
                            int i, element ;
                            cout<<"Before insertion : ";
                            for(int i=0;i<n;i++)
                            cout<<Arr[i]<<" ";
                            cout<<"\nEnter the element to be inserted in the Sorted Array : ";
                            cin>>element;
                            insertSorted(Arr,n,element);
                            n+=1;
                            cout << "After Insertion: ";
                            for (i = 0; i < n; i++)
                            cout << Arr[i] << " ";
                         }
                            cout<<endl;
                         break;
                        case 'l':
                        case 'L':
                        {
                        	int pos;
                        	cout<<"Before deletion : ";
                            for(int i=0;i<n+1;i++)
                        	cout<<Arr[i]<<" ";
                        	cout<<"\nEnter the position of the element to be deleted : ";
                        	cin>>pos;
							delete_pos(Arr,n,pos);
							cout << "-After deletion : ";
                            for (int i = 0; i < n; i++)
                            cout << Arr[i] << " ";
                        }
                           cout<<endl;
                        break;
                        case 'm':
                        case 'M':
                        {
						    int n1,Arr1[n1],n2,Res[n2],i,k;
						    cout<<"The first Array : ";
						    for(int i=0;i<n;i++)
                        	cout<<Arr[i]<<" ";
						    cout<<"\nEnter the size of the second array : ";
						    cin>>n2;
						    cout<<"The elements of second array : ";
						    for(int j=0;j<n1;j++){
						    cin>>Arr1[j];
					       	}
					       	cout<<endl;
					       	n2=n+n1;
						    Res[n2];
						    Merge(Arr,Arr1,Res,n,n1);
						    cout<<"After Merging : ";
						    for(i=0;i<n+n1;i++){
						    	cout<<Res[i]<<" ";
							}
							cout<<endl;
						}
						break;
			     		case 'n':
			     		case 'N': 
			     		{
			     			goto jump;
						 }
						default :
						{
							cout<<"Error : Enter a valid choice "<<endl;
							break;
						}
			     	}
			     }
				 while(sub_prog!='N'|| sub_prog!='n');
			     break;
		    case 2 :
		    	 cout<<"Do you want to exit ? - Yes or No ?";
		    	 cout<<"\nPress Y or N :";
		    	 char option;
		    	 cin>>option;
		    	 if(option=='N' || option=='n')
		    	 goto jump;
		         else
				 exit(0);
			default :
				 cout<<"Error : Please enter a valid choice. ";
				 cout<<endl;
			}
		}
      
	 while(Prog_num!=2);
	 return 0;
}
