#include<bits/stdc++.h>
using namespace std;
void firstFit(int holeSize[], int m,
 int processSize[], int n)
{
 int allocation[n];
 memset(allocation, -1, sizeof(allocation));
 for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < m; j++)
 {
 if (holeSize[j] >= processSize[i])
 {
 allocation[i] = j;
 holeSize[j] -= processSize[i];
 cout << "\nProcess No.\tProcess Size\thole no.\n";
 for (int i = 0; i < n; i++)
 {
 cout << " " << i+1 << "\t\t"<< processSize[i] << "\t\t";
 if (allocation[i] != -1)
 cout << allocation[i] + 1;
 else
 cout << "Not Allocated ";
 cout<<endl;
 }
 break;
 }
 }
 cout<<"Space in the hole after allocation"<<endl;
 for(int i=0;i<=n;i++)
 {
 cout<<holeSize[i];
 cout<<"\t";
 }
 cout<<endl;
 cout<<endl;
 cout<<endl;
 }
 cout<<"------------------------------------------------------"<<endl;
 cout<<"Space in the holes after all the process are allocated"<<endl;
 for(int i=0;i<=n;i++)
 {
 cout<<holeSize[i];
 cout<<"\t";
 }
 cout<<endl;
 cout<<"------------------------------------------------------"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<endl;
}
void NextFit(int holeSize[], int m, int processSize[], int n)
{
 int allocation[n], j = 0;
 memset(allocation, -1, sizeof(allocation));
 for (int i = 0; i < n; i++) {
 while (j < m) {
 if (holeSize[j] >= processSize[i]) {
 allocation[i] = j;
 holeSize[j] -= processSize[i];
 break;
 }
 j = (j + 1) % m;
 }
 cout << "\nProcess No.\tProcess Size\thole no.\n";
 for (int i = 0; i < n; i++) {
 cout << " " << i + 1 << "\t\t" << processSize[i]<< "\t\t";
 if (allocation[i] != -1)
 cout << allocation[i] + 1;
 else
 cout << "Not Allocated";
 cout << endl;
 }
 cout<<endl;
 cout<<"Space in the hole after allocation"<<endl;
 for(int i=0;i<=n;i++)
 {
 cout<<holeSize[i];
 cout<<"\t";
 }
 cout<<endl;
 cout<<endl;
 cout<<endl;
 }
 cout<<"------------------------------------------------------"<<endl;
 cout<<"Space in the holes after all the process are allocated"<<endl;
 for(int i=0;i<=n;i++)
 {
 cout<<holeSize[i];
 cout<<"\t";
 }
 cout<<endl;
 cout<<"------------------------------------------------------"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<endl;
}
void bestFit(int holeSize[], int m, int processSize[], int n)
{
 int allocation[n];
 memset(allocation, -1, sizeof(allocation));
 for (int i=0; i<n; i++)
 {
 int bestIdx = -1;
 for (int j=0; j<m; j++)
 {
 if (holeSize[j] >= processSize[i])
 {
 if (bestIdx == -1)
 bestIdx = j;
 else if (holeSize[bestIdx] > holeSize[j])
 bestIdx = j;
 }
 }
 if (bestIdx != -1)
 {
 allocation[i] = bestIdx;
 holeSize[bestIdx] -= processSize[i];
 }
 cout << "\nProcess No.\tProcess Size\thole no.\n";
 for (int i = 0; i < n; i++)
 {
 cout << " " << i+1 << "\t\t" << processSize[i] << "\t\t";
 if (allocation[i] != -1)
 cout << allocation[i] + 1;
 else
 cout << "Not Allocated";
 cout << endl;
 }
 cout<<"Space in the holes after allocation"<<endl;
 for(int i=0;i<=n;i++)
 {
 cout<<holeSize[i];
 cout<<"\t";
 }
 cout<<endl;
 cout<<endl;
 cout<<endl;
 }
 cout<<"------------------------------------------------------"<<endl;
 cout<<"Space in the holes after all the process are allocated"<<endl;
 for(int i=0;i<=n;i++)
 {
 cout<<holeSize[i];
 cout<<"\t";
 }
 cout<<endl;
 cout<<"------------------------------------------------------"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<endl;
}
void worstFit(int holeSize[], int m, int processSize[],
 int n)
{
 int allocation[n];
 memset(allocation, -1, sizeof(allocation));
 for (int i=0; i<n; i++)
 {
 int wstIdx = -1;
 for (int j=0; j<m; j++)
 {
 if (holeSize[j] >= processSize[i])
 {
 if (wstIdx == -1)
 wstIdx = j;
 else if (holeSize[wstIdx] < holeSize[j])
 wstIdx = j;
 }
 }
 if (wstIdx != -1)
 {
 // allocate block j to p[i] process
 allocation[i] = wstIdx;
 // Reduce available memory in this block.
 holeSize[wstIdx] -= processSize[i];
 }
 cout << "\nProcess No.\tProcess Size\thole no.\n";
 for (int i = 0; i < n; i++)
 {
 cout << " " << i+1 << "\t\t" << processSize[i] << "\t\t";
 if (allocation[i] != -1)
 cout << allocation[i] + 1;
 else
 cout << "Not Allocated";
 cout << endl;
 }
 cout<<"Space in the holes after allocation"<<endl;
 for(int i=0;i<=n;i++)
 {
 cout<<holeSize[i];
 cout<<"\t";
 }
 cout<<endl;
 cout<<endl;
 cout<<endl;
 }
 cout<<"------------------------------------------------------"<<endl;
 cout<<"Space in the holes after all the process are allocated"<<endl;
 for(int i=0;i<=n;i++)
 {
 cout<<holeSize[i];
 cout<<"\t";
 }
 cout<<endl;
 cout<<"------------------------------------------------------"<<endl;
 cout<<endl;
 cout<<endl;
 cout<<endl;
}
int main()
{
 int holeSize[] = {100,600, 200, 300, 700};
 int holeSize1[] = {100, 600, 200, 300, 700};
 int holeSize2[] = {100, 600, 200, 300, 700};
 int holeSize3[] = {100, 600, 200, 300, 700};
 int processSize[] = {118, 350, 156, 499};
 int m = sizeof(holeSize) / sizeof(holeSize[0]);
 int n = sizeof(processSize) / sizeof(processSize[0]);
 cout<<"Number of Holes:";
 cout<<m<<endl;
 cout<<"Number of Process:";
 cout<<n<<endl;
 cout<<"Size of holes are 100,600,200,300,700 in order"<<endl;
 cout<<"---------------FIRST FIT-----------------"<<endl;
 cout<<"-----------------------------------------"<<endl;
 firstFit(holeSize, m, processSize, n);
 cout<<endl;
 cout<<endl;
 cout<<endl;
 cout<<"---------------NEXT FIT------------------"<<endl;
 cout<<"-----------------------------------------"<<endl;
 NextFit(holeSize1, m, processSize, n);
 cout<<endl;
 cout<<endl;
 cout<<endl;
 cout<<"---------------BEST FIT------------------"<<endl;
 cout<<"-----------------------------------------"<<endl;
 bestFit(holeSize2, m, processSize, n);
 cout<<endl;
 cout<<endl;
 cout<<endl;
 cout<<"---------------WORST FIT-----------------"<<endl;
 cout<<"-----------------------------------------"<<endl;
 worstFit(holeSize3, m, processSize, n);
 return 0 ;
}
