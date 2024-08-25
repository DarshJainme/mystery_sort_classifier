#include<bits/stdc++.h>
#include "mystery_sort.h"
#define seev(a) for(auto x:a){cout<<x<<" ";}cout<<endl;

using namespace std;

void solve(int tc){
    int n,a,b,d;
    cin>>n;
    int reversesorted[n];
    for (int i = 0; i < n; i++)
    {
        cin>>reversesorted[i];
    }
    a=n;
    cin>>n;
    b=n;
    int sorted[n];
    for (int j = 0; j < n; j++)
    {
        cin>>sorted[j];
    }
    cin>>n;
    d=n;
    int random[n];
    for (int i = 0; i < n; i++)
    {
        cin>>random[i];
    }
    // RANDOM IS OF SIZE D
    // for finding mergesort
    set <int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    // initially all sorts possible
    long double mintime=INT_MAX;
    int sortreq=0;
    long double c;
    cout<<"First checking for unsorted array:\n";
    int *array=new int [a];
    for (int i = 0; i < a; i++)
    {
        array[i]=reversesorted[i];
    }
    c=sort1(array,a,10);// high time limit so that all sort functions work properly
    cout<<"Sorting time for sort"<<1<<" is:"<<c<<endl;
    if(c<mintime)
    {
        mintime= c;
        sortreq=1;
    }
    
    for (int i = 0; i < a; i++)
    {
        array[i]=reversesorted[i];
    }
    c=sort2(array,a,10);// high time limit so that all sort functions work properly
    cout<<"Sorting time for sort"<<2<<" is:"<<c<<endl;
    if(c<mintime)
    {
        
        mintime= c;
        sortreq=2;
    }
    
    for (int i = 0; i < a; i++)
    {
        array[i]=reversesorted[i];
    }
    c=sort3(array,a,10);// high time limit so that all sort functions work properly
    cout<<"Sorting time for sort"<<3<<" is:"<<c<<endl;
    if(c<mintime)
    {
        mintime= c;
        sortreq=3;
    }
    for (int i = 0; i < a; i++)
    {
        array[i]=reversesorted[i];
    }
    c=sort4(array,a,10);// high time limit so that all sort functions work properly
    cout<<"Sorting time for sort"<<4<<" is:"<<c<<endl;
    if(c<mintime)
    {
        mintime= c;
        sortreq=4;
    }
    for (int i = 0; i < a; i++)
    {
        array[i]=reversesorted[i];
    }
    c=sort5(array,a,10);// high time limit so that all sort functions work properly
    cout<<"Sorting time for sort"<<5<<" is:"<<c<<endl;
    if(c<mintime)
    {
        mintime= c;
        sortreq=5;
    }
    cout<<"Sort number "<<sortreq<<" is mergesort."<<endl;
    s.erase(sortreq);
    // cout<<mintime<<endl;

    delete array;
    // Checking for insertion sort
    array=new int[b];
    mintime=INT_MAX,sortreq=0;
    cout<<"*******************************************************************************"<<endl;
    cout<<"Checking on sorted array:"<<endl;
    if(s.find(1)!=s.end())
    {
        for (int i = 0; i < b; i++)
        {
            array[i]=sorted[i];
        }
        c=sort1(array,b,10);// high time limit so that all sort functions work properly
        if(c<mintime)
        {
            mintime=c;
            sortreq=1;
        }
        cout<<"Sorting time for sort"<<1<<" is:"<<c<<endl;
    }
    if(s.find(2)!=s.end())
    {
        for (int i = 0; i < b; i++)
        {
            array[i]=sorted[i];
        }
        
        c=sort2(array,b,10);// high time limit so that all sort functions work properly
        if(c<mintime)
        {
            mintime=c;
            sortreq=2;
        }
        cout<<"Sorting time for sort"<<2<<" is:"<<c<<endl;
    }
    if(s.find(3)!=s.end())
    {
        for (int i = 0; i < b; i++)
        {
            array[i]=sorted[i];
        }
        
        c=sort3(array,b,10);// high time limit so that all sort functions work properly
        if(c<mintime)
        {
            mintime=c;
            sortreq=3;
        }
        cout<<"Sorting time for sort"<<3<<" is:"<<c<<endl;
    }
    if(s.find(4)!=s.end())
    {
        for (int i = 0; i < b; i++)
        {
            array[i]=sorted[i];
        }
        
        c=sort4(array,b,10);// high time limit so that all sort functions work properly
        if(c<mintime)
        {
            mintime=c;
            sortreq=4;
        }
        cout<<"Sorting time for sort"<<4<<" is:"<<c<<endl;
    }
    if(s.find(5)!=s.end())
    {
        for (int i = 0; i < b; i++)
        {
            array[i]=sorted[i];
        }
        
        c=sort5(array,b,10);// high time limit so that all sort functions work properly
        if(c<mintime)
        {
            mintime=c;
            sortreq=5;
        }
        cout<<"Sorting time for sort"<<5<<" is:"<<c<<endl;
    }
    cout<<"Sort number "<<sortreq<<" is Insertion Sort."<<endl;
    s.erase(sortreq);
    delete array;
    array= new int[d];
    mintime=INT_MAX,sortreq=0;
    
    cout<<"*******************************************************************************"<<endl;
    cout<<"Checking on random array:"<<endl;
    // for quicksort
    if(s.find(1)!=s.end())
    {
        for (int i = 0; i < d; i++)
        {
            array[i]=random[i];
        }
        c=sort1(array,d,10);
        if(c<mintime)
        {
            mintime=c;
            sortreq=1;
        }
        cout<<"Sorting time for sort"<<1<<" is:"<<c<<endl;
    }
    if(s.find(2)!=s.end())
    {
        for (int i = 0; i < d; i++)
        {
            array[i]=random[i];
        }
        c=sort2(array,d,10);
        if(c<mintime)
        {
            mintime=c;
            sortreq=2;
        }
        cout<<"Sorting time for sort"<<2<<" is:"<<c<<endl;
    }
    if(s.find(3)!=s.end())
    {
        for (int i = 0; i < d; i++)
        {
            array[i]=random[i];
        }
        c=sort3(array,d,10);
        if(c<mintime)
        {
            mintime=c;
            sortreq=3;
        }
        cout<<"Sorting time for sort"<<3<<" is:"<<c<<endl;
    }
    if(s.find(4)!=s.end())
    {
        for (int i = 0; i < d; i++)
        {
            array[i]=random[i];
        }
        c=sort4(array,d,10);
        if(c<mintime)
        {
            mintime=c;
            sortreq=4;
        }
        cout<<"Sorting time for sort"<<4<<" is:"<<c<<endl;
    }
    if(s.find(5)!=s.end())
    {
        for (int i = 0; i < d; i++)
        {
            array[i]=random[i];
        }
        c=sort5(array,d,10);
        if(c<mintime)
        {
            mintime=c;
            sortreq=5;
        }
        cout<<"Sorting time for sort"<<5<<" is:"<<c<<endl;
    }
    cout<<"Sort number "<<sortreq<<" is Quick Sort."<<endl;
    s.erase(sortreq);
    delete array;
    // long double maxtime=INT_MIN;
    // sortreq=0;
    // if(s.find(1)!=s.end())
    // {
    //     for (int i = 0; i < d; i++)
    //     {
    //         array[i]=reversesorted[i];
    //     }
    //     c=sort1(array,d,10);
    //     if(c>maxtime)
    //     {
    //         maxtime=c;
    //         sortreq=1;
    //     }
    //     cout<<"Sorting time for sort"<<1<<" is:"<<c<<endl;
    // }
    // if(s.find(2)!=s.end())
    // {
    //     for (int i = 0; i < d; i++)
    //     {
    //         array[i]=reversesorted[i];
    //     }
    //     c=sort2(array,d,10);
    //     if(c>maxtime)
    //     {
    //         maxtime=c;
    //         sortreq=2;
    //     }
    //     cout<<"Sorting time for sort"<<2<<" is:"<<c<<endl;
    // }
    // if(s.find(3)!=s.end())
    // {
    //     for (int i = 0; i < d; i++)
    //     {
    //         array[i]=reversesorted[i];
    //     }
    //     c=sort3(array,d,10);
    //     if(c>maxtime)
    //     {
    //         maxtime=c;
    //         sortreq=3;
    //     }
    //     cout<<"Sorting time for sort"<<3<<" is:"<<c<<endl;
    // }
    // if(s.find(4)!=s.end())
    // {
    //     for (int i = 0; i < d; i++)
    //     {
    //         array[i]=reversesorted[i];
    //     }
    //     c=sort4(array,d,10);
    //     if(c>maxtime)
    //     {
    //         maxtime=c;
    //         sortreq=4;
    //     }
    //     cout<<"Sorting time for sort"<<4<<" is:"<<c<<endl;
    // }
    // if(s.find(5)!=s.end())
    // {
    //     for (int i = 0; i < d; i++)
    //     {
    //         array[i]=reversesorted[i];
    //     }
    //     c=sort5(array,d,10);
    //     if(c>maxtime)
    //     {
    //         maxtime=c;
    //         sortreq=5;
    //     }
    //     cout<<"Sorting time for sort"<<5<<" is:"<<c<<endl;
    // }
    // cout<<"Sort number "<<sortreq<<" is Bubble Sort."<<endl;
    // s.erase(sortreq);
    // cout<<"Sort number "<< *s.begin()<< " is Selection Sort"<<endl;
    // Checking stopping sorts in between
    cout<<"*******************************************************************************"<<endl;
    cout<<"Checking by stopping sorts in between while the sort is sorting a reverse array"<<endl;
    array=new int [a];
    int maxsort=0;
    sortreq=0;
    //selection sort sorts front part and bubble sort sorts end part
    if(s.find(1)!=s.end())
    {
        for (int i = 0; i < a; i++)
        {
            array[i]=reversesorted[i];
        }
        c=sort1(array,a,0.03);
        int sortedparts=a;
        for (int i = 0; i < a-1; i++)
        {
            if(array[i]>array[i+1])
            {
                sortedparts=i+1;// this maany terms sorted
                break;
            }
        }
        if(sortedparts>maxsort)
        {
            maxsort=sortedparts;
            sortreq=1;
        }
        cout<<"Maximum sorted elements in the first half for sort"<<1<< " is:"<<sortedparts<<endl;
    }
    if(s.find(2)!=s.end())
    {
        for (int i = 0; i < a; i++)
        {
            array[i]=reversesorted[i];
        }
        c=sort2(array,a,0.03);
        int sortedparts=a;
        for (int i = 0; i < a-1; i++)
        {
            if(array[i]>array[i+1])
            {
                sortedparts=i+1;// this maany terms sorted
                break;
            }
        }
        if(sortedparts>maxsort)
        {
            maxsort=sortedparts;
            sortreq=2;
        }
        cout<<"Maximum sorted elements in the first half for sort"<<2<< " is:"<<sortedparts<<endl;
    }
    if(s.find(3)!=s.end())
    {
        for (int i = 0; i < a; i++)
        {
            array[i]=reversesorted[i];
        }
        c=sort3(array,a,0.03);
        int sortedparts=a;
        for (int i = 0; i < a-1; i++)
        {
            if(array[i]>array[i+1])
            {
                sortedparts=i+1;// this maany terms sorted
                break;
            }
        }
        if(sortedparts>maxsort)
        {
            maxsort=sortedparts;
            sortreq=3;
        }
        cout<<"Maximum sorted elements in the first half for sort"<<3<< " is:"<<sortedparts<<endl;
    }
    if(s.find(4)!=s.end())
    {
        for (int i = 0; i < a; i++)
        {
            array[i]=reversesorted[i];
        }
        c=sort4(array,a,0.03);
        int sortedparts=a;
        for (int i = 0; i < a-1; i++)
        {
            if(array[i]>array[i+1])
            {
                sortedparts=i+1;// this maany terms sorted
                break;
            }
        }
        if(sortedparts>maxsort)
        {
            maxsort=sortedparts;
            sortreq=4;
        }
        cout<<"Maximum sorted elements in the first half for sort"<<4<< " is:"<<sortedparts<<endl;
    }
    if(s.find(5)!=s.end())
    {
        for (int i = 0; i < a; i++)
        {
            array[i]=reversesorted[i];
        }
        c=sort5(array,a,0.03);
        int sortedparts=a;
        for (int i = 0; i < a-1; i++)
        {
            if(array[i]>array[i+1])
            {
                sortedparts=i+1;// this maany terms sorted
                break;
            }
        }
        if(sortedparts>maxsort)
        {
            maxsort=sortedparts;
            sortreq=5;
        }
        cout<<"Maximum sorted elements in the first half for sort"<<5<< " is:"<<sortedparts<<endl;
    }
    cout<<"Sort number "<<sortreq<<" is Selection Sort."<<endl;
    s.erase(sortreq);
    cout<<"Sort number "<< *s.begin()<< " is Bubble Sort"<<endl;
    cout<<"Thank you and have a wonderful day :)"<<endl;
}
int main()
{
    freopen("input1.txt","r",stdin);
    // ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    // cin>>t;
    int tc=0;
    while(t--){
        tc++;
        solve(tc);
    }

return 0;
}