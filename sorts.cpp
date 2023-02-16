#ifndef __SORTS_CPP
#define __SORTS_CPP
#include "sorts.h"
#include "list.h"
#include "list.cpp"
#include <vector>

//=====================================================================================
vector<long> MergeSort(vector<long> nums)
{
	//List<long> srt2;
	// srt2.insertAtTail(1202);
	 // cout << srt2.getHead()->value;
	 vector<long> name; 
	  List<long int> srt;
	 for( int i = 0; i < nums.size();i++)
	 {
	 	long x = nums[i];
	 srt.insertAtTail(x);
	// cout << endl;
	}
	
	// cout << "YO";
	sort(srt,0,nums.size()-1);
	
	ListItem<long>* temp = srt.getHead();

	 while(temp->next!=NULL)
	{
		name.push_back(temp->value);
		temp = temp->next;
	
	}
	name.push_back(temp->value);
	 return name;
}

void sort(List<long int> &srt,int l, int h)
{
	//cout << l << endl;
	//cout << h << endl;
	
	if(l<h)
	{
		int m = (l+h)/2;
		sort(srt,l,m);
		sort(srt,m+1,h);
		merge(srt,l,m,m+1,h);
		// ListItem<long> *temp = srt.getHead();
	}
	// 	for (int i=0;i<5;i++)
	// {
	// 	cout << temp->value << "\n";
	// 	temp=temp->next;
	// }
	// cout << "\n";
	// }

}
void merge(List<long int> &srt,int start1, int end1, int start2, int end2)
{
	int s = end2-start1 + 1;
	int count = 0;
	int i = start1;
	int j = end1;
	int k = start2;
	int l= end2;
		ListItem<long> *temp1=srt.getHead();
		ListItem<long> *temp2=srt.getHead();
//	ListItem<long> *y = new ListItem<long>[s];
	vector<long> y;
	for(int o = 0; o<i;o++)
		{
			temp1=temp1->next;
		}

	//	cout << "K IS " << k;
	for(int o = 0; o<k;o++)
		{
			temp2=temp2->next;
		}
	while(i<=end1 and k <= end2)
	{
		
		if(temp1->value <= temp2->value)
		{
			y.push_back(temp1->value);
			temp1=temp1->next;
			i=i+1;
			count = count +1;

		}
		else if(temp1->value > temp2->value){
			y.push_back(temp2->value);
			count = count +1;
			temp2=temp2->next;
			k=k+1;
		}
	}
	while(i<=end1)
	{
		
		y.push_back(temp1->value);
		count = count +1;
		temp1 = temp1->next;
		i=i+1;
	}
	while(k<=end2)
	{
	
		y.push_back(temp2->value);
		k=k+1;
		temp2=temp2->next;
		count = count+1;
	}

	ListItem<long> *temp3=srt.getHead();
	for (int o = 1;o<=start1;o++)
	{
		temp3 = temp3->next;
	}
	for(int m=0;m<count;m++)
	{
		temp3->value = y[m];
		temp3=temp3->next;

	}
}
// ListItem<long> *temp = srt.getHead();
// cout <<"START OMG";
// 		for (int i=0;i<5;i++)
// 	{
// 		cout << temp->value << "\n";
// 		temp=temp->next;
// 	}
// cout << "END OMG";
// }

// int main()
// {
// 	vector<long> x;
// 	x.push_back(100);
// 	x.push_back(12832151);
// 	x.push_back(123123);
// 	x.push_back(250);
// 	x.push_back(214124124);
// 	vector<long> y = MergeSort(x);
// 	cout << "FINAL";
// 	for (int i=0;i<5;i++)
// 	{
// 		cout << y[i] << endl;
// 	}
// }

#endif